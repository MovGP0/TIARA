/* Ghidra address: 00bfcd40 */
/* Ghidra symbol: FUN_00bfcd40 */


void FUN_00bfcd40(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
LAB_00bfcd77:
    cVar1 = '\0';
  }
  else {
    if (param_1[0xa7] == 0) {
LAB_00bfcd6d:
      if (param_1[0xfa] == 0) goto LAB_00bfcd77;
    }
    else {
      cVar1 = FUN_004113d0(param_1[0xa7],&PTR_FUN_00bdbcc0);
      if (cVar1 == '\0') goto LAB_00bfcd6d;
    }
    cVar1 = '\x01';
  }
  if ((char)param_1[0x93] != cVar1) {
    FUN_00be19c0(param_1[0x95]);
    *(char *)(param_1 + 0x93) = cVar1;
    (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar1 != '\0') {
      FUN_00c10e80(param_1,0);
      FUN_00c104b0(param_1);
    }
    FUN_00bfcde0(param_1,param_1);
    FUN_00bf3760(param_1);
  }
  return;
}

