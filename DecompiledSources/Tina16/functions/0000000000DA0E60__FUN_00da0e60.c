/* Ghidra address: 00da0e60 */
/* Ghidra symbol: FUN_00da0e60 */


undefined8 FUN_00da0e60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_00da0f00(&PTR_FUN_00d54268,1,param_1);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x48);
}

