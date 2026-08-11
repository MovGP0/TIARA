/* Ghidra address: 01d7bfb0 */
/* Ghidra symbol: FUN_01d7bfb0 */


undefined4 FUN_01d7bfb0(undefined8 param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 *local_450;
  undefined1 local_448;
  undefined8 local_440;
  undefined1 local_434 [522];
  undefined1 local_22a [522];
  longlong *local_20 [2];
  
  local_458 = 0;
  local_440 = 0;
  local_20[0] = (longlong *)0x0;
  if ((param_2 == 1) && (param_4 != 0)) {
    thunk_FUN_041b2403(param_1,0x467,1,param_4);
    local_45c = 0;
  }
  else if ((param_2 == 4) && (param_3 != (undefined8 *)0x0)) {
    local_448 = 10;
    local_450 = param_3;
    FUN_00442f70(&local_440,L"Invalid folder: %s",&local_450,0);
    FUN_0072d730(local_440,0xffffffff,0xffffffff);
    local_45c = 1;
  }
  else if ((param_2 == 2) && (param_3 != (undefined8 *)0x0)) {
    thunk_FUN_0413df99(param_3,local_22a);
    iVar1 = thunk_FUN_041b7910(local_22a,&LAB_01d7c206,0,local_434);
    if (0 < iVar1) {
      FUN_00416830(&local_458,local_434,0x105);
      FUN_004412f0(local_458);
    }
    thunk_FUN_041b2403(param_1,0x465,0,(longlong)iVar1);
    local_45c = 0;
  }
  else if ((param_2 == 5) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = FUN_00410e60(&LAB_01d7bab0,1);
    uVar3 = FUN_0041b800(local_20);
    iVar1 = (**(code **)*param_3)(param_3,PTR_DAT_020028f8,uVar3);
    if (iVar1 == 0) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + 0x10;
      }
      (**(code **)(*local_20[0] + 0x18))(local_20[0],lVar2);
    }
    local_45c = 0;
  }
  else {
    local_45c = 0;
  }
  FUN_00414480(&local_458);
  FUN_00414480(&local_440);
  FUN_0041b800(local_20);
  return local_45c;
}

