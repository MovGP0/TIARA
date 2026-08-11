/* Ghidra address: 00c72350 */
/* Ghidra symbol: FUN_00c72350 */


void FUN_00c72350(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(longlong *)(param_1 + 8)) {
    uVar1 = FUN_0060a330(*(longlong *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    FUN_00c722f0(param_1);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_1);
    }
  }
  return;
}

