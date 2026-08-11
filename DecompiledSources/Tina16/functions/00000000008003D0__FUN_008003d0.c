/* Ghidra address: 008003d0 */
/* Ghidra symbol: FUN_008003d0 */


undefined8 FUN_008003d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x638) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x638) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x638);
}

