################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lesson02/exercises02.c 

OBJS += \
./lesson02/exercises02.o 

C_DEPS += \
./lesson02/exercises02.d 


# Each subdirectory must supply rules for building sources it contributes
lesson02/%.o: ../lesson02/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


