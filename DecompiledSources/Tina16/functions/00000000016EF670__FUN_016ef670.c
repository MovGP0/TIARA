/* Ghidra address: 016ef670 */
/* Ghidra symbol: FUN_016ef670 */


undefined4 FUN_016ef670(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x113) != '\0') {
    uVar1 = (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 0x60),param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

