/* Ghidra address: 004edc40 */
/* Ghidra symbol: FUN_004edc40 */


undefined8 FUN_004edc40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_004edce0(&PTR_FUN_004a60c0,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

