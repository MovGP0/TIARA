/* Ghidra address: 019521b0 */
/* Ghidra symbol: FUN_019521b0 */


void FUN_019521b0(longlong *param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  
  if ((((param_2 & 0x400) != 0) && (cVar1 = FUN_01950830(param_1), cVar1 == '\0')) &&
     (*(char *)((longlong)param_1 + 0xe2) == '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2);
  if (param_1[0x1e] == 0) {
    return;
  }
  if ((((param_2 & 2) != 0) &&
      (iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]),
      iVar2 == 0)) ||
     (((param_2 & 1) != 0 && (cVar1 = FUN_004113d0(param_1,&PTR_FUN_0192c3a0), cVar1 != '\0')))) {
    (**(code **)(*param_1 + 200))
              (param_1,(double)param_1[0x13] +
                       ((*(double *)(param_1[0x1e] + 0xa8) -
                        ((double)param_1[0x13] + (double)param_1[0x15])) - (double)param_1[0x13]));
  }
  if (((param_2 & 0x40) == 0) ||
     (iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]),
     iVar2 != 0)) {
    if ((param_2 & 0x20) == 0) {
      return;
    }
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_0192c3a0);
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0xd0))
            (param_1,(double)param_1[0x14] +
                     ((*(double *)(param_1[0x1e] + 0xb0) -
                      ((double)param_1[0x14] + (double)param_1[0x16])) - (double)param_1[0x14]));
  return;
}

