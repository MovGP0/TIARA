/* Ghidra address: 004ef7e0 */
/* Ghidra symbol: FUN_004ef7e0 */


undefined8 FUN_004ef7e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_004ef880(&PTR_FUN_004a8288,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

