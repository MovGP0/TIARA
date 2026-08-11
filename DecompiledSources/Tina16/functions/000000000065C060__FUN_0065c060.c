/* Ghidra address: 0065c060 */
/* Ghidra symbol: FUN_0065c060 */


longlong FUN_0065c060(longlong param_1,undefined8 param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  pcVar2 = (code *)FUN_00411550(param_1,0xffae);
  (*pcVar2)(param_1,local_20);
  if (0 < *(int *)(local_20 + 0x10)) {
    local_30 = FUN_004aeba0(local_20,param_2);
    if (local_30 == -1) {
      if (param_3 == '\0') {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(local_20 + 0x10) + -1;
      }
    }
    local_2c = local_30;
    do {
      if (param_3 == '\0') {
        if (local_2c == 0) {
          local_2c = *(int *)(local_20 + 0x10);
        }
        local_2c = local_2c + -1;
      }
      else {
        local_2c = local_2c + 1;
        if (local_2c == *(int *)(local_20 + 0x10)) {
          local_2c = 0;
        }
      }
      lVar3 = FUN_004aeac0(local_20,local_2c);
      pcVar2 = (code *)FUN_00411550(lVar3,0xffb3);
      cVar1 = (*pcVar2)(lVar3);
      if (((cVar1 != '\0') && ((param_4 == '\0' || (*(char *)(lVar3 + 900) != '\0')))) &&
         ((param_5 == '\0' || (*(longlong *)(lVar3 + 0x78) == param_1)))) {
        local_28 = lVar3;
      }
    } while ((local_28 == 0) && (local_2c != local_30));
  }
  FUN_00410f20(local_20);
  return local_28;
}

