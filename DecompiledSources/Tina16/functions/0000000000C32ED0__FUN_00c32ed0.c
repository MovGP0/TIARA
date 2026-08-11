/* Ghidra address: 00c32ed0 */
/* Ghidra symbol: FUN_00c32ed0 */


void FUN_00c32ed0(longlong *param_1,undefined4 param_2)

{
  if ((char)param_2 != *(char *)(param_1[0xb] + 0x15)) {
    FUN_00c35490(param_1);
    FUN_00c24650(param_1[0xb],param_2);
    FUN_00c34390(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

