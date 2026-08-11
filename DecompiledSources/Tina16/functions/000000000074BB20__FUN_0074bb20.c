/* Ghidra address: 0074bb20 */
/* Ghidra symbol: FUN_0074bb20 */


void FUN_0074bb20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x340),*(longlong *)(param_1 + 0x370));
  }
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x78));
  thunk_FUN_041a9b5c(uVar1,*(undefined8 *)(param_1 + 0x340));
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  return;
}

