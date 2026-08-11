/* Ghidra address: 01302c90 */
/* Ghidra symbol: FUN_01302c90 */


void FUN_01302c90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa00);
  iVar2 = FUN_0040c770((double)(*(int *)(*(longlong *)(param_1 + 0xd0) + 0x10) -
                               *(int *)(param_1 + 0x9c)) / (double)*(int *)(lVar1 + 0x49c));
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e8),-(*(int *)(lVar1 + 0x494) * iVar2));
  return;
}

