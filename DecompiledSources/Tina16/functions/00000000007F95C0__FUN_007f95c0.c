/* Ghidra address: 007f95c0 */
/* Ghidra symbol: FUN_007f95c0 */


void FUN_007f95c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  while (param_1 != (undefined8 *)0x0) {
    iVar2 = thunk_FUN_041de4d6(param_1[1]);
    if (iVar2 != 0) {
      thunk_FUN_04154efc(param_1[1],0xffffffff);
    }
    puVar1 = (undefined8 *)*param_1;
    FUN_004095f0(param_1);
    param_1 = puVar1;
  }
  return;
}

