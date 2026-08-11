/* Ghidra address: 00ed45a0 */
/* Ghidra symbol: FUN_00ed45a0 */


uint FUN_00ed45a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar4 = 1;
  local_54 = 1;
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)(iVar4 + iVar1) >> 1;
      iVar5 = uVar2 - 1;
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar5);
      (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar5);
      iVar3 = FUN_004170c0(&LAB_00ed4734,local_50,1);
      FUN_00416dc0(local_40,local_48,1,iVar3 + -1);
      FUN_0043ea00(&local_30,local_40[0]);
      iVar3 = FUN_01b1f9a0(local_res18[0],local_30);
      if (-1 < iVar3) {
        iVar4 = uVar2 + 1;
        iVar5 = iVar1;
      }
      iVar1 = iVar5;
    } while (iVar4 <= iVar1);
    local_54 = (uint)(iVar4 + iVar1) >> 1;
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return local_54;
}

