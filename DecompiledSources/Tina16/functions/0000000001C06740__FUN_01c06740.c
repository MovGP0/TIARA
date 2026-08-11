/* Ghidra address: 01c06740 */
/* Ghidra symbol: FUN_01c06740 */


void FUN_01c06740(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 600))(param_1,*(longlong **)(param_2 + 0x10) == param_1);
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    lVar1 = FUN_01c07120(param_1);
    if ((*(char *)(lVar1 + 0x4c0) != '\0') && (DAT_01fe2178 != (longlong *)0x0)) {
      (**(code **)(*DAT_01fe2178 + 0x40))(DAT_01fe2178,param_1[100]);
    }
  }
  return;
}

