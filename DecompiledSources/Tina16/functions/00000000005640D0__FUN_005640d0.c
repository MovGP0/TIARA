/* Ghidra address: 005640d0 */
/* Ghidra symbol: FUN_005640d0 */


undefined8 FUN_005640d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00564170(&PTR_FUN_00540198,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

