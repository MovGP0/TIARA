/* Ghidra address: 018669f0 */
/* Ghidra symbol: FUN_018669f0 */


undefined8
FUN_018669f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined2 *param_4,
            undefined1 param_5)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_00414480(param_2);
  local_10 = FUN_01866a80(param_1,param_3,param_5);
  *(undefined2 *)(local_10 + 0x2c) = *param_4;
  FUN_004b3880(local_10,param_2);
  FUN_00410f20(local_10);
  return param_2;
}

