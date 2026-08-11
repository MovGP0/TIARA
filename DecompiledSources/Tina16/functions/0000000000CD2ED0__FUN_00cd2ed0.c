/* Ghidra address: 00cd2ed0 */
/* Ghidra symbol: FUN_00cd2ed0 */


undefined8 FUN_00cd2ed0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_60 = (longlong *)0x0;
  puVar1 = auStack_88;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(longlong **)(param_1 + 0x38) = local_30;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = local_50;
    if (*(longlong *)PTR_DAT_020018f0 != 0) {
      uVar2 = (**(code **)PTR_DAT_02004e50)();
      local_20 = (**(code **)PTR_DAT_020048a8)(uVar2);
      (**(code **)PTR_DAT_020018f0)(local_20,local_38);
      local_3c = FUN_00ca55f0(local_20,&local_48);
      if ((0 < local_3c) && (local_48 != 0)) {
        FUN_00874930(&local_60);
        (**(code **)(*local_60 + 0x100))(local_60,&local_58,local_48,local_3c);
        (**(code **)(*local_30 + 0x60))(local_30,local_58);
      }
      puVar1 = local_50;
      if (local_20 != 0) {
        (**(code **)PTR_DAT_02002fc0)(local_20);
        puVar1 = local_50;
      }
    }
  }
  local_50 = puVar1;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  return local_28;
}

