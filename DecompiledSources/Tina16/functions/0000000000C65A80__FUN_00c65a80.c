/* Ghidra address: 00c65a80 */
/* Ghidra symbol: FUN_00c65a80 */


void FUN_00c65a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x70));
  if (lVar1 != 0) {
    uVar2 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x70));
    thunk_FUN_041b2403(param_2,0x80,0,uVar2);
  }
  return;
}

