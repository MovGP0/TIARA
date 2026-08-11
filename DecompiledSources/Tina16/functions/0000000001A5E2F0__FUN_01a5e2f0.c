/* Ghidra address: 01a5e2f0 */
/* Ghidra symbol: FUN_01a5e2f0 */


void FUN_01a5e2f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [16];
  
  iVar1 = FUN_01a5ee60(param_1,param_2);
  iVar2 = FUN_01a5eed0(param_1,param_2);
  FUN_004238d0(local_38,0,0,0,0);
  FUN_01a8dd40(param_2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(int *)(param_1 + 0x48) + iVar1,*(int *)(param_1 + 0x4c) + iVar2,local_38);
  return;
}

