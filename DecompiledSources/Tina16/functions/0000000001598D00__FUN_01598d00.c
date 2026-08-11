/* Ghidra address: 01598d00 */
/* Ghidra symbol: FUN_01598d00 */


undefined8 FUN_01598d00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar1 = 0xfffffffe;
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x24) == 2) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x28) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

