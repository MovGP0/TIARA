/* Ghidra address: 014e4360 */
/* Ghidra symbol: FUN_014e4360 */


void FUN_014e4360(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0x296) = 2;
  uVar1 = FUN_01d0efe0(&DAT_01d0ae90,1);
  *(undefined8 *)(param_2 + 0x28e) = uVar1;
  FUN_01d0f0e0(uVar1,param_1);
  *(undefined8 *)(param_2 + 0x262) = param_1;
  *(undefined2 *)(param_2 + 0x260) = 1;
  return;
}

