/* Ghidra address: 00d58480 */
/* Ghidra symbol: FUN_00d58480 */


longlong FUN_00d58480(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&PTR_FUN_00d56720,1);
  *(longlong *)(lVar1 + 8) = param_1;
  FUN_00414ad0(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(lVar1 + 0x10) = *param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_2[1];
  return lVar1;
}

