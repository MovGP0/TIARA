/* Ghidra address: 01851600 */
/* Ghidra symbol: FUN_01851600 */


undefined8 FUN_01851600(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong local_20;
  
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  FUN_00467e90(&local_20,param_1 + 0x90);
  plVar2 = (longlong *)FUN_01847630(param_1,0);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_38);
  iVar1 = FUN_00462650(&local_38);
  FUN_00416780(&local_40,*(undefined2 *)(local_20 + -2 + (longlong)iVar1 * 2));
  FUN_00468a10(param_2,local_40);
  FUN_00414480(&local_40);
  FUN_00460ba0(&local_38);
  FUN_00414480(&local_20);
  return param_2;
}

