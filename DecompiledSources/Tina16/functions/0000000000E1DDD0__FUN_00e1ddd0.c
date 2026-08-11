/* Ghidra address: 00e1ddd0 */
/* Ghidra symbol: FUN_00e1ddd0 */


undefined4 FUN_00e1ddd0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e930 == (code *)0x0) {
      DAT_0202e930 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetTestCardID");
    }
    if (DAT_0202e930 != (code *)0x0) {
      uVar1 = (*DAT_0202e930)(param_1);
    }
  }
  return uVar1;
}

