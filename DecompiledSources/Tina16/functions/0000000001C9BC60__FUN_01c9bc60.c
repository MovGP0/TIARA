/* Ghidra address: 01c9bc60 */
/* Ghidra symbol: FUN_01c9bc60 */


void FUN_01c9bc60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x128));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x120));
  uVar1 = FUN_00442620(*(longlong *)(param_2 + 0x170) + 0x2528,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x2740));
  FUN_015fcd60(*(undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x2738),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  *(undefined8 *)(param_2 + 0x120) = 0;
  return;
}

