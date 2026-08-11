/* Ghidra address: 0122fc20 */
/* Ghidra symbol: FUN_0122fc20 */


void FUN_0122fc20(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x818));
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
    *(undefined8 *)(PTR_DAT_020040b8 + 0x40) = uVar1;
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    *(undefined8 *)(PTR_DAT_020040b8 + 0x80) = uVar1;
  }
  return;
}

