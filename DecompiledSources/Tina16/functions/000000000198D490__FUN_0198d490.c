/* Ghidra address: 0198d490 */
/* Ghidra symbol: FUN_0198d490 */


undefined8 FUN_0198d490(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  
  iVar3 = (int)param_1[2] + -1;
  if (param_2 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar3 == -1) {
      iVar3 = (int)param_1[2] + -1;
    }
    else {
      iVar3 = iVar3 + -1;
    }
  }
  if (iVar3 < 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1[2];
    *(int *)(param_1 + 2) = iVar3 + 1;
    uVar5 = 0;
    if (-1 < iVar3) {
      do {
        uVar4 = FUN_00b94e60(param_1,iVar3);
        cVar2 = FUN_0198d440(auStack_48,uVar4);
        if (cVar2 != '\0') {
          uVar5 = FUN_00b94e60(param_1,iVar3);
          break;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *(int *)(param_1 + 2) = (int)lVar1;
  }
  return uVar5;
}

