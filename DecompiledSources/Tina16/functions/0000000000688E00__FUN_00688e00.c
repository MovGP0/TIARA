/* Ghidra address: 00688e00 */
/* Ghidra symbol: FUN_00688e00 */


void FUN_00688e00(longlong *param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0x96]) {
      param_1[0x96] = 0;
    }
    if (param_2 == param_1[0x9c]) {
      param_1[0x9c] = 0;
      (**(code **)(*param_1 + 0x278))(param_1);
    }
  }
  return;
}

