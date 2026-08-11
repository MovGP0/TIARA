/* Ghidra address: 006931f0 */
/* Ghidra symbol: FUN_006931f0 */


void FUN_006931f0(longlong *param_1)

{
  char cVar1;
  
  FUN_00786c70(param_1);
  cVar1 = FUN_006926e0(param_1);
  if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 100) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

