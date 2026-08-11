/* Ghidra address: 018e1390 */
/* Ghidra symbol: FUN_018e1390 */


void FUN_018e1390(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined1 local_20;
  
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_50 = 7;
  local_48 = *param_3;
  local_40 = 0;
  local_38 = *param_4;
  local_30 = 0;
  local_28 = *param_5;
  local_20 = 1;
  local_58 = param_2;
  FUN_018518d0(param_1,&local_58,3);
  plVar3 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),1);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_70);
  uVar1 = FUN_00462650(&local_70);
  *param_3 = uVar1;
  plVar3 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),2);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
  uVar1 = FUN_00462650(&local_88);
  *param_4 = uVar1;
  plVar3 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),3);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_a0);
  iVar2 = FUN_004644a0(&local_a0);
  *param_5 = iVar2 != 0;
  FUN_00417840(&local_a0,&DAT_004013d8,3);
  return;
}

