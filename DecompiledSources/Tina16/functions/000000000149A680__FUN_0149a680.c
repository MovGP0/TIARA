/* Ghidra address: 0149a680 */
/* Ghidra symbol: FUN_0149a680 */


void FUN_0149a680(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  lVar4 = FUN_019a4600();
  if (*(char *)(lVar4 + 0x218) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (100 < iVar3) {
      cVar2 = FUN_01b23030();
      if (cVar2 != '\0') {
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_38,PTR_PTR_02002d88);
        FUN_00b8e650(uVar5,&local_30,L"HDLStrings.Msg_DesignToolLicenseCheck",local_38);
        uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30);
        FUN_004134c0(uVar5);
      }
    }
  }
  if (*(int *)(param_1 + 0xc08) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
    FUN_013b9dc0(*(undefined8 *)(param_1 + 0xc00));
    FUN_014959c0(param_1);
    FUN_013bc030(*(undefined8 *)(param_1 + 0xc00),local_20,local_28,1,0);
    FUN_0149b690(param_1,1,local_20[0]);
  }
  else {
    FUN_01496ea0(param_1,1);
  }
  FUN_00414560(&local_38,4);
  return;
}

