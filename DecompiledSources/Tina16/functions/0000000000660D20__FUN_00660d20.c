/* Ghidra address: 00660d20 */
/* Ghidra symbol: FUN_00660d20 */


void FUN_00660d20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  do {
    lVar1 = *(longlong *)(lVar1 + 0x18);
  } while (lVar1 != 0);
  return;
}

