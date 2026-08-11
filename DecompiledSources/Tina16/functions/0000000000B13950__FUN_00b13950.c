/* Ghidra address: 00b13950 */
/* Ghidra symbol: FUN_00b13950 */


void FUN_00b13950(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar2 = (longlong *)FUN_00b13890(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (0 < iVar1) {
      FUN_00b13800(param_1,2);
      return;
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    plVar2 = (longlong *)FUN_00b13890(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 == 0) {
      FUN_00b13800(param_1,0);
    }
  }
  return;
}

