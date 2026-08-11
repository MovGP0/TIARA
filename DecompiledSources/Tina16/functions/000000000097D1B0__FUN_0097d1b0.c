/* Ghidra address: 0097d1b0 */
/* Ghidra symbol: FUN_0097d1b0 */


void FUN_0097d1b0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  char local_11;
  undefined8 *local_10;
  
  local_20 = auStack_58;
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (param_2 < 0xa0) {
      bVar4 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)param_2 >> 3] >> (param_2 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Signal Processing Exception");
      FUN_004134c0(uVar3);
    }
  }
  else {
    local_30 = param_5;
    local_38 = param_4;
    local_20 = auStack_58;
    local_10 = (undefined8 *)FUN_0096e300(&PTR_FUN_009102b0,1,param_2,param_3);
    plVar1 = *(longlong **)(param_1 + 0x78);
    if (plVar1 == (longlong *)0x0) {
      cVar2 = (**(code **)*local_10)(local_10);
      if (cVar2 == '\x02') {
        local_11 = '\0';
      }
      else {
        local_11 = '\x01';
      }
    }
    else {
      local_11 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,local_10);
    }
    if (local_11 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Signal Processing Exception");
      FUN_004134c0(uVar3);
    }
    FUN_00410f20(local_10);
  }
  return;
}

