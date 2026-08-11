/* Ghidra address: 01c20280 */
/* Ghidra symbol: FUN_01c20280 */


void FUN_01c20280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                 undefined2 *param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_70 = auStack_118;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  FUN_00461840(&local_30,*(undefined8 *)(param_7 + 8));
  cVar1 = FUN_0046ca60(&local_30);
  if (cVar1 != '\0') {
    iVar2 = FUN_0046c9e0(&local_30,1);
    iVar3 = FUN_0046c9b0(&local_30,1);
    FUN_004169f0(&local_48,(iVar2 - iVar3) + 1);
    local_50 = FUN_0046ca10(&local_30);
    local_60 = FUN_00414de0(&local_48);
    local_54 = 0;
    if (local_48 != 0) {
      local_54 = *(int *)(local_48 + -4);
    }
    FUN_00409a70(local_50,local_60,(longlong)local_54);
    FUN_0046ca40(&local_30);
  }
  if (*(char *)(param_1 + 0x719) == '\0') {
    *(undefined1 *)(param_1 + 0x718) = 0;
    uVar4 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x490),0);
    FUN_00468b40(&local_88,L"Downloading ");
    FUN_0046f1c0(&local_88,param_4);
    FUN_00468b40(&local_a0,&DAT_01c20790);
    FUN_0046f1c0(&local_88,&local_a0);
    FUN_00467e90(&local_a8,&local_88);
    FUN_006d85c0(uVar4,local_a8);
    FUN_00467e90(&local_b0,param_4);
    cVar1 = FUN_01c1e500(param_1,local_b0);
    if (cVar1 == '\0') {
      FUN_00467e90(&local_b8,param_4);
      cVar1 = FUN_01c1ede0(param_1,local_b8,&local_38);
      if (cVar1 != '\0') {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_d0,&LAB_01c1de48);
        FUN_00b8e650(uVar4,&local_c8,L"BrowserWin.OpenContentTxt",local_d0);
        local_e0 = local_38;
        local_d8 = 0x11;
        FUN_00442f70(&local_c0,local_c8,&local_e0,0);
        iVar2 = FUN_0072d440(local_c0,3,3,0);
        if (iVar2 == 6) {
          FUN_00467e90(&local_e8,param_4);
          FUN_01c1f390(param_1,local_e8,local_38);
          FUN_01c1f360(param_1,&local_f0);
          FUN_00416ad0(&local_f0,local_38);
          local_3c = FUN_01c1f4d0(param_1,local_f0,*(undefined8 *)(param_1 + 0x728));
          if (local_3c == 1) {
            *(undefined4 *)(param_1 + 0x508) = 1;
          }
        }
        *param_9 = 0xffff;
      }
    }
    else {
      *param_9 = 0xffff;
    }
  }
  else {
    *param_9 = 0xffff;
    *(undefined1 *)(param_1 + 0x719) = 0;
  }
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_d0,6);
  FUN_00417840(&local_a0,&DAT_004013f0,2);
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  FUN_00460ba0(&local_30);
  return;
}

