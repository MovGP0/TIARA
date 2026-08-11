/* Ghidra address: 01ac8a80 */
/* Ghidra symbol: FUN_01ac8a80 */


void FUN_01ac8a80(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x10))(*(longlong **)(param_1 + 0x700),param_2);
  uVar2 = FUN_005fd4d0(param_2);
  uVar1 = FUN_01a8db90(uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),uVar1);
  uVar2 = FUN_005fd660(param_2);
  uVar1 = FUN_01a8df10(uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),uVar1);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6e0),
               *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x2c));
  return;
}

