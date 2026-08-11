/* Ghidra address: 01b95e40 */
/* Ghidra symbol: FUN_01b95e40 */


undefined1 FUN_01b95e40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_88 [36];
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  undefined1 local_39;
  longlong *local_38;
  undefined1 local_29;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  local_29 = 1;
  FUN_01b9aa40(param_1,0,&local_39);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))();
  local_64 = iVar2 + -1;
  local_40 = 0;
  if (-1 < local_64) {
    do {
      local_64 = iVar2;
      local_38 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                           (*(longlong **)(param_1 + 0x880),local_40);
      if (local_40 == 0) {
        (**(code **)(*local_38 + 0x88))(local_38,*(undefined8 *)(param_1 + 0x888));
      }
      plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      cVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,local_40);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x880) + 0x18))
                  (*(longlong **)(param_1 + 0x880),&local_58,local_40);
        (**(code **)(*local_38 + 0x100))(local_38,local_58);
      }
      local_40 = local_40 + 1;
      local_64 = local_64 + -1;
      iVar2 = local_64;
    } while (local_64 != 0);
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002c40 + 0x38) + 0x10))
            (*(longlong **)(*(longlong *)PTR_DAT_02002c40 + 0x38),*(undefined8 *)(param_1 + 0x890));
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  FUN_00414560(&local_60,2);
  return local_29;
}

