/* Ghidra address: 00d7f630 */
/* Ghidra symbol: FUN_00d7f630 */


void FUN_00d7f630(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),param_3);
  (**(code **)(*param_2 + 0x10))(param_2,uVar1);
  return;
}

