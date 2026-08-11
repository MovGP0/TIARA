/* Ghidra address: 0097cb50 */
/* Ghidra symbol: FUN_0097cb50 */


void FUN_0097cb50(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar5;
  ulonglong uVar4;
  undefined8 in_stack_ffffffffffffffa0;
  uint7 uVar7;
  ulonglong uVar6;
  wchar_t *local_48;
  undefined8 local_40;
  undefined *local_38;
  wchar_t *local_30 [2];
  undefined8 local_20 [2];
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
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
    FUN_00978130(param_1,0x13,lVar3);
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb0))
              (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,(longlong)param_1 + 0x7c);
    if ((char)param_1[0x13] != '\0') {
      iVar2 = FUN_00416420(*(undefined8 *)(param_2 + 0xa8),0);
      uVar7 = (uint7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
      if (iVar2 == 0) {
        local_30[0] = L"<?xml version=\"1.0\"";
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar4 = (ulonglong)uVar5 << 0x20;
        uVar6 = (ulonglong)uVar7 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,uVar4,uVar6);
      }
      else {
        local_48 = L"<?xml version=\"";
        local_40 = *(undefined8 *)(param_2 + 0xa8);
        local_38 = &DAT_0097cf1c;
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar4 = CONCAT44(uVar5,2);
        uVar6 = (ulonglong)uVar7 << 8;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_48,uVar4,uVar6);
      }
      iVar2 = FUN_00416420(local_20[0],0);
      if (iVar2 != 0) {
        local_48 = L" encoding=\"";
        local_40 = local_20[0];
        local_38 = &DAT_0097cf1c;
        if (param_2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2 + 0x80;
        }
        uVar4 = CONCAT44((int)(uVar4 >> 0x20),2);
        uVar6 = uVar6 & 0xffffffffffffff00;
        (**(code **)(*param_1 + 0xb8))
                  (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_48,uVar4,uVar6);
      }
      local_30[0] = L"?>\n";
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))
                (param_1,*(undefined8 *)(param_2 + 0x38),lVar3,local_30,uVar4 & 0xffffffff00000000,
                 uVar6 & 0xffffffffffffff00);
    }
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + 0x80;
    }
    FUN_009780f0(param_1,0x13,param_2);
  }
  FUN_00414520(local_20);
  return;
}

