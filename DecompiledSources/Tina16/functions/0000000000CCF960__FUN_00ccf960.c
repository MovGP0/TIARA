/* Ghidra address: 00ccf960 */
/* Ghidra symbol: FUN_00ccf960 */


longlong * FUN_00ccf960(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_1 + 0x248))(param_1,param_2);
  if (*param_2 == 0) {
    (**(code **)(*param_1 + 0x240))(param_1,param_2);
  }
  return param_2;
}

