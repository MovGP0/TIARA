/* Ghidra address: 016ef200 */
/* Ghidra symbol: FUN_016ef200 */


void FUN_016ef200(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,byte param_8,byte param_9,
                 char param_10,char param_11)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_50;
  undefined8 local_48;
  char local_40 [4];
  uint local_3c;
  uint local_38;
  longlong local_30;
  longlong *local_28;
  
  local_50 = 0;
  local_48 = 0;
  if ((*(longlong *)PTR_DAT_02003c48 == 0) || (param_1 == 0)) goto code_r0x016ef3bf;
  if (param_11 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x128);
    if (plVar1 == (longlong *)0x0) goto code_r0x016ef3bf;
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_50);
    cVar2 = FUN_01330f80(local_50,L"RTRIGGER");
    if (cVar2 == '\0') goto code_r0x016ef3bf;
  }
  local_40[0] = param_10;
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (param_10 == '\x01') {
    local_3c = (uint)param_8;
    local_38 = (uint)param_9;
  }
  else if (param_10 == '\x02') {
    local_3c = (uint)param_8;
    local_38 = (uint)param_9;
  }
  local_30 = param_1;
  local_28 = plVar1;
  if (param_11 == '\0') {
    if (plVar1 == (longlong *)0x0) {
      FUN_00414480(&local_48);
    }
    else {
      (**(code **)(*plVar1 + 0xf8))(plVar1);
      (**(code **)(*plVar1 + 0x288))(plVar1,&local_48);
    }
  }
  else {
    FUN_00414b50(&local_48,L"RTRIGGER");
  }
  FUN_01331c90(*(undefined8 *)PTR_DAT_02003c48,param_2,param_3,param_4,param_5,param_6,param_7,
               local_40,param_11);
code_r0x016ef3bf:
  FUN_00414560(&local_50,2);
  return;
}

