env = Environment()
env.Decider('MD5')

env.Append(CPPPATH=['.'])
env.Append(CPPPATH=['./include'])

sub_scripts = Split("""
    strategy/SConscript
""")

build = SConscript(sub_scripts, exports=['env'])
env.Install('./built', build)
