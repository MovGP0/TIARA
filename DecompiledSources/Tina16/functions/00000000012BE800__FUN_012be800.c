/* Ghidra address: 012be800 */
/* Ghidra symbol: FUN_012be800 */


int FUN_012be800(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar7 = false;
  }
  iVar1 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x10));
  if (bVar7) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 + 10;
  iVar3 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (-1 < iVar1 + -1) {
    do {
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      iVar4 = FUN_012be0b0(uVar5,param_2);
      iVar2 = iVar2 + iVar4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar2 = iVar2 + 4;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x30))
                        (*(longlong **)(lVar6 + 0x18),param_2);
      iVar2 = iVar2 + 0xc + iVar4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar2;
}

