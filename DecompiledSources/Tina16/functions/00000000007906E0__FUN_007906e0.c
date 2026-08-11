/* Ghidra address: 007906e0 */
/* Ghidra symbol: FUN_007906e0 */


undefined8 FUN_007906e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00790c50(&PTR_FUN_00768ad8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

