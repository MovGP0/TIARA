/* Ghidra address: 004b6e60 */
/* Ghidra symbol: FUN_004b6e60 */


void FUN_004b6e60(longlong *param_1,longlong param_2)

{
  if ((param_2 < -0x80000000) || (0x7fffffff < param_2)) {
    param_1 = (longlong *)FUN_0044d710(&PTR_FUN_004355d0,1,PTR_PTR_02005140);
    FUN_004134c0();
  }
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

