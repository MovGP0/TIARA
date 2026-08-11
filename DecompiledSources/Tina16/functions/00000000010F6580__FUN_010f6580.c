/* Ghidra address: 010f6580 */
/* Ghidra symbol: FUN_010f6580 */


void FUN_010f6580(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x868) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x868));
  }
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x880));
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x9a0));
  }
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x9a8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9b0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x10);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb08));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb38));
  FUN_010e2c30(param_1,param_2);
  return;
}

