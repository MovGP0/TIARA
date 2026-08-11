/* Ghidra address: 01b16490 */
/* Ghidra symbol: FUN_01b16490 */


undefined8 FUN_01b16490(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_01b16a30(&PTR_FUN_01b01e60,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

