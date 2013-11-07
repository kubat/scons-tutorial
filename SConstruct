##########################
### Flags and Paths
##########################

cFlags    = "-Wall"

##########################
### Set up environment
##########################

env = Environment()
env.Append(CCFLAGS=cFlags)

##########################
### Compile!
##########################

files = ['src/main.cpp']

hw = env.Program('#hello', files)
