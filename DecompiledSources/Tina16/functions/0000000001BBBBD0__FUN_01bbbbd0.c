/* Ghidra address: 01bbbbd0 */
/* Ghidra symbol: FUN_01bbbbd0 */


longlong FUN_01bbbbd0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18 [2];
  longlong local_40;
  undefined8 local_30;
  
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_40 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  lVar2 = local_40;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x18))
                (*(longlong **)(lVar2 + 0x10),&local_30,param_2);
      iVar1 = FUN_00416db0(local_30,local_res18[0]);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      lVar2 = local_40;
    } while (iVar4 != 0);
  }
  local_40 = lVar2;
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return local_40;
}

