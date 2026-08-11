/* Ghidra address: 01adf970 */
/* Ghidra symbol: FUN_01adf970 */


undefined1 FUN_01adf970(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *in_stack_ffffffffffffff58;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00414480(param_1 + 0x210);
  FUN_00414480(param_1 + 0x208);
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x1d0) = uVar5;
  (**(code **)(**(longlong **)(param_1 + 0x250) + 0x90))
            (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),
             *(undefined8 *)(param_1 + 0x1d0));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                (*(longlong **)(param_1 + 0x1d0),&local_38,iVar6);
      in_stack_ffffffffffffff58 =
           (wchar_t *)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      FUN_00450070(local_30,local_38,L".Reader",L".Writer",in_stack_ffffffffffffff58);
      FUN_00414b50(param_1 + 0x1c8,local_30[0]);
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                (*(longlong **)(param_1 + 0x1d0),&local_40,iVar6);
      cVar1 = FUN_005b83d0(local_40,*(undefined8 *)(param_1 + 0x240));
      if (cVar1 == '\0') {
        cVar1 = '\0';
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_48,iVar6);
        cVar1 = FUN_005b83d0(local_48,L".Curve");
      }
      if (cVar1 == '\0') {
        cVar1 = '\0';
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_50,iVar6);
        cVar1 = FUN_005b83d0(local_50,L".Reader");
      }
      if ((cVar1 != '\0') &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                            (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),
                             *(undefined8 *)(param_1 + 0x1c8),0), iVar4 == *(int *)(param_1 + 0x2a8)
         )) {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_60,iVar6);
        in_stack_ffffffffffffff58 = L"TRealReader";
        (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
                  (*(longlong **)(param_1 + 0x250),&local_58,*(undefined8 *)(param_1 + 0x248),
                   local_60,L"TRealReader");
        FUN_00414b50(param_1 + 0x210,local_58);
      }
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                (*(longlong **)(param_1 + 0x1d0),&local_68,iVar6);
      cVar1 = FUN_005b83d0(local_68,*(undefined8 *)(param_1 + 0x240));
      if (cVar1 == '\0') {
        cVar1 = '\0';
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_70,iVar6);
        cVar1 = FUN_005b83d0(local_70,L".Curve");
      }
      if (cVar1 == '\0') {
        cVar1 = '\0';
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_78,iVar6);
        cVar1 = FUN_005b83d0(local_78,L".Type");
      }
      if ((cVar1 != '\0') &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                            (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),
                             *(undefined8 *)(param_1 + 0x1c8),0), iVar4 == *(int *)(param_1 + 0x2a8)
         )) {
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x18))
                  (*(longlong **)(param_1 + 0x1d0),&local_88,iVar6);
        in_stack_ffffffffffffff58 = L"TCurve";
        (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
                  (*(longlong **)(param_1 + 0x250),&local_80,*(undefined8 *)(param_1 + 0x248),
                   local_88,L"TCurve");
        FUN_00414b50(param_1 + 0x208,local_80);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1d0));
  if ((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00414560(&local_88,0xc);
  return uVar2;
}

