/* Ghidra address: 00b8a8e0 */
/* Ghidra symbol: FUN_00b8a8e0 */


undefined8 FUN_00b8a8e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_res20;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_007d94d0);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_00640c18);
    if (cVar1 == '\0') {
      FUN_00416cd0(param_2,3,local_res20,&LAB_00b8ab44,*(undefined8 *)(param_3 + 0x10));
    }
    else {
      FUN_00414480(local_20);
      for (; param_3 != 0; param_3 = *(longlong *)(param_3 + 0x78)) {
        cVar1 = FUN_004113d0(param_3,&PTR_FUN_007f0370);
        if (cVar1 != '\0') break;
        cVar1 = FUN_004113d0(param_3,&PTR_FUN_007ec678);
        if (cVar1 != '\0') break;
        FUN_00416cd0(local_20,3,*(undefined8 *)(param_3 + 0x10),&LAB_00b8ab44,local_20[0]);
      }
      if (local_20[0] == 0) {
        FUN_00414ad0(param_2,local_res20);
      }
      else {
        uVar2 = 0;
        if (local_20[0] != 0) {
          uVar2 = *(undefined4 *)(local_20[0] + -4);
        }
        FUN_00416e20(local_20,uVar2,1);
        FUN_00416cd0(param_2,3,local_res20,&LAB_00b8ab44,local_20[0]);
      }
    }
  }
  else {
    FUN_00414480(local_20);
    for (lVar3 = param_3; (lVar3 != 0 && (*(longlong *)(lVar3 + 0x10) != 0));
        lVar3 = *(longlong *)(lVar3 + 200)) {
      FUN_00416cd0(local_20,3,*(undefined8 *)(lVar3 + 0x10),&LAB_00b8ab44,local_20[0]);
    }
    if (local_20[0] != 0) {
      uVar2 = 0;
      if (local_20[0] != 0) {
        uVar2 = *(undefined4 *)(local_20[0] + -4);
      }
      FUN_00416e20(local_20,uVar2,1);
    }
    if (lVar3 != 0) {
      lVar3 = FUN_007e3880(param_3);
      FUN_00416cd0(local_20,3,*(undefined8 *)(lVar3 + 0x10),&LAB_00b8ab44,local_20[0]);
    }
    FUN_00416cd0(param_2,3,local_res20,&LAB_00b8ab44,local_20[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return param_2;
}

