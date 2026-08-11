/* Ghidra address: 00de5f80 */
/* Ghidra symbol: FUN_00de5f80 */


void FUN_00de5f80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,ulonglong param_6)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar8;
  ulonglong uVar7;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  wchar_t *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_78 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(param_5);
  uVar4 = FUN_004bea50(*(undefined8 *)(param_1 + 0x60));
  bVar1 = (byte)uVar4;
  if (0x1f < bVar1 || (1 << (bVar1 & 0x1f) & 0x3fffffU) == 0) {
    local_68 = local_res10;
    local_60 = 0x11;
    local_58 = *(undefined8 *)PTR_PTR_02002ae8;
    local_50 = 0x11;
    local_48 = param_5;
    local_40 = 0x11;
    uVar2 = FUN_004bea50(*(undefined8 *)(param_1 + 0x60));
    FUN_0043f750(&local_70,uVar2);
    local_38 = local_70;
    local_30 = 0x11;
    uVar5 = FUN_0044d8d0(&PTR_FUN_00471c70,1,PTR_PTR_02005138,&local_68,CONCAT44(uVar8,3));
    FUN_004134c0(uVar5);
  }
  uVar7 = param_6;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))
            (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),param_5,uVar4,param_6);
  if (bVar1 == 1) {
    FUN_004c23c0(*(undefined8 *)(param_1 + 0x60));
    while (cVar3 = FUN_004be290(*(undefined8 *)(param_1 + 0x60)), cVar3 == '\0') {
      local_98 = local_res10;
      local_90 = 0x11;
      local_88 = L"vaList";
      local_80 = 0x11;
      FUN_00442f70(&local_78,L"%s.%s",&local_98,1);
      local_98 = local_res18;
      local_90 = 0x11;
      local_88 = L"vaList";
      local_80 = 0x11;
      FUN_00442f70(&local_a0,L"%s.%s",&local_98,1);
      FUN_00de5f80(param_1,local_78,local_a0,0,param_5,param_6);
    }
    FUN_004be030(*(undefined8 *)(param_1 + 0x60),0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),param_6);
  }
  else if (bVar1 == 0xe) {
    local_98 = local_res10;
    local_90 = 0x11;
    local_88 = L"vaCollection";
    local_80 = 0x11;
    FUN_00442f70(&local_a8,L"%s.%s",&local_98,1);
    FUN_00414b50(&local_res10,local_a8);
    local_98 = local_res18;
    local_90 = 0x11;
    local_88 = L"vaCollection";
    local_80 = 0x11;
    FUN_00442f70(&local_b0,L"%s.%s",&local_98,1);
    FUN_00414b50(&local_res18,local_b0);
    FUN_004c23c0(*(undefined8 *)(param_1 + 0x60));
    while (cVar3 = FUN_004be290(*(undefined8 *)(param_1 + 0x60)), cVar3 == '\0') {
      uVar5 = FUN_004bea50(*(undefined8 *)(param_1 + 0x60));
      if ((byte)uVar5 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x1cU) !=
                0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_004c06c0(*(undefined8 *)(param_1 + 0x60));
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x80) + 8))
                (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),local_res10,
                 local_res18,uVar7,param_6,&local_20);
      FUN_004be030(*(undefined8 *)(param_1 + 0x60),1);
      while (cVar3 = FUN_004be290(*(undefined8 *)(param_1 + 0x60)), cVar3 == '\0') {
        FUN_004c1d80(*(undefined8 *)(param_1 + 0x60),&local_b8);
        uVar7 = local_b8;
        FUN_00de5f80(param_1,local_res10,local_res18,0,local_b8,local_20);
      }
      FUN_004be030(*(undefined8 *)(param_1 + 0x60),0);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
                (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),local_20);
    }
    FUN_004be030(*(undefined8 *)(param_1 + 0x60),0);
  }
  FUN_00414560(&local_b8,4);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_res10,2);
  FUN_00414480(&param_5);
  return;
}

