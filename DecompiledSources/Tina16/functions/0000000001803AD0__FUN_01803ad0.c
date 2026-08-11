/* Ghidra address: 01803ad0 */
/* Ghidra symbol: FUN_01803ad0 */


void FUN_01803ad0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x48),param_2);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48),param_2);
  }
  *(longlong *)(param_2 + 0x28) = param_1;
  return;
}

