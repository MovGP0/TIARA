/* Ghidra address: 01111e30 */
/* Ghidra symbol: FUN_01111e30 */


void FUN_01111e30(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x478) == '\0')) {
    FUN_00659460(param_1,1);
  }
  plVar3 = *(longlong **)(param_1 + 0x490);
  FUN_005fdcb0(plVar3[0x10],1);
  plVar4 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if (cVar1 == '\0') {
    FUN_005fd4e0(plVar3[0xf],0xff000006);
  }
  else {
    uVar5 = FUN_00781840();
    uVar2 = FUN_007793c0(uVar5,0xff00000f);
    FUN_005fd4e0(plVar3[0xf],uVar2);
  }
  FUN_005fd6d0(plVar3[0xf],1);
  (**(code **)(*plVar3 + 0xf8))
            (plVar3,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  iVar6 = 0;
  uVar8 = 0;
  do {
    if (*(char *)(param_1 + 0x498 + uVar8 * 0x20) != '\0') {
      FUN_011116f0(param_1,uVar8,iVar6);
      iVar6 = iVar6 + *(int *)(param_1 + 0x5d4) + -1;
    }
    bVar7 = (char)uVar8 + 1;
    uVar8 = (ulonglong)bVar7;
  } while (bVar7 != 9);
  return;
}

