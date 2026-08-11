/* Ghidra address: 00648130 */
/* Ghidra symbol: FUN_00648130 */


undefined8 * FUN_00648130(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00647f90(param_1,param_2,param_3);
  if (param_3 != 0) {
    if ((*(ushort *)(param_3 + 0x34) & 8) != 0) {
      FUN_00416ba0(param_2,&DAT_006482a8,*param_2);
    }
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_0063d930);
    if ((cVar2 == '\0') || (*(longlong *)(param_3 + 0x78) == 0)) {
      lVar1 = *(longlong *)(param_3 + 8);
      if (lVar1 != 0) {
        cVar2 = FUN_004113d0(lVar1,&PTR_FUN_007f4918);
        if (cVar2 == '\0') {
          FUN_00648130(param_1,&local_28,lVar1);
          FUN_00416cd0(param_2,4,local_28,&DAT_006482b8,&LAB_006482e0,*param_2);
        }
      }
    }
    else {
      FUN_00648130(param_1,local_20,*(undefined8 *)(param_3 + 0x78));
      FUN_00416cd0(param_2,4,local_20[0],&DAT_006482b8,&DAT_006482cc,*param_2);
    }
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

