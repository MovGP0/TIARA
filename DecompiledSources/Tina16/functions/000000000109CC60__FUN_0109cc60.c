/* Ghidra address: 0109cc60 */
/* Ghidra symbol: FUN_0109cc60 */


void FUN_0109cc60(longlong param_1)

{
  int iVar1;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1630));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1638));
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4e8));
  iVar1 = 0;
  do {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x9e8 + (longlong)iVar1 * 8));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  FUN_0109f5f0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1650));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1658));
  return;
}

