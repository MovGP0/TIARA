/* Ghidra address: 0122fce0 */
/* Ghidra symbol: FUN_0122fce0 */


void FUN_0122fce0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x7a8));
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
    *(undefined8 *)(PTR_DAT_020040b8 + 0x20) = uVar1;
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
    *(undefined8 *)(PTR_DAT_020040b8 + 8) = uVar1;
  }
  return;
}

