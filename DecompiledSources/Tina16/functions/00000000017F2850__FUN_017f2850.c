/* Ghidra address: 017f2850 */
/* Ghidra symbol: FUN_017f2850 */


void FUN_017f2850(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x868) + 0x4e8));
  lVar1 = *(longlong *)(param_1 + 0xb48);
  FUN_010cde90(param_2,lVar1 + 0x628,lVar1 + 0x630,lVar1 + 0x650);
  return;
}

