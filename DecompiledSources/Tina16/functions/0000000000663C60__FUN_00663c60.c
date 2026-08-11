/* Ghidra address: 00663c60 */
/* Ghidra symbol: FUN_00663c60 */


void FUN_00663c60(longlong param_1)

{
  int iVar1;
  code *local_28;
  longlong local_20;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar1 = FUN_00659110(*(undefined8 *)(param_1 + 0x28));
    if (0 < iVar1) {
      local_28 = FUN_00663cb0;
      local_20 = param_1;
      FUN_006612d0(param_1,0,&local_28);
    }
  }
  return;
}

