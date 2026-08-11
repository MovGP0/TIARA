/* Ghidra address: 01cb1830 */
/* Ghidra symbol: FUN_01cb1830 */


void FUN_01cb1830(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0x6c;
  uVar1 = FUN_00409570((longlong)(*(int *)(param_1 + 0x10) * 0x6c));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}

