/* Ghidra address: 01702e50 */
/* Ghidra symbol: FUN_01702e50 */


void FUN_01702e50(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_80 = auStack_f8;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
            (*(longlong **)(param_1 + 0x738),&local_68,uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x30))
                    (*(longlong **)(param_1 + 0x738),uVar2);
  local_d8 = &local_48;
  local_d0 = &local_50;
  local_c8 = &local_30;
  local_c0 = local_38;
  local_b8 = &local_58;
  local_b0 = &local_60;
  local_a8 = &local_69;
  local_28 = FUN_016fec20(*(undefined8 *)(param_1 + 0x760),local_68,uVar4,0);
  if (local_28 != 0) {
    local_d8 = (undefined8 *)0x0;
    local_d0 = (undefined8 *)((ulonglong)local_d0 & 0xffffffff00000000);
    local_20 = (undefined8 *)FUN_00ee5950(0,local_28,local_3c,local_30);
    local_d8 = (undefined8 *)((ulonglong)local_d8 & 0xffffffffffffff00);
    local_d0 = (undefined8 *)((ulonglong)local_d0 & 0xffffffffffffff00);
    local_78 = (longlong *)
               FUN_00c86a90(&PTR_FUN_00c85fc8,1,*(undefined8 *)PTR_DAT_02004030,local_20);
    plVar1 = (longlong *)local_78[0xd6];
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_88);
    uVar2 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],local_88);
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
    iVar3 = (**(code **)(*local_78 + 0x2d0))(local_78);
    if (iVar3 == 1) {
      iVar3 = (**(code **)(*(longlong *)local_78[0xd6] + 0x260))((longlong *)local_78[0xd6]);
      if (iVar3 != -1) {
        plVar1 = (longlong *)local_78[0xd6];
        uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_90,uVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_90);
        plVar1 = (longlong *)local_78[0xd6];
        uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar2);
        FUN_00414ad0(param_1 + 0x770,*(undefined8 *)(lVar5 + 0x20));
        FUN_01703530(param_1);
      }
    }
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*local_20)(local_20);
      FUN_00418590(uVar4,&DAT_01984da0);
    }
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_90);
  FUN_00414480(&local_88);
  FUN_00414560(&local_68,5);
  return;
}

