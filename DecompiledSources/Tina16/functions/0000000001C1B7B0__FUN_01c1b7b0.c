/* Ghidra address: 01c1b7b0 */
/* Ghidra symbol: FUN_01c1b7b0 */


undefined8 FUN_01c1b7b0(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    if (*(int *)PTR_DAT_02001bd8 < 6) {
      if ((*(int *)PTR_DAT_02001bd8 < 6) &&
         ((*(int *)PTR_DAT_02001bd8 != 5 || (*(int *)PTR_DAT_02003a08 < 1)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      plVar3 = (longlong *)FUN_00781840();
      lVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,10);
      if (lVar4 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

