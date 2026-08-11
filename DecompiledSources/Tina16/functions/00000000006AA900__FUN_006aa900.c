/* Ghidra address: 006aa900 */
/* Ghidra symbol: FUN_006aa900 */


void FUN_006aa900(longlong *param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d4d10(param_1,param_2,param_3);
  if ((((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0) && ((char)param_3 == '\x01')) &&
     (param_2 == param_1[0x2e])) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  return;
}

