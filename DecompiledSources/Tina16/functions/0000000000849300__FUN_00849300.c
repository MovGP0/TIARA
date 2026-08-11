/* Ghidra address: 00849300 */
/* Ghidra symbol: FUN_00849300 */


void FUN_00849300(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int local_38;
  int local_34;
  short *local_30;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  local_30 = (short *)(param_2 + 0x10);
  local_38 = (int)*local_30;
  local_34 = (int)*(short *)(param_2 + 0x12);
  uVar1 = FUN_0064d3a0(param_1,&local_38);
  *(undefined8 *)((longlong)param_1 + 0x504) = uVar1;
  return;
}

