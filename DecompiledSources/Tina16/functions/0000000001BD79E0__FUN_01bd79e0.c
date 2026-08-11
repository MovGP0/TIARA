/* Ghidra address: 01bd79e0 */
/* Ghidra symbol: FUN_01bd79e0 */


void FUN_01bd79e0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_0065a2f0(param_1);
  uVar1 = FUN_006357a0(*(undefined4 *)(param_1 + 200),0xffffffab,0);
  *(undefined4 *)(param_1 + 0x574) = uVar1;
  uVar1 = FUN_006357a0(*(undefined4 *)(param_1 + 200),0x55,0);
  *(undefined4 *)(param_1 + 0x578) = uVar1;
  return;
}

