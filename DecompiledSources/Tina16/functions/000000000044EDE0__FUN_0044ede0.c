/* Ghidra address: 0044ede0 */
/* Ghidra symbol: FUN_0044ede0 */


void FUN_0044ede0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    if (param_2[1] != 0) {
      thunk_FUN_041d2921(param_2[1]);
    }
    FUN_004095f0(param_2);
    param_2 = puVar1;
  }
  return;
}

