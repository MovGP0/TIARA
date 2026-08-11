/* Ghidra address: 00b1b100 */
/* Ghidra symbol: FUN_00b1b100 */


undefined4 FUN_00b1b100(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  uVar2 = 0xffffffff;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x28) != '\0') {
    uVar2 = uVar1;
  }
  return uVar2;
}

