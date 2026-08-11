/* Ghidra address: 01419860 */
/* Ghidra symbol: FUN_01419860 */


void FUN_01419860(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  uVar1 = FUN_00442620(*(longlong *)(param_2 + 0x80) + 0x76c,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0xf78));
  FUN_015fcd60(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0xf70),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  return;
}

