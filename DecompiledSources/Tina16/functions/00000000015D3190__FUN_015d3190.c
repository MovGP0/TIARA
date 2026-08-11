/* Ghidra address: 015d3190 */
/* Ghidra symbol: FUN_015d3190 */


void FUN_015d3190(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4,uint param_5,
                 undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_50 [2];
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  longlong local_30;
  char local_21;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  longlong local_18;
  undefined4 local_c;
  
  local_50[0] = 0;
  local_18 = 0;
  if (param_4 == '\0') {
    FUN_015bf0c0(local_50,param_3);
    FUN_015bf370(&local_18,local_50[0],&DAT_015d3654,&DAT_015d3664,1);
    local_21 = (param_5 & 0x10) != 0;
  }
  else {
    FUN_015c14a0(&local_18,param_3,*(undefined8 *)(param_1 + 0x78),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 8),*(undefined8 *)(param_1 + 0x78))
    ;
    local_21 = FUN_015bf150(param_3);
  }
  if (local_18 != 0) {
    if (param_4 == '\0') {
      local_c = FUN_00442310(param_6);
    }
    else {
      local_c = FUN_015bf8b0(param_3);
      if (local_c == -1) {
        FUN_00448ed0();
        local_c = FUN_00442310();
      }
      cVar1 = FUN_015bf1b0(param_3);
      if (cVar1 == '\0' && local_21 == '\0') {
        param_5 = 0x20;
      }
      else {
        param_5 = FUN_015bf640(param_3);
      }
      if (local_21 != '\0') {
        local_3c = 0;
        if (local_18 != 0) {
          local_3c = *(int *)(local_18 + -4);
        }
        if (*(short *)(local_18 + -2 + (longlong)local_3c * 2) != 0x2f) {
          FUN_00416ad0(&local_18,&DAT_015d3664);
        }
      }
    }
    local_1e = local_c._2_2_;
    local_20 = (undefined2)local_c;
    local_40 = 0;
    if (local_18 != 0) {
      local_40 = *(undefined4 *)(local_18 + -4);
    }
    local_1c = local_40;
    local_30 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
    FUN_00414ad0(local_30 + 0x2e,local_18);
    *(undefined1 *)(local_30 + 0x6c) = 1;
    FUN_00414bf0(local_30 + 0x6d,*(undefined8 *)(param_1 + 0x248));
    if (param_4 == '\0') {
      FUN_00414480(local_30 + 0x83);
    }
    else {
      FUN_00414ad0(local_30 + 0x83,param_3);
    }
    if (local_21 == '\0') {
      *(undefined1 *)(local_30 + 0x8d) = *(undefined1 *)(param_1 + 0x244);
    }
    else {
      *(undefined1 *)(local_30 + 0x8d) = 0;
    }
    uVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
    FUN_0040d200(uVar2,0x2e,0);
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
    *(undefined2 *)(lVar3 + 10) = *(undefined2 *)(param_1 + 0x240);
    lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
    *(undefined2 *)(lVar3 + 0x8b) = *(undefined2 *)(param_1 + 0x240);
    local_38 = (undefined4 *)
               FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),param_2);
    if (*(int *)(*(longlong *)(param_1 + 0x238) + 0x84) == 0x6054141) {
      *local_38 = 0x3025c61;
      *(undefined2 *)((longlong)local_38 + 6) = 0x4114;
    }
    else {
      *local_38 = 0x2014b50;
      if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x15) == '\0') {
        *(undefined2 *)((longlong)local_38 + 6) = 0xb14;
      }
      else {
        *(undefined2 *)((longlong)local_38 + 6) = 0x14;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x15) == '\0') {
      *(undefined2 *)(local_38 + 1) = 0xb14;
    }
    else {
      *(undefined2 *)(local_38 + 1) = 0x14;
    }
    if (*(longlong *)(param_1 + 0x248) != 0) {
      *(ushort *)(local_38 + 2) = *(ushort *)(local_38 + 2) | 1;
    }
    *(undefined2 *)(local_38 + 3) = local_20;
    *(undefined2 *)((longlong)local_38 + 0xe) = local_1e;
    local_38[4] = 0xffffffff;
    local_38[5] = 0;
    local_38[6] = 0;
    *(undefined2 *)(local_38 + 7) = (undefined2)local_1c;
    *(uint *)((longlong)local_38 + 0x26) = param_5;
    *(undefined4 *)((longlong)local_38 + 0x2a) = 0;
    if (local_21 != '\0') {
      *(undefined2 *)((longlong)local_38 + 10) = 0;
      local_38[4] = 0;
      *(undefined2 *)(local_38 + 2) = 2;
    }
  }
  FUN_00414480(local_50);
  FUN_00414480(&local_18);
  return;
}

