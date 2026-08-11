/* Ghidra address: 007e3610 */
/* Ghidra symbol: FUN_007e3610 */


undefined8 FUN_007e3610(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x80))(*(longlong **)(param_1 + 0xa0),1);
  return *(undefined8 *)(param_1 + 0xa0);
}

