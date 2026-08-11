/* Ghidra address: 00818720 */
/* Ghidra symbol: FUN_00818720 */


undefined8 FUN_00818720(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_008199e0(param_1);
  lVar2 = FUN_007ff990(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_008199e0(param_1);
    lVar2 = FUN_007ff990(uVar1);
    if (*(char *)(lVar2 + 0x4d2) == '\x02') {
      return 1;
    }
  }
  return 0;
}

