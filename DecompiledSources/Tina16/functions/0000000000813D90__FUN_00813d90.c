/* Ghidra address: 00813d90 */
/* Ghidra symbol: FUN_00813d90 */


undefined8 FUN_00813d90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(lVar1 + 0x4d6) == '\x02') {
    uVar2 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    lVar1 = FUN_007ff990(uVar2);
    if (lVar1 != 0) {
      uVar2 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
      lVar1 = FUN_007ff990(uVar2);
      if ((*(byte *)(lVar1 + 0x4d0) & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

