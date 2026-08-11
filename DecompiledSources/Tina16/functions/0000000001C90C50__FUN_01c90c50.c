/* Ghidra address: 01c90c50 */
/* Ghidra symbol: FUN_01c90c50 */


void FUN_01c90c50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_01fe8868 + 0xb0))(DAT_01fe8868,param_2);
  if (iVar1 != -1) {
    (**(code **)(*DAT_01fe8868 + 0x98))(DAT_01fe8868,iVar1);
  }
  (**(code **)(*DAT_01fe8868 + 200))(DAT_01fe8868,0,param_2);
  while( true ) {
    iVar1 = (**(code **)(*DAT_01fe8868 + 0x28))(DAT_01fe8868);
    if (iVar1 < 9) break;
    iVar1 = (**(code **)(*DAT_01fe8868 + 0x28))(DAT_01fe8868);
    (**(code **)(*DAT_01fe8868 + 0x98))(DAT_01fe8868,iVar1 + -1);
  }
  FUN_01c90d20(param_1);
  FUN_01c910f0(param_1);
  return;
}

