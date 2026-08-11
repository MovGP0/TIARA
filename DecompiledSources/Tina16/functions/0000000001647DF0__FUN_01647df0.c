/* Ghidra address: 01647df0 */
/* Ghidra symbol: FUN_01647df0 */


longlong FUN_01647df0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18));
  if (iVar3 == -1) {
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_40,PTR_PTR_020013c0);
    FUN_00b8e650(uVar4,&local_38,L"HDLStrings.Msg_NotAssigned",local_40);
    FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x18),&DAT_01647f58,local_38);
    FUN_01613110(local_30);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8);
  lVar5 = FUN_01647de0();
  iVar3 = *(int *)(lVar5 + 0x10);
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_01647de0(param_1);
      local_48 = FUN_004aeac0(uVar4,iVar6);
      cVar2 = FUN_01645040(*(undefined1 *)(local_48 + 0x90));
      if ((cVar2 == '\0') && (lVar1 == *(longlong *)(local_48 + 8))) goto LAB_01647f12;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_48 = 0;
LAB_01647f12:
  FUN_00414560(&local_40,3);
  return local_48;
}

