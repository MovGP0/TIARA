/* Ghidra address: 00e16940 */
/* Ghidra symbol: FUN_00e16940 */


undefined4 FUN_00e16940(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1c0 == (code *)0x0) {
      DAT_0202e1c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckDVMMode");
    }
    if (DAT_0202e1c0 != (code *)0x0) {
      uVar1 = (*DAT_0202e1c0)(param_1,param_2);
      return uVar1;
    }
  }
  *param_2 = 0;
  return 0;
}

