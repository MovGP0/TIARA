/* Ghidra address: 006ed010 */
/* Ghidra symbol: FUN_006ed010 */


void FUN_006ed010(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(short *)(param_2 + 10) == 0x300) && (param_1[0x93] != 0)) {
    (*(code *)param_1[0x93])(param_1[0x94],param_1);
  }
  return;
}

