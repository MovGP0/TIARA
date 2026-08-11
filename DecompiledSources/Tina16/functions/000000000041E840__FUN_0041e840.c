/* Ghidra address: 0041e840 */
/* Ghidra symbol: FUN_0041e840 */


void FUN_0041e840(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  longlong local_res18 [2];
  
  uVar1 = *param_2;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00409a70(uVar1,local_res18[0] + (longlong)param_4 * 4,(longlong)(param_5 * 4));
  FUN_00419430(local_res18,&DAT_004066f0);
  return;
}

