################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src-gen/subdir.mk
-include src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
${A.ARCHIVE_FILE_PATH} \

ELF += \
org.yakindu.sct.examples.integration.arduino.polling.elf \

HEX += \
org.yakindu.sct.examples.integration.arduino.polling.hex \


# All Target
all: org.yakindu.sct.examples.integration.arduino.polling

# Tool invocations
org.yakindu.sct.examples.integration.arduino.polling: $(HEX)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	${JANTJE.SIZE.SWITCH}
	@echo 'Finished building target: $@'
	@echo ' '

${A.ARCHIVE_FILE_PATH}: $(AR_OBJ)
	@echo 'Starting archiver'
	$(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

org.yakindu.sct.examples.integration.arduino.polling.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	$(LINK_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

org.yakindu.sct.examples.integration.arduino.polling.hex: $(ELF)
	@echo 'Do all objcopy commands'
	${JANTJE.OBJCOPY}
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(PDE_DEPS)$(C_DEPS)$(AR)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(HEX)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS)
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
