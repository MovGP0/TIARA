/* Ghidra address: 017c47c0 */
/* Ghidra symbol: FUN_017c47c0 */


void FUN_017c47c0(longlong *param_1,char param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  wchar_t *local_80 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = (wchar_t *)0x0;
  local_80[0] = (wchar_t *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar3 = FUN_019a4600();
  *(undefined1 *)(lVar3 + 0x218) = 0;
  if (((*(longlong *)PTR_DAT_02004e40 != 0) && (*(longlong *)PTR_DAT_02001d08 != 0)) &&
     (cVar1 = FUN_017fea70(*(undefined8 *)PTR_DAT_02001d08), cVar1 != '\0')) {
    local_38 = 0;
    local_40 = 0;
    (**(code **)(*param_1 + 0x1f0))(param_1,0,local_2c,&local_30);
    FUN_01995fc0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_2c[0],local_30,
                 &local_38,&local_44);
    if (local_38 != 0) {
      FUN_01cfaa80(local_38,local_80);
      if (local_80[0] == L"Dummy") {
        bVar5 = true;
      }
      else if (local_80[0] == (wchar_t *)0x0) {
        bVar5 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_80[0],L"Dummy");
        bVar5 = iVar2 == 0;
      }
      if (bVar5) {
        local_38 = 0;
      }
    }
    (**(code **)(*param_1 + 0x1f0))(param_1,1,local_2c,&local_30);
    FUN_01995fc0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_2c[0],local_30,
                 &local_40,&local_48);
    if (local_40 != 0) {
      FUN_01cfaa80(local_40,&local_88);
      if (local_88 == L"Dummy") {
        bVar5 = true;
      }
      else if (local_88 == (wchar_t *)0x0) {
        bVar5 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_88,L"Dummy");
        bVar5 = iVar2 == 0;
      }
      if (bVar5) {
        local_40 = 0;
      }
    }
    if ((local_38 == 0) || (local_40 == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      FUN_017ff4f0(local_38,&local_90);
      FUN_0043f750(&local_98,local_44);
      FUN_017ff4f0(local_40,&local_a0);
      FUN_0043f750(&local_a8,local_48);
      FUN_00416cd0(&local_58,7,local_90,&DAT_017c4ee8,local_98,&DAT_017c4ee8,local_a0,&DAT_017c4ee8,
                   local_a8);
      FUN_017ff4f0(local_38,&local_b0);
      FUN_0043f750(&local_b8,local_44);
      FUN_017ff4f0(local_40,&local_c0);
      FUN_0043f750(&local_c8,local_48);
      FUN_00416cd0(&local_60,10,L"LocateWire(",local_58,&DAT_017c4f1c,local_b0,&DAT_017c4f1c,
                   local_b8,&DAT_017c4f1c,local_c0,&DAT_017c4f1c,local_c8);
      iVar2 = FUN_017c2b70();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_4c = FUN_017c2c60(param_1,iVar4);
          FUN_0043f750(&local_d0,(longlong)(short)local_4c);
          FUN_0043f750(&local_d8,(longlong)local_4c._2_2_);
          FUN_00416cd0(&local_60,5,local_60,&DAT_017c4f1c,local_d0,&DAT_017c4f1c,local_d8);
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00416ad0(&local_60,&DAT_017c4f2c);
      puVar6 = &local_68;
      puVar8 = &local_6c;
      FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_e0,local_58,L"LocateWire",puVar6,puVar8,
                   &local_70);
      uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
      uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      iVar2 = FUN_00416db0(local_60,local_e0);
      if (iVar2 != 0) {
        FUN_00415dd0(&local_e8,local_58,0);
        FUN_00415dd0(&local_f0,local_68,0);
        FUN_00415dd0(&local_f8,local_60,0);
        FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_e8,local_f0,local_f8,
                     CONCAT44(uVar7,local_6c),CONCAT44(uVar9,local_70));
        if (param_2 == '\0') {
          (**(code **)(*param_3 + 0x78))(param_3,local_60);
        }
        else {
          FUN_00415dd0(&local_100,local_60,0);
          FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_100,0,1);
        }
      }
    }
    if (bVar5) {
      FUN_019ae040(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),param_1,local_38,local_40
                  );
    }
  }
  FUN_00414590(&local_100,4);
  FUN_00414560(&local_e0,0xd);
  FUN_00414560(&local_68,3);
  return;
}

