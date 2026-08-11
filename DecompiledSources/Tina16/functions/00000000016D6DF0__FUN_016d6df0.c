/* Ghidra address: 016d6df0 */
/* Ghidra symbol: FUN_016d6df0 */


void FUN_016d6df0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  int iVar1;
  undefined8 local_res10 [3];
  code *local_58;
  undefined8 local_50;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  wchar_t *local_20;
  undefined8 local_18;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(local_res10,*(undefined8 *)PTR_DAT_020030c8,L"\\temp.wav");
  local_2c = 0;
  local_20 = L"waveaudio";
  local_18 = FUN_00416740(local_res10[0]);
  iVar1 = thunk_FUN_0418b35e(0,0x803,0x2200,&local_2c);
  if (iVar1 == 0) {
    DAT_0210fdc8 = local_24;
    local_3c = param_1;
    local_34 = FUN_0040c840(param_3 * 1000.0);
    local_30 = FUN_0040c840(param_4 * 1000.0);
    local_50 = *(undefined8 *)PTR_DAT_02001e00;
    local_58 = FUN_01a88bf0;
    FUN_00f83440(&local_58,200);
    iVar1 = thunk_FUN_0418b35e(DAT_0210fdc8,0x806,0xd,&local_3c);
    if (iVar1 != 0) {
      thunk_FUN_0418b35e(DAT_0210fdc8,0x804,0,0);
    }
  }
  FUN_00414480(local_res10);
  return;
}

