/* Ghidra address: 01ca1950 */
/* Ghidra symbol: FUN_01ca1950 */


void FUN_01ca1950(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00442620(*(longlong *)(param_2 + 0x50) + 0x2528,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x2740));
  FUN_015fcd60(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x2738),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  return;
}

