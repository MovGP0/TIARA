/* Ghidra address: 01530440 */
/* Ghidra symbol: FUN_01530440 */


void FUN_01530440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_01f5fc98 + 0xb0))(DAT_01f5fc98,param_2);
  if (iVar1 != -1) {
    (**(code **)(*DAT_01f5fc98 + 0x98))(DAT_01f5fc98,iVar1);
  }
  (**(code **)(*DAT_01f5fc98 + 200))(DAT_01f5fc98,0,param_2);
  while( true ) {
    iVar1 = (**(code **)(*DAT_01f5fc98 + 0x28))(DAT_01f5fc98);
    if (iVar1 < 5) break;
    iVar1 = (**(code **)(*DAT_01f5fc98 + 0x28))(DAT_01f5fc98);
    (**(code **)(*DAT_01f5fc98 + 0x98))(DAT_01f5fc98,iVar1 + -1);
  }
  FUN_01530510(param_1);
  FUN_015308c0(param_1);
  return;
}

