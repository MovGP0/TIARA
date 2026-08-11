/* Ghidra address: 007814f0 */
/* Ghidra symbol: FUN_007814f0 */


longlong * FUN_007814f0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined1 *local_120;
  undefined4 local_fc;
  longlong *local_f8 [3];
  int local_dc;
  longlong local_d8;
  int local_6c;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_120 = auStack_148;
  local_128 = (undefined8 *)0x0;
  FUN_00417580(&local_50,&DAT_0076f818);
  local_30 = (longlong *)0x0;
  if ((DAT_02012558 != '\0') && (DAT_02012571 != '\0')) {
    FUN_007809d0(&DAT_0075cd78);
  }
  local_20 = (longlong *)FUN_0079b670(&PTR_FUN_00776160,1,DAT_02012590);
  do {
    local_58 = local_20;
    *(int *)(local_20 + 2) = (int)local_20[2] + 1;
    if (*(int *)(local_20[1] + 0x10) <= (int)local_20[2]) {
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      local_28 = (longlong *)FUN_00797100(DAT_02012578);
      goto LAB_00781726;
    }
    local_60 = local_20[1];
    local_38 = *(longlong **)(*(longlong *)(local_60 + 8) + (longlong)(int)local_20[2] * 8);
    (**(code **)(*local_38 + 0xa0))(local_38,&local_128);
    cVar1 = FUN_0043e560(param_1,local_128,1);
  } while (cVar1 == '\0');
  local_30 = local_38;
  FUN_00781790(0,local_120);
  goto LAB_0078175d;
  while( true ) {
    FUN_007978e0(local_28,&local_50);
    cVar1 = FUN_0043e560(param_1,local_50,1);
    if ((cVar1 != '\0') && (local_48 != 0)) break;
LAB_00781726:
    cVar1 = thunk_FUN_00797a55(local_28);
    if (cVar1 == '\0') goto code_r0x0078173c;
  }
  plVar2 = (longlong *)(**(code **)(local_40 + 0x230))(local_40,local_48);
  local_d8 = DAT_02012590 + 8;
  local_68 = plVar2;
  local_30 = plVar2;
  local_dc = FUN_00596a10(local_d8,&local_68);
  local_6c = local_dc;
  if (local_dc == -1) {
    local_f8[0] = plVar2;
    local_fc = FUN_00597e50(DAT_02012590 + 8,local_f8);
  }
code_r0x0078173c:
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + -0x20))(local_28,1);
  }
LAB_0078175d:
  FUN_00414480(&local_128);
  FUN_00417740(&local_50,&DAT_0076f818);
  return local_30;
}

