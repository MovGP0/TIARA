/* Ghidra address: 0124aee0 */
/* Ghidra symbol: FUN_0124aee0 */


undefined8 *
FUN_0124aee0(undefined8 *param_1,longlong *param_2,int param_3,longlong *param_4,longlong *param_5,
            longlong param_6,byte param_7,char param_8,char param_9,longlong param_10)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong *local_100;
  longlong local_e8;
  int local_dc;
  undefined8 local_d0;
  undefined8 local_c8;
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
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (wchar_t *)0x0;
  local_48 = 0;
  local_50 = 0;
  FUN_00414610(param_10);
  (**(code **)(*param_4 + 0x100))(param_4,&local_68);
  (**(code **)(*local_68 + 0x100))(local_68,&local_60,L"interactive");
  cVar1 = FUN_0043fc50(local_60,0);
  (**(code **)(*param_5 + 0x100))(param_5,&local_48,L"orientation");
  (**(code **)(*param_4 + 0x148))(param_4,param_1,L"image");
  (**(code **)(*param_5 + 0x98))(param_5,&local_70,*param_1);
  local_51 = 0;
  if (param_6 != 0) {
    local_e8 = FUN_00c410e0(param_6,param_7,0,&local_51);
    if (local_e8 == 0) {
      local_e8 = FUN_00c41110(param_6);
    }
    local_100 = param_2;
    if (param_2 == (longlong *)0x0) {
      local_100 = (longlong *)FUN_012456d0(param_3);
    }
    if (param_8 != '\0') {
      (**(code **)(*(longlong *)*param_1 + 0x108))
                ((longlong *)*param_1,L"name",*(undefined8 *)(param_6 + 0x10));
      (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,&DAT_0124bad0,&DAT_0124bae4)
      ;
      uVar8 = 0;
      FUN_012491f0(local_100,local_e8,param_4,*param_1,0,0,0,0xffffffff);
      cVar2 = (**(code **)(*local_100 + 0x2d8))(local_100);
      if (cVar2 != '\0') {
        FUN_0173d130(local_100[0x33],param_4,*param_1,(ulonglong)(param_7 + 1) % 2,
                     uVar8 & 0xffffffffffffff00);
      }
      local_dc = 1;
      do {
        lVar5 = FUN_00c41090(param_6,param_7,0,local_dc);
        if ((param_7 != 0) && (lVar5 == 0)) {
          lVar5 = FUN_00c41090(param_6,0,0,local_dc);
        }
        if (lVar5 != 0) {
          FUN_0043f750(&local_50,(longlong)(local_dc * -0x5a + 0x168) % 0x168 & 0xffffffff);
          if ((cVar1 == '\0') || (iVar3 = FUN_00416db0(local_48,local_50), iVar3 == 0)) {
            (**(code **)(*param_4 + 0x148))(param_4,&local_30,L"image");
            (**(code **)(*param_5 + 0x98))(param_5,&local_78,local_30);
            (**(code **)(*local_30 + 0x108))(local_30,&DAT_0124bad0,local_50);
            FUN_012491f0(local_100,lVar5,param_4,local_30,0,0,local_dc,0xffffffff);
            (**(code **)(*param_4 + 0x148))(param_4,&local_38,L"label");
            (**(code **)(*local_30 + 0x98))(local_30,&local_80,local_38);
            FUN_00414b50(&local_40,*(undefined8 *)(param_6 + 0x18));
            (**(code **)(*local_38 + 0x108))(local_38,L"prefix",local_40);
            FUN_0043f750(&local_90,(longlong)*(short *)(lVar5 + 0x2c));
            FUN_0043f750(&local_98,(longlong)*(short *)(lVar5 + 0x2e));
            FUN_00416cd0(&local_88,3,local_90,&DAT_0124bb48,local_98);
            (**(code **)(*local_38 + 0x108))(local_38,L"position");
          }
        }
        local_dc = local_dc + 1;
      } while (local_dc != 4);
      uVar6 = FUN_00c41170(param_6,0,1);
      if (((param_9 != '\0') && (param_10 != 0)) &&
         (cVar2 = FUN_012477f0(uVar6,param_10), cVar2 != '\0')) {
        (**(code **)(*param_4 + 0x148))(param_4,&local_30,L"image3d");
        (**(code **)(*param_5 + 0x98))(param_5,&local_a0,local_30);
        (**(code **)(*local_30 + 0x108))(local_30,&DAT_0124bad0,&DAT_0124bae4);
        uVar4 = FUN_012491f0(local_100,uVar6,param_4,local_30,param_10,1,0,0xffffffff);
        local_dc = 1;
        do {
          lVar5 = FUN_00c41170(param_6,local_dc,1);
          if (lVar5 != 0) {
            FUN_0043f750(&local_50,(longlong)(local_dc * -0x5a + 0x168) % 0x168 & 0xffffffff);
            if ((cVar1 == '\0') || (iVar3 = FUN_00416db0(local_48,local_50), iVar3 == 0)) {
              (**(code **)(*param_4 + 0x148))(param_4,&local_30,L"image3d");
              (**(code **)(*param_5 + 0x98))(param_5,&local_a8,local_30);
              (**(code **)(*local_30 + 0x108))(local_30,&DAT_0124bad0,local_50);
              FUN_012491f0(local_100,lVar5,param_4,local_30,param_10,1,local_dc,uVar4);
            }
          }
          local_dc = local_dc + 1;
        } while (local_dc != 4);
        cVar2 = (**(code **)(*local_100 + 0x2d8))(local_100);
        if (cVar2 != '\0') {
          lVar5 = local_100[0x33];
          cVar2 = FUN_004113d0(lVar5,&PTR_FUN_01731160);
          if (cVar2 == '\0' || cVar1 != '\0') {
            FUN_01245720(&local_b0,param_5);
            FUN_0173d130(lVar5,param_4,local_b0,(ulonglong)(param_7 + 1) % 2,1);
          }
        }
        cVar1 = (**(code **)(*local_100 + 0x2d8))(local_100);
        if (((cVar1 != '\0') &&
            (cVar1 = FUN_004113d0(local_100[0x33],&PTR_FUN_01739820), cVar1 == '\0')) &&
           (cVar1 = FUN_004113d0(local_100[0x33],&PTR_FUN_01731160), cVar1 == '\0')) {
          uVar6 = FUN_0173d750(local_100[0x33]);
          FUN_01245950(param_4,param_5,uVar6);
        }
      }
    }
    (**(code **)(*param_4 + 0x148))(param_4,&local_38,L"label");
    (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,&local_b8,local_38);
    FUN_00414b50(&local_40,*(undefined8 *)(param_6 + 0x18));
    if (param_3 == 0x39) {
      if (local_40 == L"Label") {
        bVar7 = true;
      }
      else if (local_40 == (wchar_t *)0x0) {
        bVar7 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_40,L"Label");
        bVar7 = iVar3 == 0;
      }
      if (bVar7) {
        FUN_00414b50(&local_40,&DAT_0124bb8c);
      }
    }
    if (param_3 == 2) {
      FUN_00414480(&local_40);
    }
    (**(code **)(*local_38 + 0x108))(local_38,L"prefix",local_40);
    FUN_0043f750(&local_c8,(longlong)*(short *)(local_e8 + 0x2c));
    FUN_0043f750(&local_d0,(longlong)*(short *)(local_e8 + 0x2e));
    FUN_00416cd0(&local_c0,3,local_c8,&DAT_0124bb48,local_d0);
    (**(code **)(*local_38 + 0x108))(local_38,L"position",local_c0);
    if (param_2 == (longlong *)0x0) {
      uVar6 = (**(code **)*local_100)(local_100);
      FUN_00418590(uVar6,&DAT_01cf1390);
    }
  }
  FUN_00414560(&local_d0,3);
  FUN_0041b800(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_00417840(&local_a8,&DAT_00b9f8e0,2);
  FUN_00414560(&local_98,3);
  FUN_00417840(&local_80,&DAT_00b9f8e0,3);
  FUN_0041b800(&local_68);
  FUN_00414480(&local_60);
  FUN_00414560(&local_50,3);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_00414480(&param_10);
  return param_1;
}

