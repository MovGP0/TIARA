/* Ghidra address: 0099c880 */
/* Ghidra symbol: FUN_0099c880 */


longlong * FUN_0099c880(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
  }
  iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
    cVar1 = (**(code **)(*plVar4 + 0x168))(plVar4);
    if (cVar1 != '\a') {
      (**(code **)(*param_2 + 0x158))(param_2,iVar2);
    }
  }
  return param_2;
}

