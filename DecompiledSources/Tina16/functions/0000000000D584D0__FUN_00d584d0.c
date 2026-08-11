/* Ghidra address: 00d584d0 */
/* Ghidra symbol: FUN_00d584d0 */


longlong FUN_00d584d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = FUN_00410e60(&PTR_FUN_00d56720,1);
  *(longlong *)(lVar1 + 8) = param_1;
  FUN_00414ad0(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x70));
  FUN_00d57530(&local_38,param_2);
  *(undefined8 *)(lVar1 + 0x10) = local_38;
  *(undefined8 *)(lVar1 + 0x18) = uStack_30;
  return lVar1;
}

