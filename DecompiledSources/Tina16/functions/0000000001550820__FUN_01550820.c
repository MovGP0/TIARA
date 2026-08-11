/* Ghidra address: 01550820 */
/* Ghidra symbol: FUN_01550820 */


void FUN_01550820(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00416cd0(&local_40,3,L" COMPONENT ",*(undefined8 *)(param_1 + 0x760),L" IS PORT( ");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_40);
  lVar1 = *(longlong *)(param_1 + 0x750);
  iVar6 = *(int *)(lVar1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),iVar5);
      FUN_01550c40(param_1,&local_38,lVar4);
      FUN_00414ad0(param_1 + 0xa10,*(undefined8 *)PTR_PTR_02001278);
      if ((*(longlong *)(param_1 + 0x938) == 0) ||
         (cVar2 = FUN_00e0f210(*(longlong *)(param_1 + 0x938),*(undefined4 *)(lVar4 + 0x30),
                               param_1 + 0xa10), cVar2 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0xa08) = uVar3;
      FUN_01571620(lVar4,&local_48);
      FUN_00416cd0(&local_30,6,&DAT_01550aa0,local_38,&DAT_01550ab4,local_48,&DAT_01550ac8,
                   *(undefined8 *)(param_1 + 0xa10));
      if (iVar5 < *(int *)(lVar1 + 0x10) + -1) {
        FUN_00416ad0(&local_30,&DAT_01550ad8);
      }
      else {
        FUN_00416ad0(&local_30,&DAT_01550aec);
      }
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),local_30);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L" END COMPONENT;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  FUN_00414560(&local_48,4);
  return;
}

