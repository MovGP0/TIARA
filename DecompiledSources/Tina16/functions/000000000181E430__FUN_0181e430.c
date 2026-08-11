/* Ghidra address: 0181e430 */
/* Ghidra symbol: FUN_0181e430 */


void FUN_0181e430(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),param_2);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10),param_2);
  }
  *(longlong *)(param_2 + 0x20) = param_1;
  return;
}

