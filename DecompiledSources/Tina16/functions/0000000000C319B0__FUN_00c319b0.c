/* Ghidra address: 00c319b0 */
/* Ghidra symbol: FUN_00c319b0 */


void FUN_00c319b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  lVar2 = param_1[8];
  lVar1 = param_1[7];
  do {
    iVar4 = FUN_00c1aa10(*(undefined8 *)(param_1[2] + 0x50));
    if ((int)param_1[8] < iVar4 + -1) {
      (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[8] + 1);
    }
    else {
      *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
      if (((int)param_1[9] != 0) && ((int)param_1[9] <= *(int *)((longlong)param_1 + 0x4c))) {
        (**(code **)(*param_1 + 0x90))(param_1);
        if ((param_1[7] != 0) &&
           (((cVar3 = FUN_00c28880(param_1[7]), cVar3 != '\0' && (lVar1 != 0)) &&
            (cVar3 = FUN_00c28880(lVar1), cVar3 == '\0')))) {
          (**(code **)(*param_1 + 0x20))(param_1,(int)lVar2);
        }
        return;
      }
      (**(code **)(*param_1 + 0x20))(param_1,0);
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    cVar3 = FUN_00c28880(param_1[7]);
    if (cVar3 == '\0') {
      return;
    }
  } while ((int)param_1[8] != (int)lVar2);
  return;
}

