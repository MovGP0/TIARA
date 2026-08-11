/* Ghidra address: 00cce710 */
/* Ghidra symbol: FUN_00cce710 */


longlong * FUN_00cce710(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  if (*param_2 == 0) {
    (**(code **)(*param_1 + 0xf0))(param_1,param_2);
  }
  return param_2;
}

