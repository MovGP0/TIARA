/* Ghidra address: 00d0d990 */
/* Ghidra symbol: FUN_00d0d990 */


void FUN_00d0d990(longlong *param_1,undefined4 param_2)

{
  FUN_00cd5760(param_1,param_2);
  if ((char)param_2 == '\x03') {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  return;
}

