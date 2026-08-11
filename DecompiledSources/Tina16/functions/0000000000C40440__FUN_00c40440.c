/* Ghidra address: 00c40440 */
/* Ghidra symbol: FUN_00c40440 */


void FUN_00c40440(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      FUN_00441920(local_30,*(undefined8 *)(lVar1 + 0x20));
      FUN_004414c0(&local_20,local_30[0],0);
      (**(code **)(*param_2 + 0x78))(param_2,local_20);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

