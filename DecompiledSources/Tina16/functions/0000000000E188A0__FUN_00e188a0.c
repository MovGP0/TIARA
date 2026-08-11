/* Ghidra address: 00e188a0 */
/* Ghidra symbol: FUN_00e188a0 */


undefined4 FUN_00e188a0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3c8 == (code *)0x0) && (DAT_0202e408 == (code *)0x0)) {
      DAT_0202e408 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGPhaseEx");
      if (DAT_0202e408 == (code *)0x0) {
        DAT_0202e3c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGPhase");
      }
    }
    if (DAT_0202e408 == (code *)0x0) {
      if (DAT_0202e3c8 != (code *)0x0) {
        (*DAT_0202e3c8)(param_1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e408)(param_1);
    }
  }
  return uVar1;
}

