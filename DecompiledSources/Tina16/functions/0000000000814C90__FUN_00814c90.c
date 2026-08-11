/* Ghidra address: 00814c90 */
/* Ghidra symbol: FUN_00814c90 */


void FUN_00814c90(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  local_20 = (int)uVar1;
  uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  FUN_00814e80(param_1,(local_20 - *(int *)(*(longlong *)(param_1 + 0x20) + 0xf8)) -
                       *(int *)(param_1 + 0xc),
               (uStack_1c - *(int *)(*(longlong *)(param_1 + 0x20) + 300)) -
               *(int *)(param_1 + 0x10));
  return;
}

