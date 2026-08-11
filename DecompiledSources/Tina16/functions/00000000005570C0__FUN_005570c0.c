/* Ghidra address: 005570c0 */
/* Ghidra symbol: FUN_005570c0 */


void FUN_005570c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = param_2;
  uVar1 = FUN_005361d0(param_2);
  if (uVar1 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << ((byte)uVar1 & 0x1f) & 0x116U) !=
            0;
  }
  else {
    bVar4 = false;
  }
  if ((!bVar4) || (iVar2 = FUN_00535740(param_1 + 0x8c), iVar2 == 0)) {
    FUN_00538320(param_2,*(undefined8 *)(param_1 + 0x40));
    iVar2 = FUN_00535770(uVar1);
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + (longlong)iVar2;
    return;
  }
  if (iVar2 == 1) {
    FUN_00538320(param_2,param_1 + 0x48);
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 4) {
      FUN_00538320(param_2,param_1 + 0x58);
      return;
    }
    if (iVar2 != 8) {
      return;
    }
    FUN_00538320(param_2,param_1 + 0x60);
    return;
  }
  FUN_00538320(param_2,param_1 + 0x50);
  return;
}

