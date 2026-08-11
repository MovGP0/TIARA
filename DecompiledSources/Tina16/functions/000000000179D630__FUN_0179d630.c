/* Ghidra address: 0179d630 */
/* Ghidra symbol: FUN_0179d630 */


void FUN_0179d630(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_00498350(local_48,0x7fffffff,0x7fffffff,0x80000001,0x80000001);
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
        (**(code **)(*plVar3 + 0x40))(plVar3,local_58);
        FUN_017ad620(local_38,local_58);
        thunk_FUN_04176532(local_38,0xfffffffe,0xfffffffe);
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017a79c0);
        if (cVar1 == '\0') {
          thunk_FUN_0408d40e(local_48,local_48,local_38);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ab8b8);
      if (cVar1 != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
        FUN_017b6e60(uVar2,local_48);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

