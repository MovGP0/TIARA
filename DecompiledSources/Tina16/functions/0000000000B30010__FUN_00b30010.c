/* Ghidra address: 00b30010 */
/* Ghidra symbol: FUN_00b30010 */


undefined8
FUN_00b30010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
            undefined1 param_5)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  *(undefined2 *)(param_1 + 8) = param_4;
  *(undefined1 *)(param_1 + 10) = param_5;
  *(undefined1 *)(param_1 + 0xb) = 1;
  FUN_00b2fa80(param_1,param_2,param_3);
  return param_2;
}

