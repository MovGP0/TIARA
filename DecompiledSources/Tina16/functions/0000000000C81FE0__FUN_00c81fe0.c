/* Ghidra address: 00c81fe0 */
/* Ghidra symbol: FUN_00c81fe0 */


void FUN_00c81fe0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00410f20(uVar1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_00410f20(uVar1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_20 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                           (*(longlong **)(param_1 + 0x30),iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00410f20(uVar1);
  FUN_0041b800(&local_20);
  if ('\0' < param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

