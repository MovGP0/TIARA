/* Ghidra address: 0180dd30 */
/* Ghidra symbol: FUN_0180dd30 */


void FUN_0180dd30(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x48))();
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar5 = (longlong *)FUN_00609e10(param_1);
          uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar6,iVar7);
          uVar3 = (uVar3 & 0xff0000) / 0x10000 + (uVar3 & 0xff00) / 0x100 + (uVar3 & 0xff);
          iVar4 = FUN_0040c770((double)(uVar3 / 3) / 3.0,(ulonglong)(longlong)(int)uVar3 % 3);
          iVar4 = iVar4 + 0x96;
          if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          plVar5 = (longlong *)FUN_00609e10(param_1);
          (**(code **)(*plVar5 + 0x40))(plVar5,iVar6,iVar7,iVar4 * 0x10101);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

