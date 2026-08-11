/* Ghidra address: 004e3500 */
/* Ghidra symbol: FUN_004e3500 */


undefined8 FUN_004e3500(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_004e3d10(&PTR_FUN_00491e10,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

