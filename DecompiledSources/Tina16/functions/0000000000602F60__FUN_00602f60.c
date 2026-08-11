/* Ghidra address: 00602f60 */
/* Ghidra symbol: FUN_00602f60 */


void FUN_00602f60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_30;
  undefined8 *local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_d8;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = (undefined8 *)0x0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_50 = 0;
  local_48 = 0;
  local_10 = FUN_00453cc0(&DAT_00438748,1);
  local_18 = FUN_00453cc0(&DAT_00438748,1);
  local_1c = 0;
  local_20 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < local_20) {
    do {
      local_30 = (undefined8 *)FUN_004aeac0(param_1,local_20);
      local_28 = local_30;
      cVar1 = FUN_00411580(*local_30,param_2);
      if ((cVar1 != '\0') && (local_30[1] != 0)) {
        if (local_1c != 0) {
          FUN_00453560(local_10,0x7c);
          FUN_00453560(local_18,0x3b);
        }
        if ((local_30[2] == 0) && (*(int *)(local_30 + 3) != 0)) {
          FUN_004401f0(&local_48,(longlong)*(int *)(local_30 + 3));
          FUN_00414ad0(local_30 + 2,local_48);
        }
        local_70 = local_30[2];
        local_68 = 0x11;
        local_60 = local_30[1];
        local_58 = 0x11;
        FUN_00442f70(&local_50,L"%s (*.%s)|*.%1:s",&local_70,1);
        FUN_00453060(local_10,local_50);
        local_88 = local_30[1];
        local_80 = 0x11;
        FUN_00442f70(&local_78,L"*.%s",&local_88,0);
        FUN_00453060(local_18,local_78);
        local_1c = local_1c + 1;
      }
      local_20 = local_20 + -1;
    } while (local_20 != -1);
  }
  if (1 < local_1c) {
    FUN_0041ddd0(&local_98,PTR_PTR_02004c90);
    local_70 = local_98;
    local_68 = 0x11;
    FUN_00455ae0(local_18,&local_a0,1);
    local_60 = local_a0;
    local_58 = 0x11;
    FUN_00442f70(&local_90,L"%s (%s)|%1:s|",&local_70,1);
    FUN_004545b0(local_10,0,local_90);
  }
  FUN_00455ae0(local_10,&local_a8,1);
  FUN_00414ad0(param_3,local_a8);
  FUN_00455ae0(local_18,&local_b0,1);
  FUN_00414ad0(param_4,local_b0);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414560(&local_b0,5);
  FUN_00414480(&local_78);
  FUN_00414560(&local_50,2);
  return;
}

