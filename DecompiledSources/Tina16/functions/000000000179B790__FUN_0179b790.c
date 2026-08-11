/* Ghidra address: 0179b790 */
/* Ghidra symbol: FUN_0179b790 */


void FUN_0179b790(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  
  FUN_00498350(&local_48,0x7fffffff,0x7fffffff,0x80000001,0x80000001);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar4);
        (**(code **)(*plVar3 + 0x40))(plVar3,local_58);
        FUN_017ad620(local_38,local_58);
        thunk_FUN_0408d40e(&local_48,&local_48,local_38);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_48 != 0x7fffffff) {
    local_48 = local_48 * *(int *)PTR_DAT_020033a8;
    local_44 = local_44 * *(int *)PTR_DAT_02002d48;
    local_40 = local_40 * *(int *)PTR_DAT_020033a8;
    local_3c = local_3c * *(int *)PTR_DAT_020033a8;
    iVar5 = local_44 + local_3c;
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x498),
                 (local_48 + local_40) / 2 - *(int *)(*(longlong *)(param_1 + 0x940) + 0x98) / 2);
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x4b0),
                 iVar5 / 2 - *(int *)(*(longlong *)(param_1 + 0x940) + 0x9c) / 2);
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  return;
}

