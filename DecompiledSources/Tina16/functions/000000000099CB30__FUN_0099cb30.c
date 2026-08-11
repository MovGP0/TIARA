/* Ghidra address: 0099cb30 */
/* Ghidra symbol: FUN_0099cb30 */


longlong * FUN_0099cb30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar2);
  }
  iVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar1);
    uVar2 = (**(code **)(*plVar3 + 0x168))(plVar3);
    if ((byte)uVar2 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      (**(code **)(*param_2 + 0x158))(param_2,iVar1);
    }
  }
  return param_2;
}

