/* Ghidra address: 00e18590 */
/* Ghidra symbol: FUN_00e18590 */


undefined4 FUN_00e18590(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e378 == (code *)0x0) {
      DAT_0202e378 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGParams");
    }
    if (DAT_0202e378 != (code *)0x0) {
      uVar1 = (*DAT_0202e378)(param_1);
    }
  }
  return uVar1;
}

