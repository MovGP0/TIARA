/* Ghidra address: 010854a0 */
/* Ghidra symbol: FUN_010854a0 */


void FUN_010854a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x4c58) = param_5;
  *(undefined4 *)(param_1 + 0x4c5c) = param_6;
  FUN_01081b00(param_1);
  if ((char)param_3 == '\0') {
    if ((*(uint *)(param_1 + 0xaa8) & 1) != 0) {
      FUN_0108a580(param_1,param_2);
    }
  }
  else {
    FUN_00414480(param_1 + 0x4c50);
    FUN_01085530(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

