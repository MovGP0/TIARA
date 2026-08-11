/* Ghidra address: 0122fd90 */
/* Ghidra symbol: FUN_0122fd90 */


void FUN_0122fd90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x838));
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
    *(undefined8 *)(PTR_DAT_020040b8 + 0x28) = uVar1;
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
    *(undefined8 *)PTR_DAT_020040b8 = uVar1;
  }
  return;
}

