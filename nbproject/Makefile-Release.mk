#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/10Busqueda.o \
	${OBJECTDIR}/1Ejercicio1Class.o \
	${OBJECTDIR}/2Ejercicio2Class.o \
	${OBJECTDIR}/3Ejercicio3Class.o \
	${OBJECTDIR}/4Ejercicio4Class.o \
	${OBJECTDIR}/6EjercicioClassTrianguloRec.o \
	${OBJECTDIR}/7EjercicioClassHipTrianRec.o \
	${OBJECTDIR}/8EjercicioClassSueldoNeto.o \
	${OBJECTDIR}/9DiferentesOrdenamientos.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_y_estructuras_de_datos.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_y_estructuras_de_datos.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_y_estructuras_de_datos ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/10Busqueda.o: 10Busqueda.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10Busqueda.o 10Busqueda.cpp

${OBJECTDIR}/1Ejercicio1Class.o: 1Ejercicio1Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1Ejercicio1Class.o 1Ejercicio1Class.cpp

${OBJECTDIR}/2Ejercicio2Class.o: 2Ejercicio2Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2Ejercicio2Class.o 2Ejercicio2Class.cpp

${OBJECTDIR}/3Ejercicio3Class.o: 3Ejercicio3Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3Ejercicio3Class.o 3Ejercicio3Class.cpp

${OBJECTDIR}/4Ejercicio4Class.o: 4Ejercicio4Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/4Ejercicio4Class.o 4Ejercicio4Class.cpp

${OBJECTDIR}/6EjercicioClassTrianguloRec.o: 6EjercicioClassTrianguloRec.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/6EjercicioClassTrianguloRec.o 6EjercicioClassTrianguloRec.cpp

${OBJECTDIR}/7EjercicioClassHipTrianRec.o: 7EjercicioClassHipTrianRec.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/7EjercicioClassHipTrianRec.o 7EjercicioClassHipTrianRec.cpp

${OBJECTDIR}/8EjercicioClassSueldoNeto.o: 8EjercicioClassSueldoNeto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/8EjercicioClassSueldoNeto.o 8EjercicioClassSueldoNeto.cpp

${OBJECTDIR}/9DiferentesOrdenamientos.o: 9DiferentesOrdenamientos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/9DiferentesOrdenamientos.o 9DiferentesOrdenamientos.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmos_y_estructuras_de_datos.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
