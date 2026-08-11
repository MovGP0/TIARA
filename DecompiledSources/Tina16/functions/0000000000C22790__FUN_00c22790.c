/* Ghidra address: 00c22790 */
/* Ghidra symbol: FUN_00c22790 */


longlong *
FUN_00c22790(longlong *param_1,ulonglong param_2,undefined1 param_3,byte param_4,undefined8 param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  undefined1 *local_90;
  undefined2 local_83;
  undefined1 local_81;
  undefined1 *local_80;
  longlong local_78;
  undefined2 *local_70;
  longlong local_68;
  int local_5c;
  longlong *local_58;
  undefined2 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong local_30;
  
  local_90 = auStack_d8;
  bVar8 = (byte)param_2;
  uVar9 = CONCAT71((int7)(param_2 >> 8),1);
  local_58 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,uVar9);
  if (bVar8 == 0) {
    (**(code **)(*local_58 + 0x10))(local_58,param_1);
    FUN_00c1a6c0(local_58,6);
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if (DAT_01e9f548 < iVar4 * iVar5) {
      uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      FUN_00c1a6c0(local_58,uVar9);
    }
    local_30 = 0;
    local_38 = (longlong *)0x0;
    local_40 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    local_50 = (undefined2 *)0x0;
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    local_48 = (undefined8 *)FUN_00c1b520(&PTR_FUN_00c1af80,uVar9,param_1,6);
    if (bVar8 < 0x10) {
      bVar10 = ((int)CONCAT62((int6)((ulonglong)uVar9 >> 0x10),1) << (bVar8 & 0x1f) & 0x180U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_50 = (undefined2 *)FUN_00c22190(local_48,1 << (param_4 & 0x1f),6,bVar8 == 8);
    }
    else {
      local_50 = (undefined2 *)FUN_00c22410(param_2 & 0xff,param_5);
    }
    local_30 = FUN_00c225a0(local_50,param_2 & 0xff);
    if (*(int *)(local_30 + 8) != 0) {
      uVar6 = (**(code **)(*param_1 + 0x60))(param_1);
      local_38 = (longlong *)FUN_00c22640(param_3,uVar6,local_30);
      if (local_38 != (longlong *)0x0) {
        uVar6 = (**(code **)(*param_1 + 0x60))(param_1);
        uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
        local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar6);
        local_b0 = CONCAT44(local_b0._4_4_,uVar7);
        local_a8 = local_50;
        local_40 = (undefined8 *)FUN_00c1b640(&PTR_FUN_00c1b158,1,local_58,3);
        local_5c = 0;
        (**(code **)(*local_38 + 8))(local_38);
        while (iVar4 = (**(code **)(*param_1 + 0x48))(param_1), local_5c < iVar4) {
          local_68 = (**(code **)*local_48)(local_48,local_5c);
          local_78 = (**(code **)*local_40)(local_40,local_5c);
          local_70 = (undefined2 *)(local_68 + *(int *)((longlong)local_38 + 0xc) * 3);
          local_80 = (undefined1 *)(local_78 + *(int *)((longlong)local_38 + 0xc));
          while ((*(int *)((longlong)local_38 + 0xc) < (int)local_38[3] &&
                 (-1 < *(int *)((longlong)local_38 + 0xc)))) {
            uVar1 = *local_70;
            local_81 = *(undefined1 *)(local_70 + 1);
            local_83._1_1_ = (undefined1)((ushort)uVar1 >> 8);
            uVar3 = local_83._1_1_;
            local_83._0_1_ = (undefined1)uVar1;
            local_b8 = &local_81;
            local_b0 = (longlong)&local_83 + 1;
            local_a8 = &local_83;
            uVar2 = (undefined1)local_83;
            local_83 = uVar1;
            uVar3 = (**(code **)(*local_38 + 0x10))(local_38,local_81,uVar3,uVar2);
            *local_80 = uVar3;
            local_70 = (undefined2 *)((longlong)local_70 + (longlong)(int)local_38[1] * 3);
            local_80 = local_80 + (int)local_38[1];
          }
          local_5c = local_5c + 1;
          (**(code **)(*local_38 + 0x18))(local_38);
        }
        if (local_30 != 0) {
          FUN_00410f20(local_30);
        }
        if (local_38 != (longlong *)0x0) {
          FUN_00410f20(local_38);
        }
        if (local_40 != (undefined8 *)0x0) {
          FUN_00410f20(local_40);
        }
        if (local_48 != (undefined8 *)0x0) {
          FUN_00410f20(local_48);
        }
        if (local_50 == (undefined2 *)0x0) {
          return local_58;
        }
        thunk_FUN_0416f828(local_50);
        return local_58;
      }
    }
    FUN_00c22bf0(0,local_90);
  }
  return local_58;
}

