/* Ghidra address: 01cbfcb0 */
/* Ghidra symbol: FUN_01cbfcb0 */


void FUN_01cbfcb0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x14) = param_2;
    uVar1 = FUN_00409570((uint)param_2 * 4);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

