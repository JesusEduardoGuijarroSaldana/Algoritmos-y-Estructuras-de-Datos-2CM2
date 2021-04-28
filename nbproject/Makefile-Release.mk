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
	${OBJECTDIR}/001Ejercicio1Class.o \
	${OBJECTDIR}/002Ejercicio2Class.o \
	${OBJECTDIR}/003Ejercicio3Class.o \
	${OBJECTDIR}/004Ejercicio4Class.o \
	${OBJECTDIR}/006EjercicioClassTrianguloRec.o \
	${OBJECTDIR}/007EjercicioClassHipTrianRec.o \
	${OBJECTDIR}/008EjercicioClassSueldoNeto.o \
	${OBJECTDIR}/009DiferentesOrdenamientos.o \
	${OBJECTDIR}/010Busqueda.o \
	${OBJECTDIR}/011RecursividadFactorial.o \
	${OBJECTDIR}/012RecursividadFibonacci.o \
	${OBJECTDIR}/013RecursivdidadNumPrimos.o \
	${OBJECTDIR}/014RecursividadDivisionRestasSucesivas.o \
	${OBJECTDIR}/015RecursividadSumaDigitosdeNum.o \
	${OBJECTDIR}/016RecursividadInvertirNumero.o \
	${OBJECTDIR}/017SumaDeNNumeros.o \
	${OBJECTDIR}/018OperacionesconPilas.o


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

${OBJECTDIR}/001Ejercicio1Class.o: 001Ejercicio1Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/001Ejercicio1Class.o 001Ejercicio1Class.cpp

${OBJECTDIR}/002Ejercicio2Class.o: 002Ejercicio2Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/002Ejercicio2Class.o 002Ejercicio2Class.cpp

${OBJECTDIR}/003Ejercicio3Class.o: 003Ejercicio3Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/003Ejercicio3Class.o 003Ejercicio3Class.cpp

${OBJECTDIR}/004Ejercicio4Class.o: 004Ejercicio4Class.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/004Ejercicio4Class.o 004Ejercicio4Class.cpp

${OBJECTDIR}/006EjercicioClassTrianguloRec.o: 006EjercicioClassTrianguloRec.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/006EjercicioClassTrianguloRec.o 006EjercicioClassTrianguloRec.cpp

${OBJECTDIR}/007EjercicioClassHipTrianRec.o: 007EjercicioClassHipTrianRec.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/007EjercicioClassHipTrianRec.o 007EjercicioClassHipTrianRec.cpp

${OBJECTDIR}/008EjercicioClassSueldoNeto.o: 008EjercicioClassSueldoNeto.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/008EjercicioClassSueldoNeto.o 008EjercicioClassSueldoNeto.cpp

${OBJECTDIR}/009DiferentesOrdenamientos.o: 009DiferentesOrdenamientos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/009DiferentesOrdenamientos.o 009DiferentesOrdenamientos.cpp

${OBJECTDIR}/010Busqueda.o: 010Busqueda.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/010Busqueda.o 010Busqueda.cpp

${OBJECTDIR}/011RecursividadFactorial.o: 011RecursividadFactorial.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/011RecursividadFactorial.o 011RecursividadFactorial.cpp

${OBJECTDIR}/012RecursividadFibonacci.o: 012RecursividadFibonacci.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/012RecursividadFibonacci.o 012RecursividadFibonacci.cpp

${OBJECTDIR}/013RecursivdidadNumPrimos.o: 013RecursivdidadNumPrimos.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/013RecursivdidadNumPrimos.o 013RecursivdidadNumPrimos.cpp

${OBJECTDIR}/014RecursividadDivisionRestasSucesivas.o: 014RecursividadDivisionRestasSucesivas.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/014RecursividadDivisionRestasSucesivas.o 014RecursividadDivisionRestasSucesivas.cpp

${OBJECTDIR}/015RecursividadSumaDigitosdeNum.o: 015RecursividadSumaDigitosdeNum.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/015RecursividadSumaDigitosdeNum.o 015RecursividadSumaDigitosdeNum.cpp

${OBJECTDIR}/016RecursividadInvertirNumero.o: 016RecursividadInvertirNumero.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/016RecursividadInvertirNumero.o 016RecursividadInvertirNumero.cpp

${OBJECTDIR}/017SumaDeNNumeros.o: 017SumaDeNNumeros.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/017SumaDeNNumeros.o 017SumaDeNNumeros.cpp

${OBJECTDIR}/018OperacionesconPilas.o: 018OperacionesconPilas.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/018OperacionesconPilas.o 018OperacionesconPilas.cpp

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
