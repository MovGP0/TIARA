/* Ghidra address: 0153cb20 */
/* Ghidra symbol: FUN_0153cb20 */


void FUN_0153cb20(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_013b9a60(&DAT_013b8648,1,*(undefined8 *)(param_1 + 0x10),0,0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar2 = FUN_0153ca90(param_1);
  *(undefined1 *)(param_1 + 0x4c) = uVar2;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}

