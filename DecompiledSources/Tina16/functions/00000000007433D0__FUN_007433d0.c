/* Ghidra address: 007433d0 */
/* Ghidra symbol: FUN_007433d0 */


void FUN_007433d0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  uint local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [12];
  uint local_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = param_1;
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  uVar7 = *(uint *)(local_78 + 0x19);
  local_2c = 0xff000014;
  local_34 = 0xff000010;
  plVar4 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if ((cVar2 != '\0') && ((*(byte *)(local_78 + 0x59) & 2) != 0)) {
    (**(code **)(*plVar4 + 0x180))(plVar4,local_58,2);
    cVar2 = FUN_007790b0(plVar4,local_58,1,&local_4c);
    if ((cVar2 != '\0') && (local_4c != 0x1fffffff)) {
      uVar7 = local_4c;
    }
    (**(code **)(*plVar4 + 0x180))(plVar4,local_58,3);
    cVar2 = FUN_007790b0(plVar4,local_58,4,&local_4c);
    if ((cVar2 != '\0') && (local_4c != 0x1fffffff)) {
      local_2c = local_4c;
    }
    cVar2 = FUN_007790b0(plVar4,local_58,5,&local_4c);
    if ((cVar2 != '\0') && (local_4c != 0x1fffffff)) {
      local_34 = local_4c;
    }
  }
  if (*(char *)((longlong)local_78 + 0x49b) != '\0') {
    FUN_00743380(auStack_b8,*(char *)((longlong)local_78 + 0x49b));
    local_98 = (undefined1 *)CONCAT44(local_98._4_4_,*(undefined4 *)((longlong)local_78 + 0x49c));
    FUN_00741000(local_78[0x92],local_48,local_30,local_38);
  }
  cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if ((cVar2 == '\0') || ((*(uint *)(local_78 + 0x14) & 0x40000) == 0)) {
    local_98 = (undefined1 *)CONCAT44(local_98._4_4_,(int)local_78[0x94]);
    FUN_00741000(local_78[0x92],local_48,uVar7,uVar7);
  }
  else {
    FUN_00423b10(local_48,-(int)local_78[0x94],-(int)local_78[0x94]);
  }
  if (*(char *)((longlong)local_78 + 0x49a) != '\0') {
    FUN_00743380(auStack_b8,*(char *)((longlong)local_78 + 0x49a));
    local_98 = (undefined1 *)CONCAT44(local_98._4_4_,*(undefined4 *)((longlong)local_78 + 0x49c));
    FUN_00741000(local_78[0x92],local_48,local_30,local_38);
  }
  plVar1 = (longlong *)local_78[0x92];
  cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if (cVar2 != '\0') {
    cVar2 = FUN_0065eb60(local_78);
    if ((cVar2 != '\0') && ((*(byte *)(local_78 + 0x59) & 2) != 0)) goto LAB_0074364d;
  }
  FUN_005fdab0(plVar1[0x10],uVar7);
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_48);
LAB_0074364d:
  if ((char)local_78[0x95] != '\0') {
    FUN_0064dd90(local_78,&local_60);
    if (local_60 != 0) {
      FUN_005fdcb0(plVar1[0x10],1);
      FUN_005ff880(plVar1,local_78[0x17]);
      uVar3 = FUN_006520b0(local_78,*(uint *)(&DAT_01e06e90 +
                                             (ulonglong)*(byte *)((longlong)local_78 + 0x4a9) * 4) |
                                    0x60 | *(uint *)(&DAT_01e06e84 +
                                                    (ulonglong)*(byte *)(local_78 + 0x93) * 4));
      cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
      if ((cVar2 == '\0') || ((*(byte *)(local_78 + 0x59) & 1) == 0)) {
        uVar5 = FUN_005ffa40(plVar1);
        FUN_0064dd90(local_78,&local_70);
        uVar6 = FUN_00416740(local_70);
        local_98 = (undefined1 *)CONCAT44(local_98._4_4_,uVar3);
        thunk_FUN_041a24be(uVar5,uVar6,0xffffffff,local_48);
      }
      else {
        (**(code **)(*plVar4 + 0x180))(plVar4,local_58,2);
        cVar2 = FUN_007790b0(plVar4,local_58,2,&local_4c);
        if ((cVar2 == '\0') || (local_4c == 0x1fffffff)) {
          local_4c = *(uint *)(plVar1[0xe] + 0x28);
        }
        uVar5 = FUN_005ffa40(plVar1);
        FUN_0064dd90(local_78,&local_68);
        uVar3 = FUN_0060f580(uVar3);
        local_90 = FUN_0060f570(uVar3);
        local_98 = local_48;
        local_88 = local_4c;
        local_80 = 0;
        FUN_00778f70(plVar4,uVar5,local_58,local_68);
      }
    }
  }
  FUN_00414560(&local_70,3);
  return;
}

