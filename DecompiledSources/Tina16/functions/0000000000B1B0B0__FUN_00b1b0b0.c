/* Ghidra address: 00b1b0b0 */
/* Ghidra symbol: FUN_00b1b0b0 */


undefined8 FUN_00b1b0b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_3);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x28) == '\0') {
    FUN_004144d0(param_2);
  }
  else {
    FUN_00b19380(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  }
  return param_2;
}

