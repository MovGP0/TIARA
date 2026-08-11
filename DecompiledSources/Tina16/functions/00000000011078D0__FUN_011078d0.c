/* Ghidra address: 011078d0 */
/* Ghidra symbol: FUN_011078d0 */


void FUN_011078d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01107490(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_011061a0);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0x2a);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(lVar1 + 0x158);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(lVar1 + 0x2e);
  return;
}

