/* Ghidra address: 00b11e50 */
/* Ghidra symbol: FUN_00b11e50 */


undefined1 FUN_00b11e50(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = auStack_68;
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_00b10e20(param_1,&local_38,*(undefined4 *)(param_1 + 0x4ac));
    puVar1 = local_30;
    if (local_38 != 0) {
      FUN_004b3260(param_2);
      if (param_3 != '\0') {
        (**(code **)(*param_2 + 0x90))(param_2);
      }
      FUN_00b10e20(param_1,&local_40,*(undefined4 *)(param_1 + 0x4ac));
      (**(code **)(param_1 + 0x630))(*(undefined8 *)(param_1 + 0x638),param_1,local_40,param_2);
      iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
      local_19 = 0 < iVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x628) + 0x53b) = local_19;
      FUN_004b3390(param_2);
      goto code_r0x00b11f48;
    }
  }
  local_30 = puVar1;
  local_19 = 0;
code_r0x00b11f48:
  FUN_00414560(&local_40,2);
  return local_19;
}

