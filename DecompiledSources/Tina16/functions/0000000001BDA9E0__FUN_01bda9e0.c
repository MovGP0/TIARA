/* Ghidra address: 01bda9e0 */
/* Ghidra symbol: FUN_01bda9e0 */


bool FUN_01bda9e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_0041b840(param_2,*(undefined8 *)(lVar1 + 0x60));
  }
  return lVar1 == 0;
}

