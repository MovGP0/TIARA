/* Ghidra address: 01107490 */
/* Ghidra symbol: FUN_01107490 */


void FUN_01107490(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01107120(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_01105a20);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0x2a);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar1 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x130);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(lVar1 + 0x148);
  FUN_00414ad0(param_1 + 0x108,*(undefined8 *)(lVar1 + 0x108));
  return;
}

