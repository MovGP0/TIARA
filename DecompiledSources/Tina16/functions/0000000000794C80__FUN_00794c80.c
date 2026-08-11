/* Ghidra address: 00794c80 */
/* Ghidra symbol: FUN_00794c80 */


undefined8 FUN_00794c80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00794d20(&PTR_FUN_0076da08,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

