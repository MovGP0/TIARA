/* Ghidra address: 012e6250 */
/* Ghidra symbol: FUN_012e6250 */


void FUN_012e6250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x38));
    FUN_012e5370(uVar1,param_3);
  }
  return;
}

