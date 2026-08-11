/* Ghidra address: 017b8420 */
/* Ghidra symbol: FUN_017b8420 */


void FUN_017b8420(longlong param_1)

{
  ulonglong uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))(*(longlong **)(param_1 + 0x48));
  uVar1 = (ulonglong)(*(byte *)(param_1 + 0x62) + 1) % (ulonglong)*(byte *)(param_1 + 0x60);
  *(char *)(param_1 + 0x62) = (char)uVar1;
  FUN_007d5cb0(*(undefined8 *)(param_1 + 0x68),uVar1,*(undefined8 *)(param_1 + 0x48));
  return;
}

