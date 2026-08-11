/* Ghidra address: 018a9c30 */
/* Ghidra symbol: FUN_018a9c30 */


void FUN_018a9c30(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 400))
            (*(longlong **)(param_1 + 0x4e8),
             (longlong)(*(int *)(param_1 + 0x98) + -0x104) / 2 & 0xffffffff,
             (longlong)(*(int *)(param_1 + 0x9c) + -0x4b) / 3 & 0xffffffff,0x104,0x4b);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x4e0),param_2);
  FUN_0064e700(*(undefined8 *)(param_1 + 0x4e8));
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x198))(*(longlong **)(param_1 + 0x4e8));
  return;
}

