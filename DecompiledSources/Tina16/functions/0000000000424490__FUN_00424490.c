/* Ghidra address: 00424490 */
/* Ghidra symbol: FUN_00424490 */


void FUN_00424490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  if (*(int *)(lVar1 + 0x10) == 0) {
    FUN_00412130(lVar1);
    *(longlong *)(param_2 + 0x50) = param_2 + 0x68;
    *(undefined8 *)(param_2 + 0x48) = **(undefined8 **)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  }
  else {
    FUN_00412130(lVar1);
  }
  return;
}

