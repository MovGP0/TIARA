/* Ghidra address: 01366130 */
/* Ghidra symbol: FUN_01366130 */


void FUN_01366130(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0x10);
  *(bool *)(param_2 + 0xaf) = 0 < iVar3;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  if (*(int *)(param_2 + 0xa0) <= iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xa0));
      FUN_00410f20(*(undefined8 *)(lVar1 + 8));
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xa0));
      FUN_004095f0(uVar2);
      *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xb8));
  FUN_00b95360(*(undefined8 *)(param_2 + 0xf8));
  return;
}

