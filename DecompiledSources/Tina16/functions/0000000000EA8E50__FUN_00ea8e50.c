/* Ghidra address: 00ea8e50 */
/* Ghidra symbol: FUN_00ea8e50 */


undefined8
FUN_00ea8e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  if (param_5 == -1) {
    local_40 = auStack_68;
    FUN_00ea8d40(param_1,param_2,param_3,&local_28);
  }
  else {
    FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(longlong *)(lVar1 + 0x48) = param_1;
    *(code **)(lVar1 + 0x40) = FUN_00ea7ea0;
    *(undefined8 *)(param_1 + 8) = local_28;
    *(undefined8 *)(param_1 + 0x10) = uStack_20;
    local_2c = 0;
    cVar2 = FUN_00ea4860(*(undefined8 *)(param_1 + 0x20));
    while (cVar2 != '\0') {
      FUN_00ea4b30(*(undefined8 *)(param_1 + 0x20),&local_48);
      local_2c = local_2c + 1;
      if (local_2c == param_5) break;
      cVar2 = FUN_00ea4940(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_00ea47c0(*(undefined8 *)(param_1 + 0x20),param_2);
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_00414480(&local_48);
  return param_2;
}

