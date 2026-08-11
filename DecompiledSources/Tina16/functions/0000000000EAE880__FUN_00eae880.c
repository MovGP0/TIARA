/* Ghidra address: 00eae880 */
/* Ghidra symbol: FUN_00eae880 */


void FUN_00eae880(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = (**(code **)(*DAT_0202ea68 + 0x30))(DAT_0202ea68,param_1);
  FUN_00414b50(local_20,*(undefined8 *)(lVar1 + 8));
  uVar2 = (**(code **)(*DAT_0202ea68 + 0x30))(DAT_0202ea68,param_1);
  FUN_00410f20(uVar2);
  uVar2 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_20[0]);
  (**(code **)(*DAT_0202ea68 + 0x48))(DAT_0202ea68,param_1,uVar2);
  FUN_00414480(local_20);
  return;
}

