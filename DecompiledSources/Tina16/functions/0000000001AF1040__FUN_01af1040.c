/* Ghidra address: 01af1040 */
/* Ghidra symbol: FUN_01af1040 */


void FUN_01af1040(longlong param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 != *(byte *)(param_1 + 0x791)) {
    *(byte *)(param_1 + 0x791) = param_2;
    if (param_2 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 & 0x1f) & 0x11U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar3 = FUN_006d8180(*(undefined8 *)(param_1 + 0x748),0);
    }
    else {
      uVar3 = FUN_006d8180(*(undefined8 *)(param_1 + 0x748),1);
    }
    if (*(byte *)(param_1 + 0x791) < 8) {
      uVar1 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(param_1 + 0x791) & 0x1f);
      uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xc) != 0);
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x128))
              (*(longlong **)(param_1 + 0x770),*(char *)(param_1 + 0x791) != '\x03');
  }
  return;
}

