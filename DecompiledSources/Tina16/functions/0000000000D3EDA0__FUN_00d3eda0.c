/* Ghidra address: 00d3eda0 */
/* Ghidra symbol: FUN_00d3eda0 */


undefined8 FUN_00d3eda0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = thunk_FUN_041b570f(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  iVar1 = thunk_FUN_03d44949(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}

