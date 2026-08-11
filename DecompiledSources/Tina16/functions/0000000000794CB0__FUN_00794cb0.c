/* Ghidra address: 00794cb0 */
/* Ghidra symbol: FUN_00794cb0 */


undefined8 FUN_00794cb0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00795230(&PTR_FUN_0076e490,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

