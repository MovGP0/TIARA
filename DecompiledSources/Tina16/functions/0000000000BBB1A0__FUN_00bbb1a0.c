/* Ghidra address: 00bbb1a0 */
/* Ghidra symbol: FUN_00bbb1a0 */


void FUN_00bbb1a0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_2 / param_3) * param_3;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x14),iVar2,param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x20),iVar2,param_3);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

