/* Ghidra address: 005d2890 */
/* Ghidra symbol: FUN_005d2890 */


bool FUN_005d2890(longlong param_1,char param_2)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_39 [9];
  
  iVar4 = FUN_005d27e0(param_1,local_39);
  iVar4 = iVar4 + -1;
  lVar5 = FUN_00416740(param_1);
  iVar6 = 0;
  if (param_1 != 0) {
    iVar6 = *(int *)(param_1 + -4);
  }
  bVar2 = false;
  while ((!bVar2 && (iVar4 < iVar6))) {
    uVar1 = *(undefined2 *)(lVar5 + (longlong)iVar4 * 2);
    cVar3 = FUN_005d2d00(uVar1);
    if (cVar3 == '\0') {
      if (param_2 == '\0') {
        bVar2 = true;
      }
      else {
        cVar3 = FUN_005d2c40(uVar1);
        if (cVar3 == '\0') {
          bVar2 = true;
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  return !bVar2;
}

