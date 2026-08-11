/* Ghidra address: 00985130 */
/* Ghidra symbol: FUN_00985130 */


undefined1 FUN_00985130(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 *local_10;
  
  local_20 = auStack_58;
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (param_2 < 0xa0) {
      bVar3 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)param_2 >> 3] >> (param_2 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    local_11 = !bVar3;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_10 = (undefined8 *)FUN_0096e300(&PTR_FUN_009102b0,1,param_2,0);
    plVar1 = *(longlong **)(param_1 + 0x78);
    if (plVar1 == (longlong *)0x0) {
      cVar2 = (**(code **)*local_10)(local_10);
      if (cVar2 == '\x02') {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,local_10);
    }
    FUN_00410f20(local_10);
  }
  return local_11;
}

