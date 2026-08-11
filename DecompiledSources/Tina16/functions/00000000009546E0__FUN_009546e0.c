/* Ghidra address: 009546e0 */
/* Ghidra symbol: FUN_009546e0 */


void FUN_009546e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar2);
  }
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x01') {
    lVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if (lVar3 != 0) {
      uVar2 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
      FUN_004134c0(uVar2);
    }
  }
  else if (cVar1 == '\n') {
    lVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x2f0))(param_1);
      if (lVar3 == 0) goto LAB_00954799;
    }
    uVar2 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
    FUN_004134c0(uVar2);
  }
LAB_00954799:
  FUN_0094c7c0(param_1,param_2);
  return;
}

