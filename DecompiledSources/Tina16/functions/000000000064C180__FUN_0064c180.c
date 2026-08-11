/* Ghidra address: 0064c180 */
/* Ghidra symbol: FUN_0064c180 */


undefined8 FUN_0064c180(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18);
  }
  return uVar1;
}

