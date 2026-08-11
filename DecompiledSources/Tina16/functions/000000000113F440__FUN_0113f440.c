/* Ghidra address: 0113f440 */
/* Ghidra symbol: FUN_0113f440 */


void FUN_0113f440(double param_1,double param_2,longlong param_3,char param_4,longlong param_5,
                 longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  double local_58;
  char local_49;
  
  local_49 = '\0';
  if (param_4 == '\0') {
    if ((param_3 == 0) || (*(char *)(param_3 + 8) != '\x02')) {
      iVar5 = *(int *)(param_5 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_00b94e60(param_5,iVar4);
          FUN_0113f190(auStack_78,uVar2);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      uVar2 = FUN_010e1630(3,1,0,0);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01133e90);
      if (lVar3 != 0) {
        local_49 = '\x04';
        local_58 = (double)FUN_01139050(lVar3);
      }
    }
  }
  if ((local_49 != '\0') && (local_58 != *(double *)(param_6 + 9))) {
    *(double *)(param_6 + 9) = local_58;
  }
  cVar1 = FUN_0113f080(param_1,param_2,param_6,0);
  if ((cVar1 == '\0') &&
     ((*(double *)(param_6 + 1) = param_1, local_49 == '\0' ||
      (cVar1 = FUN_0113f080(param_1,param_2,param_6,1), cVar1 == '\0')))) {
    *(double *)(param_6 + 9) = 1.0 / (param_2 - param_1);
  }
  return;
}

