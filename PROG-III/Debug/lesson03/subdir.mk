################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lesson03/exercises03.c 

OBJS += \
./lesson03/exercises03.o 

C_DEPS += \
./lesson03/exercises03.d 


# Each subdirectory must supply rules for building sources it contributes
lesson03/%.o: ../lesson03/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


