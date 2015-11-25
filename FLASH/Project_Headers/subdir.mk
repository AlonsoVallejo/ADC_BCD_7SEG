################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Project_Headers/ADC.c" \
"../Project_Headers/BCD.c" \
"../Project_Headers/DISPLAYS_SEG.c" \
"../Project_Headers/GPIO.c" \

C_SRCS += \
../Project_Headers/ADC.c \
../Project_Headers/BCD.c \
../Project_Headers/DISPLAYS_SEG.c \
../Project_Headers/GPIO.c \

OBJS += \
./Project_Headers/ADC.o \
./Project_Headers/BCD.o \
./Project_Headers/DISPLAYS_SEG.o \
./Project_Headers/GPIO.o \

C_DEPS += \
./Project_Headers/ADC.d \
./Project_Headers/BCD.d \
./Project_Headers/DISPLAYS_SEG.d \
./Project_Headers/GPIO.d \

OBJS_QUOTED += \
"./Project_Headers/ADC.o" \
"./Project_Headers/BCD.o" \
"./Project_Headers/DISPLAYS_SEG.o" \
"./Project_Headers/GPIO.o" \

C_DEPS_QUOTED += \
"./Project_Headers/ADC.d" \
"./Project_Headers/BCD.d" \
"./Project_Headers/DISPLAYS_SEG.d" \
"./Project_Headers/GPIO.d" \

OBJS_OS_FORMAT += \
./Project_Headers/ADC.o \
./Project_Headers/BCD.o \
./Project_Headers/DISPLAYS_SEG.o \
./Project_Headers/GPIO.o \


# Each subdirectory must supply rules for building sources it contributes
Project_Headers/ADC.o: ../Project_Headers/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/ADC.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/BCD.o: ../Project_Headers/BCD.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/BCD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/BCD.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/DISPLAYS_SEG.o: ../Project_Headers/DISPLAYS_SEG.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/DISPLAYS_SEG.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/DISPLAYS_SEG.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/GPIO.o: ../Project_Headers/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/GPIO.o"
	@echo 'Finished building: $<'
	@echo ' '


