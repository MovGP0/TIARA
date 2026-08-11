/* Ghidra address: 00b02710 */
/* Ghidra symbol: FUN_00b02710 */


void FUN_00b02710(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00853ff0(*(undefined8 *)(param_1 + 0x440));
  FUN_0043ea00(&local_20,local_res10[0]);
  FUN_00414b50(local_res10,local_20);
  while (local_res10[0] != 0) {
    FUN_009dff80(&local_10,local_res10,&DAT_00b02848,1);
    FUN_009dfe20(&local_18,local_res10,&LAB_00b02858,0,0);
    if (local_10 == 0) break;
    FUN_008541a0(*(undefined8 *)(param_1 + 0x440),local_10,local_18);
    FUN_0043ea00(&local_28,local_res10[0]);
    FUN_00414b50(local_res10,local_28);
  }
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res10);
  return;
}

