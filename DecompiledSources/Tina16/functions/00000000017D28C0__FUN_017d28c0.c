/* Ghidra address: 017d28c0 */
/* Ghidra symbol: FUN_017d28c0 */


undefined8 FUN_017d28c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x2d8);
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar5 * 8);
      plVar2 = *(longlong **)(lVar1 + 0x128);
      sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if ((sVar3 == 0x3e) ||
         (plVar2 = *(longlong **)(lVar1 + 0x128), sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2),
         sVar3 == 0x66)) {
        uVar4 = 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar4;
}

