/* Ghidra address: 008278f0 */
/* Ghidra symbol: FUN_008278f0 */


void FUN_008278f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(longlong *)(param_1 + 8)) {
    uVar1 = FUN_0060a330(*(longlong *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    FUN_00827890(param_1);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48),param_1);
    }
  }
  return;
}

