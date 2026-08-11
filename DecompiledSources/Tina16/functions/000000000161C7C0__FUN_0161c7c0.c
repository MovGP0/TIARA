/* Ghidra address: 0161c7c0 */
/* Ghidra symbol: FUN_0161c7c0 */


undefined8 FUN_0161c7c0(undefined8 param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  if ((param_4 & param_3 != 0) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_0161be50(param_2,param_3,local_28,1);
  }
  FUN_00414b50(local_20,&DAT_0161c968);
  if (*(char *)(param_2 + 8) == '\0') {
    if (*(char *)(param_2 + 9) == '\0') {
      if (*(char *)(param_2 + 0xb) == '\0') {
        FUN_00416ad0(local_20,L"object: ");
      }
      else {
        FUN_00416ad0(local_20,L"spectarget: ");
      }
    }
    else {
      FUN_00416ad0(local_20,L"immediate: ");
    }
  }
  else {
    FUN_00416ad0(local_20,L"temp: ");
  }
  FUN_0043f750(&local_30,*(undefined4 *)(param_2 + 0xc));
  FUN_00416ad0(local_20,local_30);
  if ((param_4 & lVar1 != 0) != 0) {
    FUN_01614d90(&local_38,*(undefined4 *)(lVar1 + 0x14));
    FUN_00416cd0(local_20,3,local_20[0],L", t: ",local_38);
  }
  FUN_00416ad0(local_20,&LAB_0161ca18);
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return param_1;
}

