/* Ghidra address: 0044cf50 */
/* Ghidra symbol: FUN_0044cf50 */


undefined4 FUN_0044cf50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar6 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x170) + -8);
  }
  iVar4 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      lVar5 = (longlong)iVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0x170) + lVar5 * 0x20) == 0) {
        return 0;
      }
      uVar1 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + lVar5 * 0x20));
      uVar2 = FUN_00416740(param_2);
      lVar3 = FUN_0044fe40(uVar1,uVar2);
      if (lVar3 != 0) {
        return *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 8 + lVar5 * 0x20);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

