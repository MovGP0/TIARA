/* Ghidra address: 00e1e1a0 */
/* Ghidra symbol: FUN_00e1e1a0 */


undefined4 FUN_00e1e1a0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e958 == (code *)0x0) {
      DAT_0202e958 = (code *)FUN_00427c10(DAT_01edc8a0,L"ConfigureFPGABoard");
    }
    if (DAT_0202e958 != (code *)0x0) {
      uVar1 = (*DAT_0202e958)(param_1);
    }
  }
  return uVar1;
}

