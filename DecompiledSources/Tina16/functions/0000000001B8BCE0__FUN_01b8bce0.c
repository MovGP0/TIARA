/* Ghidra address: 01b8bce0 */
/* Ghidra symbol: FUN_01b8bce0 */


void FUN_01b8bce0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_70 = auStack_f8;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_60[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  cVar1 = FUN_01a24a30();
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"LTSpice is not installed!");
    FUN_004134c0(uVar2);
  }
  local_1c[0] = 0xffffffff;
  local_50 = 0;
  *local_res20 = 0;
  local_30 = (longlong *)0x0;
  *param_5 = 0;
  local_d8 = L"*.asy";
  FUN_00416cd0(&local_78,3,*(undefined8 *)(param_1 + 0x360),L"sym\\");
  local_30 = (longlong *)FUN_01603790(local_78,0x20);
  FUN_01b83130(&local_80,local_res10);
  local_d8 = (wchar_t *)local_1c;
  cVar1 = FUN_01b8b6e0(param_1,local_80,L".asy",local_30);
  if (cVar1 == '\0') {
    local_98 = local_res10;
    local_90 = 0x11;
    FUN_00442f70(&local_88,L"Symbol for %s not found",&local_98,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_88);
    FUN_004134c0(uVar2);
  }
  (**(code **)(*local_30 + 0x18))(local_30,&local_38,local_1c[0]);
  local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffffffffff00);
  local_50 = FUN_01a25030(&DAT_01a245a0,1,*(undefined8 *)(param_1 + 0x10),local_38);
  uVar2 = FUN_01a25a40(local_50,local_38);
  *local_res20 = uVar2;
  FUN_00410f20(local_30);
  local_30 = (longlong *)0x0;
  cVar1 = FUN_01b8b960(auStack_f8,L".lib");
  if (cVar1 == '\0') {
    cVar1 = FUN_01b8b960(auStack_f8,L".sub");
    if (cVar1 == '\0') {
      cVar1 = FUN_01b8bb50(auStack_f8);
      if (cVar1 == '\0') {
        local_98 = local_res10;
        local_90 = 0x11;
        FUN_00442f70(&local_a0,L"Model for %s is not found",&local_98,0);
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_a0);
        FUN_004134c0(uVar2);
      }
      else {
        *param_5 = 1;
      }
    }
  }
  FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x398),L"\\temp.lib");
  (**(code **)(*local_res18 + 0x100))(local_res18,local_38);
  local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,1);
  FUN_00ee5290(local_38,local_38,1,0);
  if (local_50 != 0) {
    FUN_00410f20(local_50);
  }
  if (local_30 != (longlong *)0x0) {
    FUN_00410f20(local_30);
  }
  FUN_00414480(&local_a0);
  FUN_00414560(&local_88,3);
  FUN_00414480(local_60);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res10);
  return;
}

