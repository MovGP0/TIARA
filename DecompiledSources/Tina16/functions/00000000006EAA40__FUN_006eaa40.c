/* Ghidra address: 006eaa40 */
/* Ghidra symbol: FUN_006eaa40 */


void FUN_006eaa40(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_0065b870(param_1);
  local_20 = thunk_FUN_041b2403(uVar1,0xbb,(longlong)param_2[1],0);
  local_20 = local_20 + *param_2;
  local_1c = local_20;
  uVar1 = FUN_0065b870(param_1);
  FUN_004701a0(uVar1,0x437,0,&local_20);
  return;
}

