/* Ghidra address: 014d2ed0 */
/* Ghidra symbol: FUN_014d2ed0 */


void FUN_014d2ed0(undefined1 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0x18) = param_1;
  uVar1 = FUN_00409570(param_1);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = FUN_00409570((ulonglong)*(byte *)(param_2 + 0x18) << 3);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = FUN_00409570((ulonglong)*(byte *)(param_2 + 0x18) << 3);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = FUN_00409570((ulonglong)*(byte *)(param_2 + 0x18) << 3);
  *(undefined8 *)(param_2 + 0xb0) = uVar1;
  uVar1 = FUN_00409570((ulonglong)*(byte *)(param_2 + 0x18) << 3);
  *(undefined8 *)(param_2 + 0xb8) = uVar1;
  return;
}

