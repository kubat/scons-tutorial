import os

##########################
### Flags and Paths
##########################

cFlags    = "-Wall"
linkFlags = ""

if os.uname()[0] == 'Darwin':
    cFlags    += " -stdlib=libstdc++"
    linkFlags += " -stdlib=libstdc++"


##########################
### Set up environment
##########################

env = Environment()
env.Append(CCFLAGS=cFlags)
env.Append(LINKFLAGS=linkFlags)


##########################
### Compile!
##########################

files = ['src/main.cpp']

hw = env.Program('#hello', files)
