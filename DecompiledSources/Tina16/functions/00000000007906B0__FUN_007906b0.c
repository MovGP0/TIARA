/* Ghidra address: 007906b0 */
/* Ghidra symbol: FUN_007906b0 */


undefined8 FUN_007906b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00790750(&PTR_FUN_00768058,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

