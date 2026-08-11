/* Ghidra address: 00d577c0 */
/* Ghidra symbol: FUN_00d577c0 */


undefined4
FUN_00d577c0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,char param_5
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 local_64 [16];
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_90 = auStack_d8;
  local_54 = *param_3;
  uStack_4c = param_3[1];
  local_40 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
  local_30 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
  uVar6 = FUN_00609e10(local_30);
  uVar6 = FUN_005ffa40(uVar6);
  uVar7 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0x70));
  local_38 = thunk_FUN_041a19a1(uVar6,uVar7);
  uVar1 = FUN_004230c0(&local_54);
  uVar2 = FUN_004230a0(&local_54);
  (**(code **)(*local_30 + 0xe0))(local_30,uVar1,uVar2);
  uVar1 = FUN_004230a0(&local_54);
  uVar2 = FUN_004230c0(&local_54);
  (**(code **)(*local_40 + 0xe0))(local_40,uVar1,uVar2);
  uVar6 = FUN_00609e10(local_40);
  uVar1 = (**(code **)(*local_40 + 0x60))(local_40);
  local_b8 = (**(code **)(*local_40 + 0x48))(local_40);
  FUN_004238d0(local_a0,0,0,uVar1);
  FUN_00d57cd0(uVar6,local_a0,&DAT_007f007f);
  uVar6 = FUN_00609e10(local_30);
  uVar1 = (**(code **)(*local_30 + 0x60))(local_30);
  local_b8 = (**(code **)(*local_30 + 0x48))(local_30);
  FUN_004238d0(local_a0,0,0,uVar1);
  FUN_00d57cd0(uVar6,local_a0,&DAT_007f007f);
  uVar1 = (**(code **)(*local_30 + 0x60))(local_30);
  local_b8 = (**(code **)(*local_30 + 0x48))(local_30);
  FUN_004238d0(local_64,0,0,uVar1);
  local_78 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  uVar6 = FUN_00609e10(local_30);
  uVar6 = FUN_005ffa40(uVar6);
  FUN_005ffb10(local_78,uVar6);
  local_44 = FUN_00d57750(local_78,param_2,local_64,param_4);
  FUN_005ffb10(local_78,0);
  FUN_00410f20(local_78);
  iVar3 = (**(code **)(*local_30 + 0x60))();
  local_68 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar4 = (**(code **)(*local_30 + 0x48))();
      local_6c = 0;
      if (-1 < iVar4 + -1) {
        do {
          plVar8 = (longlong *)FUN_00609e10(local_30);
          local_70 = (**(code **)(*plVar8 + 0x30))(plVar8,local_68,local_6c);
          if (local_70 != 0x7f007f) {
            if (param_5 == '\0') {
              plVar8 = (longlong *)FUN_00609e10(local_40);
              iVar5 = (**(code **)(*local_40 + 0x48))(local_40);
              (**(code **)(*plVar8 + 0x40))(plVar8,local_6c,iVar5 - local_68,local_70);
            }
            else {
              plVar8 = (longlong *)FUN_00609e10(local_40);
              iVar5 = (**(code **)(*local_40 + 0x60))(local_40);
              (**(code **)(*plVar8 + 0x40))(plVar8,iVar5 - local_6c,local_68,local_70);
            }
          }
          local_6c = local_6c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_68 = local_68 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_40 + 0x80))(local_40,1);
  FUN_00d58810(local_40,param_1,*(undefined4 *)param_3,*(undefined4 *)((longlong)param_3 + 4));
  uVar6 = FUN_00609e10(local_30);
  uVar6 = FUN_005ffa40(uVar6);
  thunk_FUN_041a19a1(uVar6,local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_30);
  return local_44;
}

