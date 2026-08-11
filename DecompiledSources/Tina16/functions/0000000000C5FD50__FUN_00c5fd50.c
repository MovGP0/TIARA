/* Ghidra address: 00c5fd50 */
/* Ghidra symbol: FUN_00c5fd50 */


void FUN_00c5fd50(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_00c5fc40(param_1);
  FUN_00498350(local_48,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_017ad620(local_38,local_48);
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)
               FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd10),iVar4);
      cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,local_38);
      if (cVar2 != '\0') {
        FUN_01795680(*(undefined8 *)(param_1 + 0x10),plVar3,1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xc90);
  FUN_00c5f0b0(param_1);
  FUN_01795670(*(undefined8 *)(param_1 + 0x10),uVar1);
  return;
}

