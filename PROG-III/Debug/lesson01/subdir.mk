################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lesson01/exercises01.c 

OBJS += \
./lesson01/exercises01.o 

C_DEPS += \
./lesson01/exercises01.d 


# Each subdirectory must supply rules for building sources it contributes
lesson01/%.o: ../lesson01/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


