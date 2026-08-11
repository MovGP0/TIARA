/* Ghidra address: 004d1f00 */
/* Ghidra symbol: FUN_004d1f00 */


void FUN_004d1f00(longlong *param_1)

{
  if ((char)param_1[8] != '\0') {
    param_1 = (longlong *)FUN_0044d710(&PTR_FUN_004831c0,1,PTR_PTR_02001df0);
    FUN_004134c0();
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

