/* Ghidra address: 010612f0 */
/* Ghidra symbol: FUN_010612f0 */


void FUN_010612f0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_3 == 0) {
    FUN_00416cd0(&local_30,5,*(undefined8 *)(param_1 + 0x40),&DAT_01061620,
                 *(undefined8 *)(param_1 + 0x48),&DAT_01061620,*(undefined8 *)(param_1 + 0x50));
  }
  else if (param_3 == 1) {
    FUN_00414b50(&local_30,*(undefined8 *)(param_1 + 0x50));
  }
  else if (param_3 == 2) {
    FUN_00414b50(&local_30,*(undefined8 *)(param_1 + 0x58));
  }
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar2,local_30);
  if (param_3 == 0) {
    iVar1 = (**(code **)(*plVar2 + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_00414480(param_1 + 0x78);
        FUN_00416cd0(param_1 + 0x78,7,&DAT_01061630,*(undefined8 *)(param_1 + 0x78),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),
                     *(undefined8 *)(param_1 + 0x80),L"ar.exe",&DAT_01061630);
        FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0x78),L" rcs Debug\\%s ");
        FUN_0105ceb0(param_1,&local_60,0,1);
        local_58 = local_60;
        local_50 = 0x11;
        FUN_00442f70(&local_40,local_48,&local_58,0);
        FUN_00414ad0(param_1 + 0x78,local_40);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,iVar3);
        FUN_00441920(&local_68,local_38);
        FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_68,
                     &LAB_010616a4);
        (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x78));
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x88))(*(longlong **)(param_1 + 0x100),plVar2);
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_48,4);
  return;
}

