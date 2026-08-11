/* Ghidra address: 00ee5d40 */
/* Ghidra symbol: FUN_00ee5d40 */


void FUN_00ee5d40(undefined8 param_1,longlong *param_2,byte *param_3,longlong param_4,
                 undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong local_res20;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined1 local_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined1 *local_150;
  int local_13c;
  longlong local_138;
  byte local_130 [256];
  longlong local_30;
  
  local_150 = auStack_2c8;
  local_270 = 0;
  local_278 = 0;
  local_260 = 0;
  local_268 = 0;
  local_158 = 0;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_130;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res20 = param_4;
  FUN_00414630(param_4);
  *PTR_DAT_02002ce0 = 0;
  local_30 = FUN_016b97f0(&DAT_016b45f0,1,1);
  lVar3 = *(longlong *)(local_30 + 0x10);
  *(undefined1 *)(lVar3 + 0x231) = 0;
  FUN_016a36d0(lVar3,0);
  FUN_016cff60(local_30,1,0,0);
  FUN_016bb740(local_30,param_1);
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 1;
  local_280 = 0;
  FUN_00ee2730(*(undefined8 *)(local_30 + 8),0,0,0);
  if (local_res20 != 0) {
    FUN_00416880(&local_158,local_res20);
    cVar1 = FUN_00440a20(local_158,1);
    if (cVar1 != '\0') {
      FUN_00415560(local_258,local_res20,0xff);
      FUN_016c41d0(local_30,local_258);
    }
  }
  if (param_2 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x28))();
    local_13c = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004b3cf0(param_2,&local_268,local_13c);
        FUN_0043e130(&local_260,local_268);
        FUN_00416910(local_258,local_260,0xff);
        FUN_016c36d0(local_30,&local_138,local_258,1);
        if (local_138 != 0) {
          FUN_004b5390(param_2,&local_278,local_13c);
          FUN_0043e130(&local_270,local_278);
          FUN_00415dd0(local_138 + 0x10,local_270,0);
          *(undefined8 *)(local_138 + 0x28) = 0;
        }
        local_13c = local_13c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_016cbaf0(local_130,param_5,local_30,param_6);
  FUN_00410f20(local_30);
  FUN_00414560(&local_278,4);
  FUN_00414480(&local_158);
  FUN_004144d0(&local_res20);
  return;
}

