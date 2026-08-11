/* Ghidra address: 014322c0 */
/* Ghidra symbol: FUN_014322c0 */


void FUN_014322c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_013f2070(&PTR_FUN_013f0eb8,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

