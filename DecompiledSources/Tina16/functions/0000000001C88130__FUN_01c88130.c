/* Ghidra address: 01c88130 */
/* Ghidra symbol: FUN_01c88130 */


char FUN_01c88130(longlong param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char local_149;
  code *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_130 [256];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_138 = 0;
  local_149 = '\x01';
  FUN_01610c90(local_130);
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x182e) = 1;
  }
  else if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x182e) = 0;
  }
  else if (param_2 == '\x03') {
    *(undefined1 *)(param_1 + 0x182e) = 1;
  }
  uVar2 = (ulonglong)(byte)PTR_DAT_02004010[0x813];
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      if (param_2 == '\0') {
        cVar1 = FUN_0153b1d0(0);
        if (cVar1 == '\0') {
          FUN_01c87d20(param_1);
        }
        else {
          FUN_0153b200(0);
        }
      }
      else if (param_2 == '\x01') {
        FUN_0153b230(1,0);
      }
      else if (param_2 == '\x02') {
        FUN_0153b200(0);
      }
      else if (param_2 == '\x03') {
        FUN_0153b230(1,0);
        cVar1 = FUN_0153b1d0(0);
        if (cVar1 == '\0') {
          FUN_01c87d20(param_1);
        }
        else {
          FUN_0153b200(0);
        }
      }
    }
    else if (uVar2 == 1) {
      if (param_2 == '\0') {
        cVar1 = FUN_0153b2b0(0);
        if (cVar1 == '\0') {
          FUN_01c87d20(param_1);
        }
        else {
          FUN_0153b2e0(0);
        }
      }
      else if (param_2 == '\x01') {
        FUN_0153b310(1,0);
      }
      else if (param_2 == '\x02') {
        FUN_0153b2e0(0);
      }
      else if (param_2 == '\x03') {
        FUN_0153b310(1,0);
        cVar1 = FUN_0153b2b0(0);
        if (cVar1 == '\0') {
          FUN_01c87d20(param_1);
        }
        else {
          FUN_0153b2e0(0);
        }
      }
    }
  }
  else if (uVar2 - 2 < 2) {
    if (param_2 == '\0') {
      local_148 = FUN_01c88b30;
      local_140 = param_1;
      FUN_00f83440(&local_148,100);
      local_148 = FUN_01c88b40;
      local_140 = param_1;
      FUN_00f83440(&local_148,500);
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar3,0x1235,0,0);
    }
    else if (param_2 == '\x01') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0x1236,0,0);
      local_148 = FUN_01c88b30;
      local_140 = param_1;
      FUN_00f834f0(&local_148);
      local_148 = FUN_01c88b40;
      local_140 = param_1;
      FUN_00f834f0(&local_148);
      if (*(int *)PTR_DAT_02003570 != 0) {
        FUN_01c9aa00(param_1);
        *(undefined4 *)PTR_DAT_02003570 = 0;
      }
      if (*(char *)(param_1 + 0x18e8) != '\0') {
        if ((*(longlong *)PTR_DAT_02003610 != 0) &&
           (*(char *)(*(longlong *)PTR_DAT_02003610 + 0x712) == '\0')) {
          FUN_00805200(*(undefined8 *)PTR_DAT_02003610);
          *(undefined8 *)PTR_DAT_02003610 = 0;
        }
        *(undefined1 *)(param_1 + 0x18e8) = 0;
      }
    }
    else if (param_2 == '\x02') {
      if (*(char *)(param_1 + 0x27c1) != '\0') {
        FUN_013410e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0x488));
      }
    }
    else if (param_2 == '\x03') {
      FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"RestartAnalysis()",0,1);
      if (*(char *)(param_1 + 0x27c1) == '\0') {
        uVar3 = FUN_0065b870(param_1);
        thunk_FUN_0413e052(uVar3,0x1235,0,0);
      }
      else {
        uVar3 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar3,0x1236,0,0);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        local_28[0] = 0x1234;
        local_20 = 0;
        local_18 = 0;
        uVar3 = FUN_0065b870(param_1);
        FUN_00f83670(uVar3,local_28);
      }
    }
  }
  else if (uVar2 == 4) {
    if (param_2 == '\0') {
      FUN_015fca00(&local_138,0,*(undefined8 *)(param_1 + 0x27a8));
      FUN_019af590(*(undefined8 *)(param_1 + 0x27a8),local_138);
      FUN_019a10d0(*(undefined8 *)(param_1 + 0x27a8),local_130,local_2c,local_30);
      cVar1 = FUN_019a1830(*(undefined8 *)(param_1 + 0x27a8));
      if ((cVar1 == '\0') || (*PTR_DAT_02004ba0 == '\0')) {
        FUN_01c87d20(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0x27c1) = 1;
        FUN_0153a8e0(0);
        uVar3 = FUN_007fc180(&PTR_FUN_00f83b90,1,*(undefined8 *)PTR_DAT_02004030);
        *(undefined8 *)PTR_DAT_020019c8 = uVar3;
        uVar3 = FUN_0065b870(param_1);
        *(undefined8 *)(*(longlong *)PTR_DAT_020019c8 + 0xd70) = uVar3;
        local_140 = *(longlong *)PTR_DAT_020019c8;
        local_148 = FUN_00f847d0;
        FUN_00f83440(&local_148,100);
        local_148 = FUN_01c88e70;
        local_140 = param_1;
        FUN_00f83440(&local_148,500);
        *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5f) = 1;
        FUN_019ad890(*(undefined8 *)(param_1 + 0x27a8),0);
        cVar1 = FUN_01c9a030(param_1);
        if (cVar1 == '\0') {
          *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd58) = 0;
          FUN_01c87d20(param_1);
        }
      }
    }
    else if (param_2 == '\x01') {
      local_149 = FUN_01c9ae20(param_1);
      if (local_149 == '\0') {
        *(undefined1 *)(param_1 + 0x182e) = 1;
      }
      else {
        cVar1 = FUN_019a1830(*(undefined8 *)(param_1 + 0x27a8));
        if ((cVar1 != '\0') && (*PTR_DAT_02004ba0 != '\0')) {
          FUN_0153af00(0,0);
        }
      }
    }
    else if (param_2 == '\x02') {
      FUN_00f85450(*(undefined8 *)(*(longlong *)PTR_DAT_020019c8 + 0xd68),
                   *(undefined8 *)(*(longlong *)PTR_DAT_020019c8 + 0xd60),
                   *(undefined4 *)(*(longlong *)PTR_DAT_020019c8 + 0xd28),
                   *(undefined8 *)(*(longlong *)PTR_DAT_020019c8 + 0xd48));
    }
    else if (param_2 == '\x03') {
      FUN_01c87d20(param_1);
    }
  }
  else if (uVar2 == 6) {
    if (param_2 == '\0') {
      FUN_01c88020(param_1);
      FUN_0153bc10(1,0,0,0);
    }
    else if (param_2 == '\x01') {
      FUN_0153b340(0);
    }
  }
  FUN_01610cc0(local_130);
  FUN_00414480(&local_138);
  return local_149;
}

