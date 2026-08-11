/* Ghidra address: 00d21950 */
/* Ghidra symbol: FUN_00d21950 */


void FUN_00d21950(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1,0,0);
  (**(code **)(*param_1 + 0x38))(param_1,1,0);
  FUN_0040d200(param_1[0xb],(longlong)*(int *)((longlong)param_1 + 0x44),0xaa);
  FUN_0040d200(param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44),0xaa);
  FUN_0040d200(param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44),0xaa);
  FUN_0040d200(param_1[0xd],(longlong)(int)param_1[9],0xaa);
  FUN_0040d200(param_1[0xb],(longlong)*(int *)((longlong)param_1 + 0x44),0x55);
  FUN_0040d200(param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44),0x55);
  FUN_0040d200(param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44),0x55);
  FUN_0040d200(param_1[0xd],(longlong)(int)param_1[9],0x55);
  FUN_0040d200(param_1[0xb],(longlong)*(int *)((longlong)param_1 + 0x44),0xff);
  FUN_0040d200(param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44),0xff);
  FUN_0040d200(param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44),0);
  FUN_0040d200(param_1[0xd],(longlong)(int)param_1[9],0);
  return;
}

