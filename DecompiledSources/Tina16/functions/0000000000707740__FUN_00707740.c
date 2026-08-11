/* Ghidra address: 00707740 */
/* Ghidra symbol: FUN_00707740 */


void FUN_00707740(longlong param_1,short param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1 + 0x2c) != param_2) {
    *(short *)(param_1 + 0x2c) = param_2;
    lVar1 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      uVar2 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
      FUN_006f7580(uVar2);
    }
  }
  return;
}

