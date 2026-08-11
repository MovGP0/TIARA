/* Ghidra address: 006e9640 */
/* Ghidra symbol: FUN_006e9640 */


void FUN_006e9640(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  int local_3c;
  int local_38;
  longlong *local_34;
  int local_2c;
  code *local_28;
  longlong local_20;
  
  local_70 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  (**(code **)(*(longlong *)param_1[7] + 0x260))((longlong *)param_1[7],0x7ffffff0);
  local_res18 = param_3;
  if (param_3 == 0) {
    plVar2 = (longlong *)FUN_0045adf0();
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_78);
    cVar1 = FUN_006e94c0(param_2,local_78);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_00458e40();
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_80);
      cVar1 = FUN_006e94c0(param_2,local_80);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)FUN_0045ae90();
        (**(code **)(*plVar2 + 0x50))(plVar2,&local_88);
        cVar1 = FUN_006e94c0(param_2,local_88);
        if (cVar1 == '\0') {
          local_res18 = FUN_00458d50();
        }
        else {
          local_res18 = FUN_0045ae90();
        }
      }
      else {
        local_res18 = FUN_00458e40();
      }
    }
    else {
      local_res18 = FUN_0045adf0();
    }
  }
  local_20 = param_1[9];
  local_58 = param_2;
  if (local_20 == 0) {
    local_20 = (*(code *)**(undefined8 **)(param_1[7] + 0x538))
                         (*(undefined8 **)(param_1[7] + 0x538),1);
  }
  local_60 = local_20;
  local_50 = (undefined1)param_1[8];
  local_48 = local_res18;
  local_34 = &local_60;
  local_28 = FUN_006e90f0;
  local_2c = 0;
  local_38 = FUN_004b6da0(param_2);
  if ((char)param_1[8] == '\0') {
    local_3c = 2;
  }
  else {
    local_3c = 0x11;
  }
  uVar3 = FUN_0065b870(param_1[7]);
  local_a8 = 1;
  FUN_004701b0(uVar3,0x449,(longlong)local_3c,&local_34);
  if ((local_3c == 2) && (local_2c != 0)) {
    FUN_004b6dc0(param_2,(longlong)local_38);
    if ((char)param_1[8] == '\0') {
      local_3c = 0x11;
    }
    else {
      local_3c = 2;
    }
    local_50 = (char)param_1[8] == '\0';
    uVar3 = FUN_0065b870(param_1[7]);
    thunk_FUN_041b2403(uVar3,0x449,(longlong)local_3c,&local_34);
    if (local_2c != 0) {
      FUN_0041ddd0(&local_90,PTR_PTR_02004200);
      uVar3 = FUN_0044d490(&PTR_FUN_00472738,1,local_90);
      FUN_004134c0(uVar3);
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1,local_res18);
  if (param_1[9] == 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_90);
  FUN_00417840(&local_88,&DAT_00406578,3);
  return;
}

