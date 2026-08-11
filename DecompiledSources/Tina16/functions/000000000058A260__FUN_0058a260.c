/* Ghidra address: 0058a260 */
/* Ghidra symbol: FUN_0058a260 */


int FUN_0058a260(undefined8 param_1,uint param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 *local_28;
  int local_1c;
  int local_18;
  int local_14;
  longlong local_10;
  
  local_40 = auStack_68;
  local_14 = 0;
  local_1c = FUN_0058a390(param_1,&local_10);
  if (0 < local_1c) {
    local_18 = 0;
    iVar1 = local_1c;
    if (-1 < local_1c + -1) {
      do {
        local_28 = *(undefined8 **)(local_10 + (longlong)local_18 * 8);
        if (**(byte **)*local_28 < 0x20 && (1 << (**(byte **)*local_28 & 0x1f) & param_2) != 0) {
          if (param_3 != 0) {
            *(undefined8 **)(param_3 + (longlong)local_14 * 8) = local_28;
          }
          local_14 = local_14 + 1;
        }
        local_18 = local_18 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (((param_4 != '\0') && (param_3 != 0)) && (1 < local_14)) {
      FUN_0058a220(param_3,local_14);
    }
    FUN_004095f0(local_10);
  }
  return local_14;
}

