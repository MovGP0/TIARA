/* Ghidra address: 00d07860 */
/* Ghidra symbol: FUN_00d07860 */


void FUN_00d07860(longlong *param_1)

{
  longlong lVar1;
  
  FUN_00cb2f00(param_1);
  lVar1 = FUN_00cc4a90(&LAB_00cc4158,1,0);
  param_1[0x41] = lVar1;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  FUN_00d05480(param_1,1);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x205) = 4;
  *(undefined4 *)(param_1 + 0x40) = 0xf;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  lVar1 = (**(code **)(*param_1 + 0x178))(param_1);
  param_1[0x42] = lVar1;
  lVar1 = FUN_00ce2170(&PTR_FUN_00cdf0b0,1);
  param_1[0x43] = lVar1;
  FUN_00ce2300(lVar1);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 3;
  *(undefined4 *)(param_1 + 0x3d) = 0xff;
  return;
}

