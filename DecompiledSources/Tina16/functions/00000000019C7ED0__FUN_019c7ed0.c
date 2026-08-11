/* Ghidra address: 019c7ed0 */
/* Ghidra symbol: FUN_019c7ed0 */


undefined8 FUN_019c7ed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x78);
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = (int)*(undefined8 *)(lVar1 + -8);
  }
  iVar3 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      cVar2 = FUN_00422c40(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x78) +
                           (longlong)iVar3 * 0x40,param_2);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_00422c40(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x78) + 8 +
                               (longlong)iVar3 * 0x40,param_3), cVar2 != '\0')) {
        return 1;
      }
      cVar2 = FUN_00422c40(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x78) +
                           (longlong)iVar3 * 0x40,param_3);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_00422c40(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x78) + 8 +
                               (longlong)iVar3 * 0x40,param_2), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

