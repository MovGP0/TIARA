/* Ghidra address: 016586b0 */
/* Ghidra symbol: FUN_016586b0 */


undefined8
FUN_016586b0(undefined8 param_1,longlong param_2,longlong param_3,char param_4,undefined8 param_5,
            undefined8 param_6,byte param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_2 + 0x110);
  }
  local_31 = 0;
  if (((((param_4 == '\0') || (local_30 == 0)) ||
       ((*(char *)(local_30 + 9) == '\0' && (*(char *)(local_30 + 10) == '\0')))) ||
      ((param_3 == 0 || (*(longlong *)(param_3 + 200) != 0)))) ||
     ((*(longlong *)(param_3 + 0xc0) == 0 && (*(char *)(local_30 + 0x11) != '\0')))) {
    if (param_3 == 0) {
      uVar1 = 0x3ff0000000000000;
    }
    else {
      if (*(longlong *)(param_3 + 200) != 0) {
        FUN_004afc10(*(undefined8 *)(local_30 + 0x180),param_3);
      }
      uVar1 = FUN_01656f80(auStack_58,param_3);
    }
  }
  else if (*(longlong *)(param_3 + 0xc0) == 0) {
    *(undefined1 *)(local_30 + 0x11) = 1;
    local_31 = 1;
    FUN_016633d0(local_30);
    if (param_3 == 0) {
      uVar1 = 0x3ff0000000000000;
    }
    else {
      uVar1 = FUN_01656f80(auStack_58,param_3);
    }
    FUN_016640b0(local_30,param_3);
    *(undefined1 *)(local_30 + 0x11) = 0;
  }
  else {
    *(uint *)(local_30 + 0x110) = (uint)param_7;
    uVar1 = (**(code **)(param_3 + 0xc0))(param_5);
  }
  return uVar1;
}

