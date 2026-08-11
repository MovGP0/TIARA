/* Ghidra address: 01b78c70 */
/* Ghidra symbol: FUN_01b78c70 */


int FUN_01b78c70(longlong param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5
                )

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  wchar_t *in_stack_ffffffffffffff58;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_70 = (wchar_t *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (wchar_t *)0x0;
  FUN_00414610(param_5);
  iVar5 = 0;
  iVar2 = FUN_007e2ef0();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_007e2f10(param_3,iVar6);
      FUN_00450070(&local_30,*(undefined8 *)(lVar4 + 0x78),&DAT_01b79098,0,
                   (ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      in_stack_ffffffffffffff58 = *(wchar_t **)(lVar4 + 0x10);
      FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x10),&DAT_01b790ac,
                   in_stack_ffffffffffffff58);
      if ((*(char *)(lVar4 + 0x86) == '\0') ||
         (iVar3 = FUN_00416db0(local_30,&DAT_01b790bc), iVar3 == 0)) {
        bVar7 = false;
      }
      else {
        in_stack_ffffffffffffff58 = L"mnMRU";
        FUN_00416cd0(&local_50,3,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x10),
                     &DAT_01b790ac,L"mnMRU");
        cVar1 = FUN_005b8460(local_50,local_38);
        bVar7 = cVar1 == '\0';
      }
      if (bVar7) {
        in_stack_ffffffffffffff58 = L"mnOther";
        FUN_00416cd0(&local_58,3,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x10),
                     &DAT_01b790ac,L"mnOther");
        cVar1 = FUN_005b8460(local_58,local_38);
        bVar7 = cVar1 == '\0';
      }
      else {
        bVar7 = false;
      }
      if (((bVar7) && (iVar3 = FUN_007e2ef0(lVar4), iVar3 == 0)) &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x140))
                            (*(longlong **)(param_1 + 0x6e0),local_38,local_44), cVar1 == '\0')) {
        FUN_007dc700(&local_40,*(undefined2 *)(lVar4 + 0xc0));
        FUN_00416ba0(&local_60,param_5,local_30);
        FUN_0084e3e0(param_2,0,*(int *)(param_2 + 0x4c0) + param_4 + iVar5,local_60);
        FUN_0084e3e0(param_2,1,*(int *)(param_2 + 0x4c0) + param_4 + iVar5,local_40);
        FUN_0084e470(param_2,1,*(int *)(param_2 + 0x4c0) + param_4 + iVar5);
        if (local_40 != (wchar_t *)0x0) {
          in_stack_ffffffffffffff58 = local_40;
          FUN_00416cd0(&local_68,3,*(undefined8 *)(lVar4 + 0x10),&LAB_01b79100,local_40);
          (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x78))
                    (*(longlong **)(param_1 + 0x6e8),local_68);
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = FUN_007e2ef0(lVar4);
      if (0 < iVar3) {
        FUN_00416cd0(&local_70,3,param_5,local_30,&DAT_01b790ac);
        in_stack_ffffffffffffff58 = local_70;
        iVar3 = FUN_01b78c70(param_1,param_2,lVar4,param_4 + iVar5,local_70);
        iVar5 = iVar5 + iVar3;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  FUN_00414480(&param_5);
  return iVar5;
}

