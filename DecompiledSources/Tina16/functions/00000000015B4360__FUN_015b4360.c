/* Ghidra address: 015b4360 */
/* Ghidra symbol: FUN_015b4360 */


void FUN_015b4360(longlong *param_1,char param_2)

{
  FUN_015a93e0(param_1,param_2);
  if (param_2 == '\x03') {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  return;
}

