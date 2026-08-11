/* Ghidra address: 0159fe50 */
/* Ghidra symbol: FUN_0159fe50 */


undefined8 FUN_0159fe50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar1 = 0xfffffffe;
  }
  else if ((*(uint *)(*(longlong *)(param_1 + 0x28) + 8) & 2) == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

