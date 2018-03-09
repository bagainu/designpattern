env = Environment()
env.Decider('MD5-timestamp')

env.Append(CC=['g++'])
# env.Append(CPPFLAGS=['-std=c++11'])
env.Append(CPPPATH=['.'])
env.Append(CPPPATH=['./include'])

sub_scripts = Split("""
    strategy/SConscript
    observer/SConscript
    decorator/SConscript
    factory/SConscript
    singleton/SConscript
""")

build = SConscript(sub_scripts, exports=['env'])
# env.Install('./built', build)
