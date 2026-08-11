/* Ghidra address: 01c4aec0 */
/* Ghidra symbol: FUN_01c4aec0 */


void FUN_01c4aec0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  undefined1 local_22e [522];
  int local_24;
  undefined8 local_20;
  
  local_240 = auStack_2c8;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_268 = 0;
  local_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  local_20 = 0;
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_00416ba0(&local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\");
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4ac);
  if (iVar3 < 1) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x90))(*(longlong **)(param_1 + 0x798));
  }
  else {
    FUN_0084e320(*(longlong *)(param_1 + 0x6b0),&local_248,0,iVar3);
    FUN_00415dd0(&local_250,local_248,0);
    FUN_00d309d0(local_250,*(undefined8 *)(param_1 + 0x798),&DAT_01c4b284);
    local_24 = 0;
    while (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x28))
                             (*(longlong **)(param_1 + 0x798)), local_24 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                (*(longlong **)(param_1 + 0x798),&local_260,local_24);
      FUN_00416ba0(&local_258,local_20,local_260);
      cVar2 = FUN_00440a20(local_258,1);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x98))
                  (*(longlong **)(param_1 + 0x798),local_24);
        FUN_0041ddd0(&local_268,&LAB_01c4aea8);
        iVar3 = FUN_0072d440(local_268,2,3,0);
        if (iVar3 == 6) {
          FUN_00442620(local_22e,L"https://order.tina.com/download/Converters%20Add-on.exe");
          uVar4 = FUN_0065b870(param_1);
          local_2a8 = 0;
          local_2a0 = 3;
          thunk_FUN_0419adcc(uVar4,L"open",local_22e);
        }
        else {
          *(undefined4 *)(param_1 + 0x508) = 0;
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x798);
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_278);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                  (*(longlong **)(param_1 + 0x798),&local_280,local_24);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                  (*(longlong **)(param_1 + 0x798),&local_290,local_24);
        FUN_00416ba0(&local_288,local_20,local_290);
        local_2a8 = CONCAT71(local_2a8._1_7_,1);
        FUN_00450070(&local_270,local_278,local_280,local_288);
        (**(code **)(*plVar1 + 0x60))(plVar1,local_270);
        local_24 = local_24 + 1;
      }
    }
  }
  FUN_00414560(&local_290,8);
  FUN_004144d0(&local_250);
  FUN_00414480(&local_248);
  FUN_00414480(&local_20);
  return;
}

