/* Ghidra address: 01054510 */
/* Ghidra symbol: FUN_01054510 */


undefined8 FUN_01054510(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x510);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x510);
  }
  return uVar1;
}

