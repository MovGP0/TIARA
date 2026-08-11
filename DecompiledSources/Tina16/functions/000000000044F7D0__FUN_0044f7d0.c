/* Ghidra address: 0044f7d0 */
/* Ghidra symbol: FUN_0044f7d0 */


bool FUN_0044f7d0(undefined8 param_1,longlong param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  bVar6 = false;
  if (param_3 < 1) {
    bVar1 = true;
  }
  else {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    bVar1 = iVar3 < param_3;
  }
  if (!bVar1) {
    cVar2 = FUN_0044f380(param_2,param_3);
    if (cVar2 == '\0') {
      uVar4 = FUN_00416740(param_1);
      lVar5 = FUN_00442980(uVar4,*(undefined2 *)(param_2 + (longlong)(param_3 + -1) * 2));
      bVar6 = lVar5 != 0;
    }
  }
  return bVar6;
}

