/* Ghidra address: 004aecf0 */
/* Ghidra symbol: FUN_004aecf0 */


undefined8 FUN_004aecf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 2) < 1) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,0);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + (longlong)(*(int *)(param_1 + 2) + -1) * 8);
  }
  return uVar1;
}

