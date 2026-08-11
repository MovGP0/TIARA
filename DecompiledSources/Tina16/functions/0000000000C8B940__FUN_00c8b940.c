/* Ghidra address: 00c8b940 */
/* Ghidra symbol: FUN_00c8b940 */


void FUN_00c8b940(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  if (local_res18[0] == 0) {
    FUN_0041b840(local_res18,*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00877e10(&local_10,param_2,local_res18[0]);
  FUN_00c8b4d0(param_1,local_10,param_4);
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(local_res18);
  return;
}

