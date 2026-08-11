/* Ghidra address: 00ccd650 */
/* Ghidra symbol: FUN_00ccd650 */


undefined4 FUN_00ccd650(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_2c = 0;
  if (param_2 != 0) {
    lVar2 = (**(code **)PTR_DAT_02001808)(param_1,&PTR_s_Load_file_into_cache_01eadbd8);
    if (lVar2 == 0) goto LAB_00ccd72b;
    FUN_00415dd0(local_20,param_2,0xfde9);
    uVar3 = FUN_00415ab0(local_20[0]);
    iVar1 = FUN_00ca56c0(lVar2,uVar3,1);
    if (iVar1 != 1) goto LAB_00ccd72b;
  }
  if (param_3 != 0) {
    FUN_00415dd0(&local_28,param_3,0xfde9);
    uVar3 = FUN_00415ab0(local_28);
    iVar1 = (**(code **)PTR_DAT_02002730)(param_1,0,uVar3);
    if (iVar1 != 1) goto LAB_00ccd72b;
  }
  if ((param_2 != 0) || (param_3 != 0)) {
    local_2c = 1;
  }
LAB_00ccd72b:
  FUN_00414590(&local_28,2);
  return local_2c;
}

