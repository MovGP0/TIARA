/* Ghidra address: 018e12c0 */
/* Ghidra symbol: FUN_018e12c0 */


void FUN_018e12c0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined1 local_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = 7;
  local_28 = *param_3;
  local_20 = 1;
  local_38 = param_2;
  FUN_018518d0(param_1,&local_38,1);
  plVar2 = (longlong *)FUN_01847630(*(undefined8 *)(param_1 + 8),1);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
  iVar1 = FUN_004644a0(&local_50);
  *param_3 = iVar1 != 0;
  FUN_00460ba0(&local_50);
  return;
}

