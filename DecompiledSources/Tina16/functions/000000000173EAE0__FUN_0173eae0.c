/* Ghidra address: 0173eae0 */
/* Ghidra symbol: FUN_0173eae0 */


void FUN_0173eae0(longlong *param_1,undefined8 param_2)

{
  FUN_0173d340(param_1,param_2);
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x182f) == '\0')) {
    (**(code **)(*param_1 + 0xa8))(param_1,*(undefined1 *)((longlong)param_1 + 0x3b));
  }
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  return;
}

