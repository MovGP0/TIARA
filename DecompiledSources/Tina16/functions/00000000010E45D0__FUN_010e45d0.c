/* Ghidra address: 010e45d0 */
/* Ghidra symbol: FUN_010e45d0 */


bool FUN_010e45d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x880);
  if (lVar1 != 0) {
    FUN_01cc6030(lVar1);
    *(undefined8 *)(param_1 + 0x880) = 0;
  }
  return lVar1 == 0;
}

