/* Ghidra address: 014c17d0 */
/* Ghidra symbol: FUN_014c17d0 */


void FUN_014c17d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

