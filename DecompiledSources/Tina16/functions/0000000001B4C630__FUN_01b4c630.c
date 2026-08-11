/* Ghidra address: 01b4c630 */
/* Ghidra symbol: FUN_01b4c630 */


void FUN_01b4c630(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_38 = 0;
  FUN_00417580(local_58,&DAT_01b4b5e8);
  (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0x90))(*(longlong **)(param_1 + 0x14b8));
  *(undefined4 *)(param_1 + 0x14a0) = 0;
  FUN_01995600(*(undefined8 *)(param_1 + 0x18),0,0);
  plVar4 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x18),0,0);
  while (plVar4 != (longlong *)0x0) {
    sVar1 = FUN_01d03160(plVar4);
    if (((sVar1 == 5) || (sVar1 == 0x21)) || (sVar1 == 4)) {
      (**(code **)(*plVar4 + 0x288))(plVar4,&local_38);
      iVar2 = FUN_004170c0(&DAT_01b4c948,local_38,1);
      if (0 < iVar2) {
        FUN_00416dc0(&local_38,local_38,1,iVar2 + -1);
      }
      if (sVar1 == 5) {
        uVar3 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
        FUN_0043f750(&local_60,uVar3);
        FUN_00414b50(local_58,local_60);
        uVar3 = (**(code **)(*plVar4 + 0x210))(plVar4,1);
        FUN_0043f750(&local_68,uVar3);
        FUN_00414b50(local_50,local_68);
        local_40 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
        local_3c = (**(code **)(*plVar4 + 0x210))(plVar4,1);
      }
      else {
        FUN_00414b50(local_58,local_38);
        FUN_00414480(local_50);
        local_40 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
        local_3c = 0;
      }
      FUN_00414b50(local_48,local_38);
      (**(code **)(*plVar4 + 0x2d0))(plVar4,1,local_30);
      cVar6 = *local_30[0] == '\0';
      if (0x80 < *(int *)(param_1 + 0x14a0)) {
        uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"CollectComps: too many meter nodes");
        cVar6 = FUN_004134c0(uVar5);
      }
      if ((cVar6 != '\0') &&
         (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0xb0))
                            (*(longlong **)(param_1 + 0x14b8),local_38), iVar2 < 0)) {
        FUN_00417c40(param_1 + 0x50 + (longlong)*(int *)(param_1 + 0x14a0) * 0x20,local_58,
                     &DAT_01b4b5e8);
        *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + 1;
        (**(code **)(**(longlong **)(param_1 + 0x14b8) + 0x78))
                  (*(longlong **)(param_1 + 0x14b8),local_38);
      }
    }
    FUN_01995800(*(undefined8 *)(param_1 + 0x18),0,0);
    plVar4 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_00414560(&local_68,2);
  FUN_00417740(local_58,&DAT_01b4b5e8);
  FUN_00414480(&local_38);
  return;
}

