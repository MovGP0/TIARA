/* Ghidra address: 01433880 */
/* Ghidra symbol: FUN_01433880 */


void FUN_01433880(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_013f98a0(&PTR_FUN_013f9088,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

