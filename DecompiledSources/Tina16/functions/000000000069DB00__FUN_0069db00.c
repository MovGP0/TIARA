/* Ghidra address: 0069db00 */
/* Ghidra symbol: FUN_0069db00 */


undefined8 FUN_0069db00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = FUN_0069d010(&PTR_FUN_0069ccd8,1,param_1);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return *(undefined8 *)(param_1 + 8);
}

