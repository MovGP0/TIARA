/* Ghidra address: 0168c650 */
/* Ghidra symbol: FUN_0168c650 */


void FUN_0168c650(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  uint local_34;
  undefined8 local_30;
  
  local_70 = auStack_c8;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_30 = 0;
  FUN_01b0fb20(param_1,param_2);
  (**(code **)(*param_2 + 0x58))(param_2,L"  Points: ");
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  local_8c = iVar2 + -1;
  local_34 = 0;
  if (-1 < local_8c) {
    do {
      local_8c = iVar2;
      uVar3 = local_34;
      local_40 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(local_40 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      lVar4 = (longlong)(int)local_34;
      puVar1 = (undefined8 *)(*(longlong *)(local_40 + 8) + lVar4 * 0x10);
      local_50 = *puVar1;
      uStack_48 = puVar1[1];
      local_30 = 0;
      local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
      FUN_00b8fd60(&local_78,local_50,*PTR_DAT_02005310,0);
      FUN_00416ba0(&local_30,local_78,&LAB_0168c8ec);
      local_58 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(local_58 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      puVar1 = (undefined8 *)(*(longlong *)(local_58 + 8) + lVar4 * 0x10);
      local_68 = *puVar1;
      local_60 = puVar1[1];
      local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
      FUN_00b8fd60(&local_88,local_60,*PTR_DAT_02005310,0);
      local_a8 = &LAB_0168c8ec;
      FUN_00416cd0(&local_80,3,local_30);
      (**(code **)(*param_2 + 0x58))(param_2,local_80);
      FUN_00414480(&local_30);
      local_34 = local_34 + 1;
      local_8c = local_8c + -1;
      iVar2 = local_8c;
    } while (local_8c != 0);
  }
  (**(code **)(*param_2 + 0x80))(param_2);
  FUN_00414560(&local_88,3);
  return;
}

