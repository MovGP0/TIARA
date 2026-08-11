/* Ghidra address: 01253380 */
/* Ghidra symbol: FUN_01253380 */


void FUN_01253380(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40 [2];
  
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_40[0] = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_60 = 0;
  if (*PTR_DAT_02003778 == '\0') {
    uVar1 = FUN_00e0ac40(*(undefined8 *)PTR_DAT_020049a0,&local_60,PTR_DAT_02001470);
    *PTR_DAT_02003778 = uVar1;
    if (*PTR_DAT_02003778 == '\0') {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
      FUN_004134c0(uVar2);
    }
  }
  FUN_01cfd090(param_3,param_4);
  (**(code **)(*param_3 + 0x2d0))(param_3,param_4,local_58);
  iVar6 = *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10);
  local_d4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,local_d4);
      (**(code **)(*param_1 + 0x148))(param_1,local_40,L"device");
      (**(code **)(*param_2 + 0x98))(param_2,local_70,local_40[0]);
      FUN_0043f750(&local_80,local_d4);
      FUN_00416ba0(&local_78,&DAT_012538c0,local_80);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],&DAT_012538ac,local_78);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"name",*(undefined8 *)(lVar3 + 8));
      iVar7 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10);
      local_d0 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x10),local_d0);
          (**(code **)(*param_1 + 0x148))(param_1,&local_48,L"group");
          (**(code **)(*local_40[0] + 0x98))(local_40[0],&local_88,local_48);
          FUN_0043f750(&local_98,local_d0);
          FUN_00416ba0(&local_90,L"group",local_98);
          (**(code **)(*local_48 + 0x108))(local_48,&DAT_012538ac,local_90);
          (**(code **)(*local_48 + 0x108))(local_48,L"name",*(undefined8 *)(lVar4 + 8));
          iVar8 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0x10);
          local_cc = 0;
          if (-1 < iVar8 + -1) {
            do {
              lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x18),local_cc);
              (**(code **)(*param_1 + 0x148))(param_1,&local_50,&DAT_01253904);
              (**(code **)(*local_48 + 0x98))(local_48,&local_a0,local_50);
              FUN_0043f750(&local_a8,local_cc);
              (**(code **)(*local_50 + 0x108))(local_50,&DAT_012538ac,local_a8);
              (**(code **)(*local_50 + 0x108))(local_50,L"name",*(undefined8 *)(lVar5 + 8));
              local_cc = local_cc + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_d0 = local_d0 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_d4 = local_d4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,2);
  FUN_0041b800(&local_88);
  FUN_00414560(&local_80,2);
  FUN_0041b800(local_70);
  FUN_00414480(&local_60);
  FUN_00417840(&local_50,&LAB_00b9fca0,3);
  return;
}

