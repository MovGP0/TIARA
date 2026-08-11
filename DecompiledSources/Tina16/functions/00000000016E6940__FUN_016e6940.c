/* Ghidra address: 016e6940 */
/* Ghidra symbol: FUN_016e6940 */


void FUN_016e6940(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  
  FUN_016e2ea0(param_1,param_2,param_3,param_4,param_5);
  uVar1 = FUN_0040c850(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_0040c850(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  FUN_016e69a0(param_1,param_5);
  return;
}

