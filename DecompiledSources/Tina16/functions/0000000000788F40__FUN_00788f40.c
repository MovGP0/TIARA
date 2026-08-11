/* Ghidra address: 00788f40 */
/* Ghidra symbol: FUN_00788f40 */


void FUN_00788f40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [16];
  
  uVar1 = FUN_00788c10(param_1);
  FUN_005fdab0(param_2[0x10],uVar1);
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_28);
  (**(code **)(*param_2 + 0xa8))(param_2,local_28);
  return;
}

