/* Ghidra address: 01977180 */
/* Ghidra symbol: FUN_01977180 */


char FUN_01977180(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  char local_19;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_19 = '\0';
  puVar1 = auStack_68;
  if (param_2 != (longlong *)0x0) {
    *(char *)(param_2 + 0x17) = param_4;
    puVar1 = auStack_68;
    if ((param_3 == 0) && (puVar1 = auStack_68, param_2[0x13] == 0)) {
      lVar3 = (**(code **)(*param_1 + 0x118))(param_1);
      FUN_00441920(&local_38,*(undefined8 *)(lVar3 + 0x1c0));
      FUN_00414ad0(param_2 + 0x13,local_38);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    param_2[0xf] = (longlong)param_1;
    local_19 = (**(code **)(*param_2 + 0xe8))(param_2);
    if ((local_19 != '\0') &&
       (local_28 = (**(code **)(*param_2 + 200))(param_2,param_3), local_28 != 0)) {
      if (param_2[0x13] != 0) {
        FUN_00414ad0(param_1 + 0x38,param_2[0x13]);
      }
      if (param_4 == '\x01') {
        FUN_01976ff0(param_1);
      }
      cVar2 = (**(code **)(*param_2 + 0xd8))(param_2,local_28,param_1);
      if (cVar2 == '\0') {
        if (param_4 == '\0') {
          (**(code **)(*param_1 + 0x1c0))(param_1,local_28);
          if ((local_19 == '\0') || ((char)param_1[0x56] == '\0')) {
            local_19 = '\0';
          }
          else {
            local_19 = '\x01';
          }
        }
        else {
          local_48 = 0;
          (**(code **)(*param_1 + 0x1c8))(param_1,local_28,1,0);
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2,local_28,0);
    }
    (**(code **)(*param_2 + 0xf0))(param_2);
    param_2[0xf] = 0;
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414480(&local_38);
  return local_19;
}

