/* Ghidra address: 01837140 */
/* Ghidra symbol: FUN_01837140 */


longlong FUN_01837140(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = FUN_0184eb50(*(undefined8 *)(param_1 + 0x38),param_2);
  if (lVar1 == 0) {
    FUN_00416cd0(&local_10,4,*(undefined8 *)PTR_DAT_02001108,&DAT_01837204,param_2,&DAT_01837204);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return lVar1;
}

