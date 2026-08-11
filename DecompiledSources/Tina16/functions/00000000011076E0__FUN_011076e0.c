/* Ghidra address: 011076e0 */
/* Ghidra symbol: FUN_011076e0 */


void FUN_011076e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01107120(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_01105d80);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(lVar1 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar1 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x130);
  *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(lVar1 + 0x149);
  *(undefined1 *)(param_1 + 0x14a) = *(undefined1 *)(lVar1 + 0x14a);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(lVar1 + 0x148);
  *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)(lVar1 + 0x17c);
  return;
}

