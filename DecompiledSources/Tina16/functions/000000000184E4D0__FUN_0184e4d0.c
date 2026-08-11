/* Ghidra address: 0184e4d0 */
/* Ghidra symbol: FUN_0184e4d0 */


undefined8 FUN_0184e4d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  wchar_t *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  local_50 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined1 *)(param_1 + 0x151) = 0;
  FUN_0046f180(param_2);
  local_48 = *(longlong *)(param_1 + 0x118);
  if (local_48 == 0) {
    local_48 = param_1;
  }
  local_30 = FUN_0184c830(&PTR_FUN_0183e740,1,0);
  if (*(char *)(local_48 + 0x120) == '\0') {
    FUN_0184dd80(local_30);
  }
  *(longlong *)(local_30 + 0x110) = local_48;
  *(undefined8 *)(local_30 + 0x100) = *(undefined8 *)(local_48 + 0x100);
  *(undefined8 *)(local_30 + 0x108) = *(undefined8 *)(local_48 + 0x108);
  local_40 = *(undefined8 *)(param_1 + 0xf0);
  uStack_38 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_00414ad0(local_30 + 0x130,*(undefined8 *)(param_1 + 0x130));
  iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x130),L"PascalScript");
  if (iVar2 == 0) {
    local_88 = L" end; begin end.";
    FUN_00416cd0(&local_58,3,L"function fsEvaluateFUNC: Variant; begin Result := ",param_3);
    (**(code **)(**(longlong **)(local_30 + 0xb8) + 0x60))(*(longlong **)(local_30 + 0xb8),local_58)
    ;
  }
  else {
    iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x130),L"C++Script");
    if (iVar2 == 0) {
      local_88 = L"; } {}";
      FUN_00416cd0(&local_60,3,L"Variant fsEvaluateFUNC() { return ",param_3);
      (**(code **)(**(longlong **)(local_30 + 0xb8) + 0x60))
                (*(longlong **)(local_30 + 0xb8),local_60);
    }
    else {
      iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x130),L"BasicScript");
      if (iVar2 == 0) {
        local_88 = L"\r\n";
        local_80 = L"end function";
        FUN_00416cd0(&local_68,4,L"function fsEvaluateFUNC\r\nreturn ",param_3);
        (**(code **)(**(longlong **)(local_30 + 0xb8) + 0x60))
                  (*(longlong **)(local_30 + 0xb8),local_68);
      }
      else {
        iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x130),L"JScript");
        if (iVar2 == 0) {
          local_88 = L"); }";
          FUN_00416cd0(&local_70,3,L"function fsEvaluateFUNC() { return (",param_3);
          (**(code **)(**(longlong **)(local_30 + 0xb8) + 0x60))
                    (*(longlong **)(local_30 + 0xb8),local_70);
        }
      }
    }
  }
  cVar1 = FUN_0184ce90(local_30);
  if (cVar1 == '\0') {
    FUN_00468a10(param_2,*(undefined8 *)(local_30 + 0x88));
    *(undefined1 *)(param_1 + 0x151) = 1;
  }
  else {
    plVar3 = (longlong *)FUN_0184ce20(local_30,L"fsEvaluateFUNC");
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
  }
  FUN_00410f20(local_30);
  *(undefined8 *)(param_1 + 0xf0) = local_40;
  *(undefined8 *)(param_1 + 0xf8) = uStack_38;
  FUN_00414560(&local_70,4);
  return param_2;
}

