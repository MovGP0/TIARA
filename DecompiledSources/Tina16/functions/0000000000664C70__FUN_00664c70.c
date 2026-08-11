/* Ghidra address: 00664c70 */
/* Ghidra symbol: FUN_00664c70 */


undefined8 FUN_00664c70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x2c) != '\0')) {
    FUN_00664e80(param_1,0);
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x78))(*(longlong *)(param_1 + 0x40),1,0);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  return uVar1;
}

