/* Ghidra address: 006d7f70 */
/* Ghidra symbol: FUN_006d7f70 */


void FUN_006d7f70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar1 = FUN_006d7590(param_1,*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x540) = lVar1;
    FUN_0064c650(*(undefined8 *)(param_2 + 0x10),0);
  }
  return;
}

