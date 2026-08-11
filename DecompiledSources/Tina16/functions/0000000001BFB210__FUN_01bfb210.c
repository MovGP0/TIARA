/* Ghidra address: 01bfb210 */
/* Ghidra symbol: FUN_01bfb210 */


undefined8 FUN_01bfb210(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_004b18b0(param_1,param_2);
  }
  else {
    FUN_00416ba0(param_2,L"ActionBar ->",*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  }
  return param_2;
}

