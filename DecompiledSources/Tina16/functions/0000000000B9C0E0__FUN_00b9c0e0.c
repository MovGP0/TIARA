/* Ghidra address: 00b9c0e0 */
/* Ghidra symbol: FUN_00b9c0e0 */


void FUN_00b9c0e0(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
                 undefined1 param_5)

{
  FUN_00b9c200(param_1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (param_4 != 0) {
    FUN_00b9c240(param_1,param_4);
    *(undefined1 *)(param_1 + 0x31) = param_5;
  }
  return;
}

