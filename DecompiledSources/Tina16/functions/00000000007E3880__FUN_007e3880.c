/* Ghidra address: 007e3880 */
/* Ghidra symbol: FUN_007e3880 */


undefined8 FUN_007e3880(longlong param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = *(longlong *)(lVar1 + 200);
  } while (param_1 != 0);
  return *(undefined8 *)(lVar1 + 0xe0);
}

