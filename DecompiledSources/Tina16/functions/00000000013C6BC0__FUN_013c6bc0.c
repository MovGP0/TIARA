/* Ghidra address: 013c6bc0 */
/* Ghidra symbol: FUN_013c6bc0 */


void FUN_013c6bc0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_013bcca0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8));
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))(*(longlong **)(param_1 + 0xa8));
  if (*PTR_DAT_020017c0 == '\0') {
    uVar1 = *(undefined8 *)PTR_DAT_020027c0;
  }
  else {
    uVar1 = *(undefined8 *)PTR_DAT_020037b0;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa8),uVar1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_02005188);
  return;
}

