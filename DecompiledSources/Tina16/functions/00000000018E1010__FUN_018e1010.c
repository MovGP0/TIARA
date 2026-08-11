/* Ghidra address: 018e1010 */
/* Ghidra symbol: FUN_018e1010 */


void FUN_018e1010(longlong param_1,undefined8 param_2,ushort *param_3,byte param_4)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  uint local_38;
  undefined1 local_30;
  uint local_28;
  undefined1 local_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = 7;
  local_38 = (uint)*param_3;
  local_30 = 0;
  local_28 = (uint)param_4;
  local_20 = 0;
  local_48 = param_2;
  FUN_018518d0(param_1,&local_48,2);
  plVar2 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),1);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_60);
  uVar1 = FUN_00462650(&local_60);
  *param_3 = uVar1;
  FUN_00460ba0(&local_60);
  return;
}

