/* Ghidra address: 00991270 */
/* Ghidra symbol: FUN_00991270 */


void FUN_00991270(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x38))(param_1);
    bVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
    if (bVar1 < 0x10) {
      bVar5 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar1 & 0x1f) & 0x9ceU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
      FUN_004134c0(uVar4);
    }
  }
  if (param_1[4] == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901c90,1,L"No valid XPath expression prepared.");
    FUN_004134c0(uVar4);
  }
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*(longlong *)param_1[4] + 0x40))((longlong *)param_1[4],uVar4,1,1);
  return;
}

