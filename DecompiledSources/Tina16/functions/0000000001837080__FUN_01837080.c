/* Ghidra address: 01837080 */
/* Ghidra symbol: FUN_01837080 */


void FUN_01837080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = FUN_0184ce20(param_2,param_3);
  if (lVar1 != 0) {
    FUN_00416cd0(&local_10,4,*(undefined8 *)PTR_DAT_020035a0,&DAT_01837134,param_3,&DAT_01837134);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return;
}

