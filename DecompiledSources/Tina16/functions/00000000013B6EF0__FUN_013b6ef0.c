/* Ghidra address: 013b6ef0 */
/* Ghidra symbol: FUN_013b6ef0 */


undefined4 FUN_013b6ef0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_1c [3];
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_3c = 0;
  cVar2 = FUN_01b22620(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 200),
                       L"Image classification result",local_1c,0);
  if (cVar2 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"Image classification result: not found in the result!");
    FUN_004134c0(uVar4);
  }
  cVar2 = FUN_01b22620(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 200),L"Category:",local_1c,0)
  ;
  if (cVar2 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Category:: not found in the result!");
    FUN_004134c0(uVar4);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 200);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,local_1c[0]);
  iVar3 = FUN_004170c0(&LAB_013b71a8,local_28,1);
  iVar5 = 0;
  if (local_28 != 0) {
    iVar5 = *(int *)(local_28 + -4);
  }
  if (0 < iVar3) {
    FUN_00416dc0(&local_38,local_28,iVar3 + 1,iVar5 - iVar3);
    FUN_0043ea00(&local_30,local_38);
    FUN_00414b50(&local_28,local_30);
    local_3c = FUN_0043fc00(local_28);
  }
  FUN_00414560(&local_38,3);
  return local_3c;
}

