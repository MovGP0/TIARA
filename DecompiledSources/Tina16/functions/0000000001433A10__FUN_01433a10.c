/* Ghidra address: 01433a10 */
/* Ghidra symbol: FUN_01433a10 */


void FUN_01433a10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_014098a0(&PTR_FUN_01408da8,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

