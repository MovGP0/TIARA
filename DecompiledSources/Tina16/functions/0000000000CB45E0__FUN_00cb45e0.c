/* Ghidra address: 00cb45e0 */
/* Ghidra symbol: FUN_00cb45e0 */


void FUN_00cb45e0(longlong *param_1,char param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)((longlong)param_1 + 0xf1) == '\0') {
    cVar1 = FUN_00cb9a40(param_1);
    bVar2 = cVar1 == '\0';
  }
  else {
    cVar1 = FUN_00cb9a40(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x120))(param_1);
      FUN_00c8d2f0(param_1,4);
    }
    bVar2 = true;
  }
  if (bVar2) {
    cVar1 = FUN_00cb0720(param_1);
    if ((cVar1 != '\0' || param_3 != '\0') && (param_2 != '\0')) {
      FUN_00caf7a0(param_1);
    }
  }
  return;
}

