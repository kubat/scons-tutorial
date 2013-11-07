import os


AddOption('--optimize',
          dest='optimize',
          action='store_true',
          help='Run with optimization flags.')


if GetOption('optimize'):
    print "Compiling with optimization on. (No debug flag)"


##########################
### Flags and Paths
##########################

cFlags    = ("-O1 " if GetOption('optimize') else "-g ") + " -Wall"
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
cppPath = ['/opt/local/include']
libPath = ['/opt/local/lib']
libsAll = ['ncurses']

hw = env.Program('#hello', files,
                  LIBS=libsAll,
                  LIBPATH=libPath,
                  CPPPATH=cppPath)
