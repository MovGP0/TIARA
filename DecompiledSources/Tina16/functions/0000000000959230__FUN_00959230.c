/* Ghidra address: 00959230 */
/* Ghidra symbol: FUN_00959230 */


undefined1 FUN_00959230(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 *local_10;
  
  local_20 = auStack_b8;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (param_2 < 0xa0) {
      bVar4 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)param_2 >> 3] >> (param_2 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    local_11 = !bVar4;
  }
  else {
    local_98 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    local_88 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    local_70 = 0xffffffffffffffff;
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    local_50 = 0;
    local_38 = 0;
    local_30 = 0;
    local_48 = param_3;
    local_40 = param_4;
    local_10 = (undefined8 *)FUN_0096e0b0(&PTR_FUN_009102b0,1,param_2,0xffffffffffffffff);
    lVar2 = FUN_00958690(param_1);
    if (lVar2 == 0) {
      cVar1 = (**(code **)*local_10)(local_10);
      if (cVar1 == '\x02') {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      plVar3 = (longlong *)FUN_00958690(param_1);
      local_11 = (**(code **)(*plVar3 + 0xf0))(plVar3,param_1,local_10);
    }
    FUN_00410f20(local_10);
  }
  return local_11;
}

