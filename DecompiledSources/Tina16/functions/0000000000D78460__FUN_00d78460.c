/* Ghidra address: 00d78460 */
/* Ghidra symbol: FUN_00d78460 */


void FUN_00d78460(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if ((0 < *(int *)(param_1 + 0x84)) && (0 < *(int *)(param_1 + 0x88))) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      if (*(byte *)(param_1 + 0x99) < 8) {
        bVar1 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x99) & 0x1f) & 0xe0U) != 0;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        if (*(char *)(param_1 + 0x99) == '\b') {
          local_10 = *(undefined8 *)(param_1 + 0x118);
          local_24 = *(undefined4 *)(param_1 + 0x114);
          *(undefined4 *)(param_1 + 0x114) = local_24;
          *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x130);
          local_20 = auStack_48;
          local_14 = local_24;
          FUN_00d76910(param_1,param_2,param_3);
          *(undefined8 *)(param_1 + 0x118) = local_10;
          *(undefined4 *)(param_1 + 0x114) = local_14;
          return;
        }
        FUN_00d76910(param_1,param_2,param_3);
        return;
      }
    }
    local_10 = *(undefined8 *)(param_1 + 0x118);
    local_14 = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x128);
    local_20 = auStack_48;
    FUN_00d76910(param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x118) = local_10;
    *(undefined4 *)(param_1 + 0x114) = local_14;
  }
  return;
}

