/* Ghidra address: 01822860 */
/* Ghidra symbol: FUN_01822860 */


undefined8 FUN_01822860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined1 local_20;
  
  iVar1 = (**(code **)(*DAT_021102c8 + 0xb8))(DAT_021102c8,param_2);
  if (iVar1 == -1) {
    local_20 = 0x11;
    local_28 = param_2;
    uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02005228,&local_28,0);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_004b4060(DAT_021102c8,param_1,param_2);
  }
  return param_1;
}

