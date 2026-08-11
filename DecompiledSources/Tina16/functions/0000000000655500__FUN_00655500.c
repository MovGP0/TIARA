/* Ghidra address: 00655500 */
/* Ghidra symbol: FUN_00655500 */


void FUN_00655500(longlong *param_1,undefined8 param_2)

{
  undefined1 local_38 [8];
  undefined8 local_30;
  
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  *(undefined8 *)((longlong)param_1 + 0x47c) = local_30;
  FUN_004c8510(param_2,1);
  FUN_004c57a0(param_2,*(undefined4 *)((longlong)param_1 + 0x47c));
  FUN_004c57a0(param_2,(int)param_1[0x90]);
  FUN_004c8510(param_2,0);
  return;
}

