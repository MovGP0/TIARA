/* Ghidra address: 013d05b0 */
/* Ghidra symbol: FUN_013d05b0 */


void FUN_013d05b0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_013bcca0(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x8f8));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x10))(*(longlong **)(param_1 + 0x8f8));
  if (*PTR_DAT_020017c0 == '\0') {
    uVar1 = *(undefined8 *)PTR_DAT_020027c0;
  }
  else {
    uVar1 = *(undefined8 *)PTR_DAT_020037b0;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8f8),uVar1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)PTR_DAT_02005188);
  return;
}

