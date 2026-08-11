/* Ghidra address: 0097a190 */
/* Ghidra symbol: FUN_0097a190 */


void FUN_0097a190(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffff98;
  longlong lVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar8;
  undefined8 in_stack_ffffffffffffffa0;
  uint7 uVar10;
  ulonglong uVar9;
  wchar_t *local_48;
  undefined8 local_40;
  undefined *local_38;
  wchar_t *local_30 [2];
  undefined8 local_20 [2];
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x12] == 0) {
    iVar2 = FUN_00416420(*(undefined8 *)(param_2 + 0x88),0);
    if (iVar2 == 0) {
      FUN_00414be0(local_20,L"UTF-8");
    }
    else {
      FUN_00414be0(local_20,*(undefined8 *)(param_2 + 0x88));
    }
  }
  else {
    FUN_004168e0(local_20,param_1[0x12]);
  }
  cVar1 = FUN_00978620(param_1,local_20[0]);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0x88))(param_1,*(undefined8 *)(param_2 + 0x38),0x99,lVar3,local_20[0],0)
    ;
  }
  else {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    FUN_00978130(param_1,0x12,lVar3);
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb0))
              (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,(longlong)param_1 + 0x7c);
    if ((char)param_1[0x13] != '\0') {
      iVar2 = FUN_00416420(*(undefined8 *)(param_2 + 0xa0),0);
      uVar10 = (uint7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
      if (iVar2 == 0) {
        local_30[0] = L"<?xml version=\"1.0\"";
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        lVar4 = (ulonglong)uVar8 << 0x20;
        uVar9 = (ulonglong)uVar10 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,lVar4,uVar9);
        uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
      }
      else {
        local_48 = L"<?xml version=\"";
        local_40 = *(undefined8 *)(param_2 + 0xa0);
        local_38 = &DAT_0097a61c;
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar5 = CONCAT44(uVar8,2);
        uVar9 = (ulonglong)uVar10 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_48,uVar5,uVar9);
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      local_48 = L" encoding=\"";
      local_40 = local_20[0];
      local_38 = &DAT_0097a61c;
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      uVar6 = CONCAT44(uVar7,2);
      uVar9 = uVar9 & 0xffffffffffffff00;
      (**(code **)(*param_1 + 0xb8))
                (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_48,uVar6,uVar9);
      uVar8 = (uint)(uVar6 >> 0x20);
      uVar10 = (uint7)(uVar9 >> 8);
      if (*(char *)(param_2 + 0x98) == '\0') {
        local_30[0] = L" standalone=\"yes\"";
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar6 = (ulonglong)uVar8 << 0x20;
        uVar9 = (ulonglong)uVar10 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,uVar6,uVar9);
      }
      else if (*(char *)(param_2 + 0x98) == '\x01') {
        local_30[0] = L" standalone=\"no\"";
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar6 = (ulonglong)uVar8 << 0x20;
        uVar9 = (ulonglong)uVar10 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,uVar6,uVar9);
      }
      local_30[0] = L"?>";
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))
                (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,uVar6 & 0xffffffff00000000,
                 uVar9 & 0xffffffffffffff00);
    }
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + 0x80;
    }
    FUN_009780f0(param_1,0x12,param_2);
  }
  FUN_00414520(local_20);
  return;
}

