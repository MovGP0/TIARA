/* Ghidra address: 0055f490 */
/* Ghidra symbol: FUN_0055f490 */


undefined8 FUN_0055f490(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_0055fc30(&PTR_FUN_00533178,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

