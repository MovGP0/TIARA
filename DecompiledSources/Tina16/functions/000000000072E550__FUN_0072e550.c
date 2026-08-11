/* Ghidra address: 0072e550 */
/* Ghidra symbol: FUN_0072e550 */


int FUN_0072e550(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int extraout_var;
  undefined8 local_88;
  undefined1 local_80 [12];
  undefined1 local_74 [4];
  int local_70;
  undefined1 local_64 [4];
  int local_60;
  
  (**(code **)(*param_1 + 0xe0))(param_1,local_74);
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_04172119(uVar1,local_64);
  FUN_00422db0(local_80,0,local_70 + local_60 + 1);
  local_88 = FUN_0064d1f0(param_1,local_80);
  FUN_0064d3a0(param_1[0xf],&local_88);
  return extraout_var - *(int *)((longlong)param_1 + 0x94);
}

