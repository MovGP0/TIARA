/* Ghidra address: 010b8ea0 */
/* Ghidra symbol: FUN_010b8ea0 */


short FUN_010b8ea0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if ((*(char *)((longlong)param_1 + 10) == '\0') ||
     (iVar2 = (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,param_4), iVar2 < 0))
  goto LAB_010b8f2e;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
LAB_010b8f14:
      sVar3 = -8;
      goto LAB_010b8f2e;
    }
    if (iVar2 == 1) {
LAB_010b8f1b:
      sVar3 = -7;
      goto LAB_010b8f2e;
    }
    if (iVar2 != 2) goto LAB_010b8f2e;
  }
  else {
    if (iVar2 - 3U < 2) {
      sVar3 = -9;
      goto LAB_010b8f2e;
    }
    if (iVar2 != 5) {
      if (iVar2 == 6) goto LAB_010b8f1b;
      if (iVar2 != 7) goto LAB_010b8f2e;
      goto LAB_010b8f14;
    }
  }
  sVar3 = -6;
LAB_010b8f2e:
  if (((sVar3 == 0) && (cVar1 = (**(code **)(*param_1 + 0x188))(param_1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
    sVar3 = -0x15;
  }
  return sVar3;
}

