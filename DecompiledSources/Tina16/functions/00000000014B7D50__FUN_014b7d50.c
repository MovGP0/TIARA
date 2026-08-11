/* Ghidra address: 014b7d50 */
/* Ghidra symbol: FUN_014b7d50 */


undefined1
FUN_014b7d50(char param_1,longlong *param_2,char param_3,char param_4,byte param_5,
            undefined2 param_6,int *param_7)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  byte local_68;
  char local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_40 = auStack_98;
  local_48 = 0;
  local_20 = 0;
  if (param_2 == (longlong *)0x0) {
    local_40 = auStack_98;
    FUN_016fd940(L"<InternalError|GraphGen.Init_Graph>");
    local_11 = 0;
  }
  else {
    cVar1 = FUN_019ac250(param_2);
    if (cVar1 != '\0') {
      *(undefined4 *)(*(longlong *)PTR_DAT_02004e40 + 0x17f0) = 1;
    }
    local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
    if (param_1 != '\x0f') {
      if (param_5 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
      }
      else {
        bVar3 = false;
      }
      if ((((bVar3) && (*PTR_DAT_02002b78 == '\0')) && (*PTR_DAT_02004f10 != '\0')) &&
         (param_4 == '\0')) {
        local_78 = 0;
        local_68 = param_5;
        local_70 = local_30;
        local_60 = param_1;
        local_34 = FUN_019a9ed0(param_2,PTR_DAT_02003e38,*PTR_DAT_02004638,*PTR_DAT_020044c8);
        if ((((local_34 != 0) && (*PTR_DAT_020032a8 == '\0')) ||
            (((local_34 % 100) * 1000 != 0 && (*PTR_DAT_020032a8 != '\0')))) ||
           ((DAT_0210eb20 != 0 && (*PTR_DAT_020032a8 == '\0')))) {
          if (*(longlong *)PTR_DAT_02001e80 == 0) {
            uVar2 = FUN_007fc180(&PTR_FUN_014b6a28,1,*(undefined8 *)PTR_DAT_02004030);
            *(undefined8 *)PTR_DAT_02001e80 = uVar2;
          }
          FUN_008059a0(*(undefined8 *)PTR_DAT_02001e80);
          FUN_0064e1d0(*(undefined8 *)PTR_DAT_02001e80);
          FUN_014b7810(*(undefined8 *)PTR_DAT_02001e80,local_30);
          DAT_0210eb20 = local_34;
        }
      }
    }
    uVar2 = FUN_00410f20(local_30);
    if (param_5 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_5 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined8 *)PTR_DAT_02004208 = 0;
    }
    else {
      uVar2 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02004208 = uVar2;
    }
    uVar2 = (**(code **)(*param_2 + 0x78))(param_2,1,param_1,param_6);
    *param_7 = (int)uVar2;
    if (param_5 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_5 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      local_10 = *(undefined8 *)PTR_DAT_02004208;
      *(undefined8 *)PTR_DAT_02004208 = 0;
      FUN_00410f20(local_10);
    }
    if ((param_1 != '\x0f') && (*param_7 < 0)) {
      if (*param_7 == -1) {
        FUN_00de8980(&local_48,*param_7 + 0x86,*(undefined8 *)(param_2[0x42] + 0x110));
        local_58 = param_2 + 0x1e;
        local_50 = 4;
        uVar2 = FUN_00442f70(&local_20,local_48,&local_58,0);
        local_24 = 0x157e;
      }
      else {
        uVar2 = FUN_00de8980(&local_20,*param_7 + 0x86,*(undefined8 *)(param_2[0x42] + 0x110));
        local_24 = 0;
      }
      if (param_5 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_016fe2a0(local_20,local_24,0);
      }
      else {
        FUN_01b05000(local_20,0);
      }
    }
    if (param_3 == '\0') {
      local_11 = FUN_01995410(param_2);
    }
    else {
      local_11 = FUN_01995420(param_2);
    }
    if (*PTR_DAT_02003f60 != '\0') {
      FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_20);
  return local_11;
}

