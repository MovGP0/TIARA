/* Ghidra address: 019d53b0 */
/* Ghidra symbol: FUN_019d53b0 */


void FUN_019d53b0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x812) = 0;
  *(undefined1 *)(param_1 + 0x811) = 0;
  *(undefined1 *)(param_1 + 0x810) = 0;
  *(undefined1 *)(param_1 + 0x813) = 0;
  uVar1 = FUN_00409570(0x1fd8);
  *(undefined8 *)(param_1 + 0x14c8) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x808) = uVar1;
  FUN_004ae7e0(uVar1,*(undefined8 *)(param_1 + 0x6b8));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x6c8));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x6d8));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x6e8));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x760));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x770));
  FUN_019d5d90(param_1,1);
  uVar1 = FUN_019cfd40(&DAT_019cf828,1);
  *(undefined8 *)(param_1 + 0x818) = uVar1;
  *(undefined1 *)(param_1 + 0x812) = 1;
  return;
}

