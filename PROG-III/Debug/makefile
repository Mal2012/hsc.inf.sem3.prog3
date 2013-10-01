################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include semesterProject/subdir.mk
-include lesson12/subdir.mk
-include lesson11/subdir.mk
-include lesson10/subdir.mk
-include lesson09/subdir.mk
-include lesson08/subdir.mk
-include lesson07/subdir.mk
-include lesson06/subdir.mk
-include lesson05/subdir.mk
-include lesson04/subdir.mk
-include lesson03/subdir.mk
-include lesson02/subdir.mk
-include lesson01/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: PROG-III

# Tool invocations
PROG-III: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o "PROG-III" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) PROG-III
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
