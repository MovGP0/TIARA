/* Ghidra address: 01978dc0 */
/* Ghidra symbol: FUN_01978dc0 */


undefined8
FUN_01978dc0(longlong param_1,undefined8 param_2,wchar_t *param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 *local_40;
  char local_32;
  char local_31;
  longlong *local_30;
  int local_24;
  
  local_40 = auStack_118;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  FUN_00414480(param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x110) = param_5;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x118) == 0) {
LAB_01978ef2:
    local_32 = '\0';
  }
  else {
    FUN_0184cda0(*(longlong *)(param_1 + 0x10),&local_48);
    if (local_48 == 0) goto LAB_01978ef2;
    local_32 = '\x01';
  }
  if (local_32 == '\0') {
    local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                         (*(longlong **)(param_1 + 8),param_3);
  }
  else {
    FUN_0184cda0(*(undefined8 *)(param_1 + 0x10),&local_58);
    local_f8 = param_3;
    FUN_00416cd0(&local_50,3,local_58,&DAT_01979528);
    local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                         (*(longlong **)(param_1 + 8),local_50);
  }
  if (local_24 == -1) {
    local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    FUN_00414ad0(*(longlong *)(param_1 + 0x18) + 0x130,*(undefined8 *)(param_1 + 0x20));
    iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x20),L"PascalScript");
    if (iVar2 == 0) {
      FUN_0043f750(&local_68,local_24);
      local_f8 = L": Variant; begin ";
      local_f0 = L"Result := ";
      local_e0 = L" end; begin end.";
      local_e8 = param_3;
      FUN_00416cd0(&local_60,6,L"function fr3f",local_68);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
      (**(code **)(*plVar1 + 0x60))(plVar1,local_60);
    }
    else {
      iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x20),L"C++Script");
      if (iVar2 == 0) {
        FUN_0043f750(&local_78,local_24);
        local_f8 = L"() { ";
        local_f0 = L"return ";
        local_e0 = L"; } {}";
        local_e8 = param_3;
        FUN_00416cd0(&local_70,6,L"Variant fr3f",local_78);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
        (**(code **)(*plVar1 + 0x60))(plVar1,local_70);
      }
      else {
        iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x20),L"BasicScript");
        if (iVar2 == 0) {
          FUN_0043f750(&local_88,local_24);
          local_f8 = L"\r\n";
          local_f0 = L"return ";
          local_e0 = L"\r\n";
          local_d8 = L"end function";
          local_e8 = param_3;
          FUN_00416cd0(&local_80,7,L"function fr3f",local_88);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
          (**(code **)(*plVar1 + 0x60))(plVar1,local_80);
        }
        else {
          iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x20),L"JScript");
          if (iVar2 == 0) {
            FUN_0043f750(&local_98,local_24);
            local_f8 = L"() { ";
            local_f0 = L"return ";
            local_e0 = L"; }";
            local_e8 = param_3;
            FUN_00416cd0(&local_90,6,L"function fr3f",local_98);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
            (**(code **)(*plVar1 + 0x60))(plVar1,local_90);
          }
        }
      }
    }
    local_31 = FUN_0184ce90(*(undefined8 *)(param_1 + 0x18));
    FUN_0043f750(&local_a8,local_24);
    FUN_00416ba0(&local_a0,L"fr3f",local_a8);
    local_30 = (longlong *)FUN_0184cde0(*(undefined8 *)(param_1 + 0x18),local_a0);
    if (local_31 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00410f20(local_30);
        FUN_0184cb10(*(undefined8 *)(param_1 + 0x18),local_30);
      }
      uVar3 = FUN_0180bfb0();
      FUN_01809b60(uVar3,&local_b0,L"clExprError");
      local_f0 = L"\': ";
      local_e8 = *(wchar_t **)(*(longlong *)(param_1 + 0x18) + 0x88);
      local_f8 = param_3;
      FUN_00416cd0(param_4,5,local_b0,&DAT_01979770);
      FUN_0046f180(param_2);
      goto LAB_0197949c;
    }
    if (local_32 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                (*(longlong **)(param_1 + 8),param_3,local_30);
    }
    else {
      FUN_0184cda0(*(undefined8 *)(param_1 + 0x10),&local_c0);
      local_f8 = param_3;
      FUN_00416cd0(&local_b8,3,local_c0,&DAT_01979528);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                (*(longlong **)(param_1 + 8),local_b8,local_30);
    }
  }
  else {
    local_30 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                         (*(longlong **)(param_1 + 8),local_24);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 200) = 1;
  (**(code **)(*local_30 + 0x10))(local_30,param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 200) = 0;
LAB_0197949c:
  FUN_00414560(&local_c0,0x10);
  return param_2;
}

