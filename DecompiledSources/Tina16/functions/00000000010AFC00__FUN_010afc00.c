/* Ghidra address: 010afc00 */
/* Ghidra symbol: FUN_010afc00 */


void FUN_010afc00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar2);
      FUN_010ae600(uVar1,&local_20);
      FUN_00416cd0(local_30,3,*(undefined8 *)(param_1 + 0x30),&LAB_010afcf4,local_20);
      (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

