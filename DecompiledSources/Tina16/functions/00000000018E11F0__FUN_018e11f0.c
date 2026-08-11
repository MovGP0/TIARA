/* Ghidra address: 018e11f0 */
/* Ghidra symbol: FUN_018e11f0 */


void FUN_018e11f0(longlong param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  uint local_28;
  undefined1 local_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = 7;
  local_28 = (uint)*param_3;
  local_20 = 0;
  local_38 = param_2;
  FUN_018518d0(param_1,&local_38,1);
  plVar2 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),1);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
  bVar1 = FUN_00462650(&local_50);
  *param_3 = bVar1;
  FUN_00460ba0(&local_50);
  return;
}

