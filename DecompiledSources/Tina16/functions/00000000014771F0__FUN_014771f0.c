/* Ghidra address: 014771f0 */
/* Ghidra symbol: FUN_014771f0 */


void FUN_014771f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 8);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_30,param_2);
  iVar2 = FUN_004170c0(&DAT_01477324,local_30[0],1);
  iVar3 = FUN_004170c0(&LAB_01477334,local_30[0],1);
  iVar4 = (iVar3 - iVar2) + -1;
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      FUN_00416e20(local_30,iVar2 + 1,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  FUN_00416ea0(local_res18[0],local_30,iVar2 + 1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 8);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,local_30[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return;
}

