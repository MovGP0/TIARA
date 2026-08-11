/* Ghidra address: 00cdd870 */
/* Ghidra symbol: FUN_00cdd870 */


undefined8 FUN_00cdd870(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*DAT_01eb0290 + 0xb0))(DAT_01eb0290,param_1);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(*DAT_01eb0290 + 0x30))(DAT_01eb0290,iVar1);
  }
  return uVar2;
}

