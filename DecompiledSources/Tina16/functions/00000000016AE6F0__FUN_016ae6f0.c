/* Ghidra address: 016ae6f0 */
/* Ghidra symbol: FUN_016ae6f0 */


void FUN_016ae6f0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_12c [256];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  FUN_016ae190(param_1,param_1 + 0x48);
  FUN_016ae190(param_1,param_1 + 0x148);
  FUN_016ae190(param_1,param_1 + 0x248);
  FUN_016ae190(param_1,param_1 + 0x348);
  uVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x38));
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
            (*(longlong **)(param_1 + 0x38),local_12c,0x14);
  FUN_016ae5b0(param_1,*(undefined8 *)(param_1 + 8),local_1c);
  FUN_016ae5b0(param_1,*(undefined8 *)(param_1 + 0x10),local_20);
  FUN_016ae5b0(param_1,*(undefined8 *)(param_1 + 0x18),local_24);
  FUN_016ae5b0(param_1,*(undefined8 *)(param_1 + 0x20),local_28);
  FUN_016ae5b0(param_1,*(undefined8 *)(param_1 + 0x28),local_2c);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38),uVar1,0);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_1c,4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_20,4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_24,4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_28,4);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_2c,4);
  return;
}

