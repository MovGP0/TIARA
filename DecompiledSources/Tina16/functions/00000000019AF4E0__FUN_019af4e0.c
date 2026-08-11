/* Ghidra address: 019af4e0 */
/* Ghidra symbol: FUN_019af4e0 */


byte FUN_019af4e0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar5 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar6);
      if (((plVar3 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x04')) &&
         (cVar1 = (**(code **)(*plVar3 + 0x2d8))(plVar3), cVar1 != '\0')) {
        uVar4 = FUN_0198d430(param_1);
        bVar2 = (**(code **)(*(longlong *)plVar3[0x33] + 0x68))((longlong *)plVar3[0x33],uVar4);
        bVar5 = bVar5 | bVar2;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return bVar5;
}

