/* Ghidra address: 017b4f80 */
/* Ghidra symbol: FUN_017b4f80 */


void FUN_017b4f80(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  uVar1 = FUN_004095c0((longlong)((*(int *)(param_1 + 0x60) + param_3 + 1) * 8));
  local_30 = uVar1;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_00409a70(*(longlong *)(param_1 + 0x58),uVar1,(longlong)(*(int *)(param_1 + 0x60) * 8));
    FUN_017b1970(&local_30,*(int *)(param_1 + 0x60) * 8);
    FUN_004095f0(*(undefined8 *)(param_1 + 0x58),(longlong)(*(int *)(param_1 + 0x60) * 8));
  }
  FUN_00409a70(param_2,local_30,(longlong)((param_3 + 1) * 8));
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_3 + 1;
  FUN_017b51d0(param_1);
  return;
}

