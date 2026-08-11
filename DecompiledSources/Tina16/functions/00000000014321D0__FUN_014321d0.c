/* Ghidra address: 014321d0 */
/* Ghidra symbol: FUN_014321d0 */


void FUN_014321d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_013ef440(&PTR_FUN_013ee858,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

