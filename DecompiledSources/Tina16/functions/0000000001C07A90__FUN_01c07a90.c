/* Ghidra address: 01c07a90 */
/* Ghidra symbol: FUN_01c07a90 */


undefined8 FUN_01c07a90(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_02111470 == (longlong *)0x0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004718);
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  uVar1 = (**(code **)(*DAT_02111470 + 0x30))(DAT_02111470,param_2);
  uVar1 = FUN_004113f0(uVar1,&LAB_01bebf28);
  FUN_00414480(&local_10);
  return uVar1;
}

