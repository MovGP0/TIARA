/* Ghidra address: 00814cf0 */
/* Ghidra symbol: FUN_00814cf0 */


void FUN_00814cf0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = FUN_007ff990(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = FUN_007ff990(uVar1);
    uVar1 = FUN_0065b870(uVar1);
    thunk_FUN_041b2403(uVar1,0x112,0xf060,0);
  }
  return;
}

