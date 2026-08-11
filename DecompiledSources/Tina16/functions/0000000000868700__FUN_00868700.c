/* Ghidra address: 00868700 */
/* Ghidra symbol: FUN_00868700 */


undefined4 FUN_00868700(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  uVar1 = FUN_0086a2d0(*(undefined8 *)(param_1 + 0x20),local_38);
  FUN_0041d630(uVar1);
  (**(code **)(param_1 + 0x28))
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),local_38[0]);
  return 0;
}

