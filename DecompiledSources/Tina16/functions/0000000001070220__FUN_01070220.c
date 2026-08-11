/* Ghidra address: 01070220 */
/* Ghidra symbol: FUN_01070220 */


void FUN_01070220(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x730) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar1;
  *(undefined8 *)(param_1 + 0x740) = 0;
  return;
}

