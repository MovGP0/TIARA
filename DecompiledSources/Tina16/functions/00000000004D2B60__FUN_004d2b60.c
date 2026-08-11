/* Ghidra address: 004d2b60 */
/* Ghidra symbol: FUN_004d2b60 */


void FUN_004d2b60(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_00410f20(uVar1);
  while (lVar2 = *(longlong *)(param_1 + 0x20), lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x10) - 1;
    if (*(uint *)(lVar2 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8);
    if (((*(ushort *)(lVar2 + 0x34) & 0x100) == 0) &&
       ((*(ushort *)(param_1 + 0x34) & 0x210) != 0x210)) {
      FUN_004d28e0(param_1,lVar2);
    }
    else {
      FUN_004d2b10(param_1,lVar2);
    }
    FUN_00410f20(lVar2);
  }
  return;
}

