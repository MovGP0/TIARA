/* Ghidra address: 013b5e30 */
/* Ghidra symbol: FUN_013b5e30 */


void FUN_013b5e30(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_013b9a60(&DAT_013b8648,1,*(undefined8 *)(param_1 + 0x10),0,
                       *(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar1 = FUN_013b5da0(param_1);
  *(undefined1 *)(param_1 + 0x54) = uVar1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  FUN_00414480(param_1 + 0x38);
  return;
}

