/* Ghidra address: 00c32fa0 */
/* Ghidra symbol: FUN_00c32fa0 */


void FUN_00c32fa0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)(param_1[0xb] + 0x16)) {
    FUN_00c35490(param_1);
    *(char *)(param_1[0xb] + 0x16) = param_2;
    FUN_00c34390(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

