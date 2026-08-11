/* Ghidra address: 00f8d350 */
/* Ghidra symbol: FUN_00f8d350 */


undefined1 FUN_00f8d350(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [16];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_49 = 1;
  iVar2 = FUN_00f8e670(param_1);
  if ((iVar2 == 2) && (*(char *)(param_1 + 0x3512) != '\0')) {
    cVar1 = FUN_01053ed0(*(undefined8 *)PTR_DAT_020056e0);
    if (cVar1 == '\0') {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_02003030);
      FUN_00b8e650(uVar3,local_30,L"HDLStrings.Msg_FC_IsModified3",local_38);
      iVar2 = FUN_0072d440(local_30[0],3,3,0);
      if (iVar2 == 6) {
        *(undefined1 *)(param_1 + 0x3510) = 1;
        FUN_006eae90(*(undefined8 *)(param_1 + 8),1);
        FUN_0104fc30(*(undefined8 *)PTR_DAT_020056e0,0);
        lVar4 = FUN_00f8c610(param_1,local_20);
        *(longlong *)(param_1 + 0x3480) = lVar4;
        (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x10))
                  (*(longlong **)(lVar4 + 0xd8),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x510))
        ;
        FUN_006eae90(*(undefined8 *)(param_1 + 8),0);
        local_49 = 0;
        thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x1234,0,0);
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x40),0x10,0,0);
      }
      else {
        FUN_01053e80(*(undefined8 *)PTR_DAT_020056e0,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x3488) == 0) {
    cVar1 = FUN_006805f0(*(undefined8 *)(param_1 + 8));
    if (cVar1 != '\0') {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_48,PTR_PTR_02004b00);
      FUN_00b8e650(uVar3,&local_40,L"HDLStrings.Msg_FC_SourceIsModified",local_48);
      iVar2 = FUN_0072d440(local_40,3,3,0);
      if (iVar2 == 6) {
        *(undefined1 *)(param_1 + 0x3510) = 1;
        FUN_006eae90(*(undefined8 *)(param_1 + 8),1);
        lVar4 = FUN_00f8c610(param_1,local_20);
        *(longlong *)(param_1 + 0x3480) = lVar4;
        (**(code **)(**(longlong **)(lVar4 + 0xd8) + 0x10))
                  (*(longlong **)(lVar4 + 0xd8),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x510))
        ;
        FUN_006eae90(*(undefined8 *)(param_1 + 8),0);
        local_49 = 0;
        thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x1234,0,0);
        thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x40),0x10,0,0);
      }
    }
  }
  FUN_00414560(&local_48,4);
  return local_49;
}

