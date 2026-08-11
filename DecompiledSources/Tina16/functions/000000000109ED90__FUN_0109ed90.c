/* Ghidra address: 0109ed90 */
/* Ghidra symbol: FUN_0109ed90 */


void FUN_0109ed90(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0xa10) = param_5;
  *(undefined4 *)(param_1 + 0xa14) = param_6;
  FUN_0109e840(param_1);
  if (param_3 == '\0') {
    FUN_0109ee20(param_1,param_2);
  }
  else {
    FUN_00414480(param_1 + 0x9b0);
  }
  return;
}

