/* Ghidra address: 00a45750 */
/* Ghidra symbol: FUN_00a45750 */


void FUN_00a45750(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009ec850(&PTR_FUN_009eb620,1,0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))
            (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x88));
  return;
}

