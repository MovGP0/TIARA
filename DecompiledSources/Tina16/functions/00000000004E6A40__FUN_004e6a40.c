/* Ghidra address: 004e6a40 */
/* Ghidra symbol: FUN_004e6a40 */


undefined8 FUN_004e6a40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_004e6ae0(&PTR_FUN_00499d20,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

