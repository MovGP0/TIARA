/* Ghidra address: 00d7bb40 */
/* Ghidra symbol: FUN_00d7bb40 */


void FUN_00d7bb40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if ((0 < *(int *)(param_1 + 0x84)) && (0 < *(int *)(param_1 + 0x88))) {
    cVar1 = *(char *)(param_1 + 0x99);
    if (cVar1 == '\x05') {
      local_10 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x120);
      FUN_00d76910(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x118) = local_10;
    }
    else if (cVar1 == '\x06') {
      local_10 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x130);
      local_20 = auStack_48;
      FUN_00d76910(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x118) = local_10;
    }
    else if (cVar1 == '\a') {
      local_10 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x128);
      local_20 = auStack_48;
      FUN_00d76910(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x118) = local_10;
    }
    else if (cVar1 == '\b') {
      local_10 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x138);
      local_20 = auStack_48;
      FUN_00d76910(param_1,param_2,param_3);
      *(undefined8 *)(param_1 + 0x118) = local_10;
    }
    else {
      local_20 = auStack_48;
      FUN_00d76910(param_1,param_2,param_3);
    }
  }
  return;
}

