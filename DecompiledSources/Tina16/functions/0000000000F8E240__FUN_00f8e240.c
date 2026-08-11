/* Ghidra address: 00f8e240 */
/* Ghidra symbol: FUN_00f8e240 */


undefined1 FUN_00f8e240(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x3440));
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar6);
      FUN_0043e1a0(&local_40,local_48);
      FUN_00414ad0(param_1 + 0x3440,local_40);
      lVar5 = FUN_00f8c610(param_1,local_38);
      iVar4 = FUN_00f8a6f0(param_1,*(undefined4 *)(lVar5 + 0x100));
      if ((iVar4 == 0) && (cVar2 = FUN_00f8c160(param_1,0), cVar2 == '\0')) {
        local_49 = 0;
        FUN_00414ad0(param_1 + 0x3440,local_30[0]);
        goto LAB_00f8e35d;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_1 + 0x3440,local_30[0]);
  local_49 = 1;
LAB_00f8e35d:
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return local_49;
}

