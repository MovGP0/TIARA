/* Ghidra address: 00eb03d0 */
/* Ghidra symbol: FUN_00eb03d0 */


undefined8 FUN_00eb03d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_00eb0940(&PTR_FUN_00eacbf0,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

