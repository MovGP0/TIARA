/* Ghidra address: 00afcdf0 */
/* Ghidra symbol: FUN_00afcdf0 */


void FUN_00afcdf0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_1c = FUN_00aa6a10(*(undefined8 *)(param_1 + 0x8b0));
  if (local_1c != 0) {
    plVar1 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar1 + 0x30))(plVar1);
    plVar1 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar1 + 0x20))(plVar1);
    FUN_00afcf10(param_1,&local_38);
    FUN_009ec6d0(local_38);
    FUN_00afdf40(param_1,&local_40);
    FUN_009ec5c0(local_40);
    plVar1 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  FUN_004144d0(&local_40);
  FUN_00414480(&local_38);
  return;
}

