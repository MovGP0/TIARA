/* Ghidra address: 019effd0 */
/* Ghidra symbol: FUN_019effd0 */


longlong *
FUN_019effd0(longlong param_1,longlong *param_2,int param_3,char param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_78;
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_78 = param_2;
  local_69 = param_4;
  FUN_00414480(param_2);
  *param_5 = 1;
  if (local_69 == '\0') {
    local_20 = *(longlong *)(param_1 + 0x58);
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    local_20 = FUN_017ff620(*(undefined8 *)(param_1 + 0x58));
    local_28 = FUN_017ff620(*(undefined8 *)(param_1 + 0x58));
    if ((*(char *)(param_1 + 0xc1) == '\x01') && (local_28 == *(longlong *)(param_1 + 0x60))) {
      local_28 = 0;
    }
  }
  if (local_20 == 0) {
LAB_019f0117:
    if (local_28 != 0) {
      cVar1 = FUN_01d04d40(local_28);
      if (((cVar1 != '\0') && (*(char *)(local_28 + 0x1a0) == '\x01')) &&
         (param_3 < *(int *)(*(longlong *)(local_28 + 0x1a8) + 100))) {
        FUN_019efd00(auStack_a8,&local_48,*(undefined8 *)(*(longlong *)(local_28 + 0x1a8) + 8));
        FUN_00414ad0(local_78,local_48);
        goto LAB_019f01db;
      }
    }
    if ((local_28 == 0) && (*(char *)(param_1 + 0xc1) == '\x01')) {
      FUN_019efd00(auStack_a8,&local_50,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x1a8) + 8));
      FUN_00414ad0(local_78,local_50);
    }
    else {
      FUN_00414480(local_78);
    }
  }
  else {
    cVar1 = FUN_01d01970(local_20);
    if ((cVar1 == '\0') || (*(int *)(local_20 + 0xe8) <= param_3)) goto LAB_019f0117;
    FUN_019efa70(auStack_a8,local_40);
    FUN_00414ad0(local_78,local_40[0]);
  }
LAB_019f01db:
  if (*local_78 == 0) {
    *param_5 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))(*(longlong **)(param_1 + 0xa8));
    if (param_3 < iVar2) {
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x18))
                (*(longlong **)(param_1 + 0xa8),&local_58,param_3);
      if ((local_58 != 0) && (param_3 != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x18))
                  (*(longlong **)(param_1 + 0xa8),local_78,param_3);
        goto LAB_019f0312;
      }
    }
    if (param_3 == 0) {
      FUN_00414ad0(local_78,&DAT_019f03fc);
    }
    else {
      FUN_0043f750(&local_30,param_3);
      cVar1 = FUN_019efdf0(auStack_a8,local_30);
      if (cVar1 == '\0') {
        FUN_00414ad0(local_78,local_30);
      }
      else {
        iVar2 = 1;
        do {
          FUN_005b85d0(&local_60,&DAT_019f03ec,iVar2);
          local_88 = local_30;
          FUN_00416cd0(&local_30,3,&PTR_DAT_019f03d8,local_60);
          iVar2 = iVar2 + 1;
          cVar1 = FUN_019efdf0(auStack_a8,local_30);
        } while (cVar1 != '\0');
        FUN_00414ad0(local_78,local_30);
      }
    }
  }
LAB_019f0312:
  if (*local_78 == 0) {
    FUN_00414ad0(local_78,&DAT_019f03fc);
  }
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_019ddfe0(&local_68,*local_78,param_1 + 0x54,*(undefined8 *)(param_1 + 0xa00));
    FUN_00414ad0(local_78,local_68);
  }
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_30);
  return local_78;
}

