/* Ghidra address: 01107120 */
/* Ghidra symbol: FUN_01107120 */


void FUN_01107120(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01106ce0(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_011051a8);
  param_1[10] = *(longlong *)(lVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x80);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar1 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x94);
  param_1[0x15] = *(longlong *)(lVar1 + 0xa8);
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x98));
  param_1[0xb] = *(longlong *)(lVar1 + 0x58);
  FUN_01107250(param_1);
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0xa0));
  FUN_01107250(param_1);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar1 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar1 + 0xbc);
  param_1[0x1b] = *(longlong *)(lVar1 + 0xd8);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(lVar1 + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0xe2) = *(undefined1 *)(lVar1 + 0xe2);
  param_1[0x1d] = *(longlong *)(lVar1 + 0xe8);
  param_1[0x1e] = *(longlong *)(lVar1 + 0xf0);
  param_1[0x1f] = *(longlong *)(lVar1 + 0xf8);
  param_1[0x20] = *(longlong *)(lVar1 + 0x100);
  return;
}

