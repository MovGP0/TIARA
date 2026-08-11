/* Ghidra address: 0041e2c0 */
/* Ghidra symbol: FUN_0041e2c0 */


void FUN_0041e2c0(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  uVar1 = *param_4;
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  FUN_00409a70(local_res10[0] + param_3,uVar1,(longlong)param_5);
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}

