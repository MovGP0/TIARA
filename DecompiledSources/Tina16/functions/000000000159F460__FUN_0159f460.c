/* Ghidra address: 0159f460 */
/* Ghidra symbol: FUN_0159f460 */


undefined8 FUN_0159f460(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
     (*(longlong *)(param_1 + 0x38) == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) != 0) {
      (**(code **)(param_1 + 0x38))
                (*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x38));
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

