/* Ghidra address: 012e6150 */
/* Ghidra symbol: FUN_012e6150 */


void FUN_012e6150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x38));
    FUN_012e5330(uVar1,param_3);
  }
  return;
}

