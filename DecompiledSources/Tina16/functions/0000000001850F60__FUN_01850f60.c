/* Ghidra address: 01850f60 */
/* Ghidra symbol: FUN_01850f60 */


undefined8 FUN_01850f60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30 [4];
  
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_01847650(*(undefined8 *)(param_1 + 0x88));
  iVar1 = FUN_0046c970(uVar2);
  if (iVar1 == 1) {
    uVar2 = FUN_01847650(*(undefined8 *)(param_1 + 0x88));
    plVar3 = (longlong *)FUN_01847630(param_1,0);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
    local_30[0] = FUN_00462650(&local_48);
    FUN_0046cb70(param_2,uVar2,1,local_30);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_01847650(*(undefined8 *)(param_1 + 0x88));
    plVar3 = (longlong *)FUN_01847630(param_1,0);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
    local_50 = FUN_00462650(&local_68);
    plVar3 = (longlong *)FUN_01847630(param_1,1);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_80);
    local_4c = FUN_00462650(&local_80);
    FUN_0046cb70(param_2,uVar2,2,&local_50);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_01847650(*(undefined8 *)(param_1 + 0x88));
    plVar3 = (longlong *)FUN_01847630(param_1,0);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_a8);
    local_90 = FUN_00462650(&local_a8);
    plVar3 = (longlong *)FUN_01847630(param_1,1);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_c0);
    local_8c = FUN_00462650(&local_c0);
    plVar3 = (longlong *)FUN_01847630(param_1,2);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_d8);
    local_88 = FUN_00462650(&local_d8);
    FUN_0046cb70(param_2,uVar2,3,&local_90);
  }
  else {
    FUN_0046f180(param_2);
  }
  FUN_00417840(&local_d8,&DAT_004013d8,3);
  FUN_00417840(&local_80,&DAT_004013d8,2);
  FUN_00460ba0(&local_48);
  return param_2;
}

