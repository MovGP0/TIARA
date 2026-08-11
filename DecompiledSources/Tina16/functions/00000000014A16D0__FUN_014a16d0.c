/* Ghidra address: 014a16d0 */
/* Ghidra symbol: FUN_014a16d0 */


undefined1
FUN_014a16d0(undefined8 param_1,undefined8 param_2,byte param_3,char param_4,undefined1 param_5,
            longlong param_6)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_459;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440 [2];
  undefined1 local_430 [522];
  undefined1 local_226 [522];
  undefined1 local_1c [12];
  
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_6);
  if ((param_4 == '\0') || (7 < param_3 || (1 << (param_3 & 0x1f) & 0x39U) == 0)) {
    uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0xff00);
  }
  else {
    if (param_6 == 0) {
      FUN_00416ba0(local_440,*(undefined8 *)PTR_DAT_020030c8,&DAT_014a193c);
      FUN_00442620(local_226,local_440[0]);
    }
    else {
      FUN_0044f850(&local_448,param_6);
      FUN_00442620(local_226,local_448);
    }
    thunk_FUN_041b7910(local_226,&LAB_014a1940,0,local_430);
    FUN_00416830(&local_450,local_430,0x105);
    uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_450,0xff00);
  }
  uVar1 = FUN_014a1990(param_1,uVar1,local_res10[0],param_3,param_4,param_5,0,local_1c);
  if ((param_4 != '\0') && (param_3 < 8 && (1 << (param_3 & 0x1f) & 0x39U) != 0)) {
    FUN_00416830(&local_458,local_430,0x105);
    FUN_004412f0(local_458);
  }
  FUN_00410f20(uVar1);
  FUN_00414560(&local_458,4);
  FUN_00414480(local_res10);
  FUN_00414480(&param_6);
  return local_459;
}

