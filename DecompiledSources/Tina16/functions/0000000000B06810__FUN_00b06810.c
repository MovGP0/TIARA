/* Ghidra address: 00b06810 */
/* Ghidra symbol: FUN_00b06810 */


void FUN_00b06810(longlong *param_1,char param_2)

{
  if ((char)param_1[0x96] != param_2) {
    *(char *)(param_1 + 0x96) = param_2;
    *(bool *)((longlong)param_1 + 0x499) = param_2 != '\0';
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

