/* Ghidra address: 01449630 */
/* Ghidra symbol: FUN_01449630 */


void FUN_01449630(undefined8 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  *param_3 = 0x3ff0000000000000;
  param_3[1] = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    FUN_01449560(&local_48,param_3,param_3,param_4);
  }
  return;
}

