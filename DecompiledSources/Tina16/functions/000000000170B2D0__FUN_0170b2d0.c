/* Ghidra address: 0170b2d0 */
/* Ghidra symbol: FUN_0170b2d0 */


void FUN_0170b2d0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_12c [256];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  FUN_0170b0c0(param_1,param_1 + 0x58);
  FUN_0170b0c0(param_1,param_1 + 0x158);
  FUN_0170b0c0(param_1,param_1 + 600);
  FUN_0170b0c0(param_1,param_1 + 0x358);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x48));
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
            (*(longlong **)(param_1 + 0x48),local_12c,0x14);
  FUN_0170b190(param_1,*(undefined8 *)(param_1 + 8),local_1c);
  FUN_0170b190(param_1,*(undefined8 *)(param_1 + 0x10),local_20);
  FUN_0170b190(param_1,*(undefined8 *)(param_1 + 0x18),local_24);
  FUN_0170b190(param_1,*(undefined8 *)(param_1 + 0x20),local_28);
  FUN_0170b190(param_1,*(undefined8 *)(param_1 + 0x28),local_2c);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48),uVar1,0);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),local_1c,4);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),local_20,4);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),local_24,4);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),local_28,4);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),local_2c,4);
  return;
}

