/* Ghidra address: 019cd9a0 */
/* Ghidra symbol: FUN_019cd9a0 */


undefined8 FUN_019cd9a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  lVar2 = FUN_019cd8d0(param_1,param_3);
  iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00f30ba0(lVar2,iVar4);
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x18))(*(longlong **)(lVar3 + 0x10),&local_48);
      iVar1 = FUN_00416db0(local_48,local_res20);
      if (iVar1 == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x18))(*(longlong **)(lVar3 + 0x18),local_40);
        FUN_00414ad0(param_2,local_40[0]);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_res20);
  return param_2;
}

