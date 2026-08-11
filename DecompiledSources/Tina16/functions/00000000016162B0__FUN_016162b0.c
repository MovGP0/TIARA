/* Ghidra address: 016162b0 */
/* Ghidra symbol: FUN_016162b0 */


void FUN_016162b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01618e70(&local_10,param_1,0);
  FUN_01618e70(&local_18,param_2,0);
  uVar1 = FUN_01615df0(local_10,param_3);
  *param_4 = uVar1;
  uVar1 = FUN_01615df0(local_18,param_3);
  *param_5 = uVar1;
  FUN_00414560(&local_18,2);
  return;
}

