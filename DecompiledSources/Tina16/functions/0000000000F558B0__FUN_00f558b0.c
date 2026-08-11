/* Ghidra address: 00f558b0 */
/* Ghidra symbol: FUN_00f558b0 */


void FUN_00f558b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,char param_7,undefined8 param_8,
                 undefined8 param_9,longlong param_10)

{
  if (param_7 == '\0') {
    FUN_00f55420(param_1,param_2,param_5,param_3,1,param_8,param_9,param_10);
    FUN_00f55420(param_1,param_2,param_6,param_4,1,param_8,param_9,param_10 + 0x10);
  }
  else {
    FUN_00f55420(param_1,param_2,param_5,param_4,1,param_8,param_9,param_10);
    FUN_00f55420(param_1,param_2,param_6,param_3,1,param_8,param_9,param_10 + 0x10);
  }
  return;
}

