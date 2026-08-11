/* Ghidra address: 01978800 */
/* Ghidra symbol: FUN_01978800 */


void FUN_01978800(longlong *param_1,char param_2)

{
  if (param_1[0xdb] == 0) {
    FUN_0181a9c0();
  }
  else if (param_2 == '\0') {
    FUN_01972e90(param_1[0xdb]);
  }
  else {
    (**(code **)(*param_1 + 0x370))(param_1);
  }
  return;
}

