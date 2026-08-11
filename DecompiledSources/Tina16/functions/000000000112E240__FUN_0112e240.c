/* Ghidra address: 0112e240 */
/* Ghidra symbol: FUN_0112e240 */


undefined8 FUN_0112e240(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_00448450(&local_10,param_2,PTR_DAT_02004830);
  FUN_0112e140(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

