/* Ghidra address: 00d7b510 */
/* Ghidra symbol: FUN_00d7b510 */


void FUN_00d7b510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x120));
  if (((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x84))) && (0 < *(int *)(param_1 + 0x88))) {
    if ((*(char *)(param_1 + 0x99) == '\a') &&
       (cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x130)), cVar1 != '\0')) {
      local_10 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x130);
      FUN_00d793a0(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x120) = local_10;
      return;
    }
    if ((*(char *)(param_1 + 0x99) == '\x05') &&
       (cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x138)), cVar1 != '\0')) {
      local_10 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x138);
      FUN_00d793a0(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x120) = local_10;
      return;
    }
    if ((*(char *)(param_1 + 0x99) == '\b') &&
       (cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x148)), cVar1 != '\0')) {
      local_10 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x148);
      FUN_00d793a0(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x120) = local_10;
      return;
    }
    if ((*(char *)(param_1 + 0x99) == '\x06') &&
       (cVar1 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x140)), cVar1 != '\0')) {
      local_10 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x140);
      FUN_00d793a0(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x120) = local_10;
      return;
    }
    FUN_00d793a0(param_1,param_2,param_3);
  }
  return;
}

