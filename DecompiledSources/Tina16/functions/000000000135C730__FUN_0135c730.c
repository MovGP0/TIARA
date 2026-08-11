/* Ghidra address: 0135c730 */
/* Ghidra symbol: FUN_0135c730 */


bool FUN_0135c730(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  for (iVar3 = 0;
      ((param_2 == '\x01' && (bVar4 == false)) &&
      (iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8)),
      iVar3 < iVar1)); iVar3 = iVar3 + 1) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
    bVar4 = *(char *)(lVar2 + 0xc) != '\0';
  }
  return bVar4;
}

