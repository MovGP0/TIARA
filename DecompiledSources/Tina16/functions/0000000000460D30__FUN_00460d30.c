/* Ghidra address: 00460d30 */
/* Ghidra symbol: FUN_00460d30 */


void FUN_00460d30(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  for (; *param_2 == 0x400c; param_2 = *(short **)(param_2 + 4)) {
  }
  local_res20 = param_4;
  FUN_00460bc0(param_1,param_2,param_3,&local_res20);
  return;
}

