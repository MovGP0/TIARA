/* Ghidra address: 0198bb60 */
/* Ghidra symbol: FUN_0198bb60 */


bool FUN_0198bb60(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0xd8),0,0,0);
  iVar1 = FUN_01d31a40(**(undefined8 **)(param_1 + 0xd8));
  return iVar1 != 0;
}

