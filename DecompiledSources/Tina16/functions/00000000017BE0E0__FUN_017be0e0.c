/* Ghidra address: 017be0e0 */
/* Ghidra symbol: FUN_017be0e0 */


void FUN_017be0e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int *piVar9;
  undefined1 local_6a;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  if ((undefined **)*param_1 == &PTR_FUN_01cf10a8) {
    local_6a = *(undefined1 *)((longlong)param_1 + 0xd1);
    if (*(byte *)(param_1 + 0x15) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0x15) & 0x1f) & 10U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      local_6a = FUN_01cefe30(local_6a,1);
    }
  }
  local_30 = (int)param_1[0x14];
  local_34 = *(int *)((longlong)param_1 + 0xa4);
  (**(code **)(*param_1 + 0x270))(param_1,&local_30,&local_34);
  (**(code **)(*param_1 + 0x280))
            (param_1,&local_48,param_4,param_5,param_6,param_7,param_8,
             *(undefined8 *)(param_2 + 0x110));
  piVar9 = *(int **)(param_2 + 0x110);
  (**(code **)(*param_1 + 0x290))(param_1,&local_50,param_5,param_8,piVar9);
  if ((local_48 == 0) && (local_50 == 0)) {
    local_38 = 0;
    local_3c = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x148);
    if (local_50 == 0) {
      FUN_00b0d0a0(&local_58,local_48,*(undefined4 *)PTR_DAT_02004b18);
      uVar7 = 0;
      if (local_58 != 0) {
        uVar7 = *(uint *)(local_58 + -4) >> 1;
      }
      uVar5 = FUN_00415f70(local_58);
      local_40 = FUN_00b94d60(uVar1,uVar5,uVar7);
      local_2c = local_40;
    }
    else {
      (**(code **)(*(longlong *)param_1[0x16] + 0x90))((longlong *)param_1[0x16]);
      if (local_48 == 0) {
        FUN_00416e20(&local_50,1,1);
      }
      FUN_00416ba0(&local_60,local_48,local_50);
      (**(code **)(*(longlong *)param_1[0x16] + 0x60))((longlong *)param_1[0x16],local_60);
      local_40 = 0;
      iVar3 = (**(code **)(*(longlong *)param_1[0x16] + 0x28))();
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*(longlong *)param_1[0x16] + 0x18))
                    ((longlong *)param_1[0x16],&local_68,iVar6);
          FUN_00b0d0a0(&local_58,local_68,*(undefined4 *)PTR_DAT_02004b18);
          uVar7 = 0;
          if (local_58 != 0) {
            uVar7 = *(uint *)(local_58 + -4) >> 1;
          }
          uVar5 = FUN_00415f70(local_58);
          uVar4 = FUN_00b94d60(uVar1,uVar5,uVar7);
          local_2c._0_2_ = (short)uVar4;
          sVar2 = (short)local_40;
          if ((short)local_40 <= (short)local_2c) {
            sVar2 = (short)local_2c;
          }
          local_2c._2_2_ = (short)((uint)uVar4 >> 0x10);
          local_40 = CONCAT22(local_40._2_2_ + local_2c._2_2_,sVar2);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
          local_2c = uVar4;
        } while (iVar3 != 0);
      }
    }
    local_38 = (int)(short)local_40;
    local_3c = (int)local_40._2_2_;
    piVar9 = &local_3c;
    FUN_01a984b0(param_2,local_38,local_3c,&local_38,piVar9);
  }
  if ((undefined **)*param_1 == &PTR_FUN_01cf10a8) {
    FUN_01cf1450(local_6a,*(undefined1 *)((longlong)param_1 + 0xd3),&local_38,&local_3c,
                 (ulonglong)piVar9 & 0xffffffffffffff00,0);
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc) + local_30;
  iVar6 = (int)param_1[2] + local_34;
  FUN_00b956d0(param_3,iVar3,iVar6,iVar3 + local_38,iVar6 + local_3c);
  FUN_00b956f0(param_3);
  FUN_00414560(&local_68,2);
  FUN_00414520(&local_58);
  FUN_00414560(&local_50,2);
  return;
}

