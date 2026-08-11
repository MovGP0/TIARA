/* Ghidra address: 00619fe0 */
/* Ghidra symbol: FUN_00619fe0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619fe0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00427be0(L"kernel32.dll");
  DAT_02012098 = (code *)FUN_00427c10(uVar1,L"InitializeConditionVariable");
  if (DAT_02012098 == (code *)0x0) {
    DAT_02012098 = FUN_00618d60;
    _DAT_020120a8 = FUN_00618d70;
    _DAT_020120b0 = FUN_00618d80;
    _DAT_020120a0 = FUN_00618d90;
  }
  else {
    _DAT_020120a8 = (code *)FUN_00427c10(uVar1,L"WakeConditionVariable");
    _DAT_020120b0 = (code *)FUN_00427c10(uVar1,L"WakeAllConditionVariable");
    _DAT_020120a0 = (code *)FUN_00427c10(uVar1,L"SleepConditionVariableCS");
  }
  return;
}

