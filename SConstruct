# -*- mode: python -*-
import sys, os, platform, time
from SCons.Script import GetOption, SetOption

install_root = "/home/qiang.zhouq/svn/tindex/"

env = Environment()
env['install_root'] = install_root
env.Decider('MD5-timestamp')

def runUnitTest_(target, source, env):
    cmd = ""
    for item in env['ENV'].items():
        cmd += (' %s=%s' % item)

    cmd += ' %s'
    for p in source:
        dirname = os.path.dirname(p.abspath)
        print "ut test: Entering directory `%s'" % dirname
        print cmd % p.abspath
        ret = os.system(cmd % p.abspath)
        print "ATest: Leaving directory `%s'" % dirname
        if ret !=0:
            return ret

    return 0
_builders = {}
_builders['runUnitTest'] = Builder(action= runUnitTest_)

def uTest(self, target, source):
    self.Alias('test', target)
    self.runUnitTest(target, source)
_methods = []
_methods.append(uTest)

env.Append(BUILDERS = _builders)
for method in _methods:
    env.AddMethod(method)

#SetOption('duplicate', 'hard-soft-copy')
env.SConscript('SConscript', variant_dir='build', exports='env', duplicate=1)

