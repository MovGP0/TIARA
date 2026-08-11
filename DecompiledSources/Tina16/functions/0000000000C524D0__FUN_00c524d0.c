/* Ghidra address: 00c524d0 */
/* Ghidra symbol: FUN_00c524d0 */


char FUN_00c524d0(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_10;
  char local_9;
  
  local_20 = auStack_48;
  FUN_00c51bb0(param_1);
  local_9 = '\0';
  local_10 = FUN_00c52b80(param_1);
  local_10 = local_10 + -1;
  if (-1 < local_10) {
    do {
      if (local_9 == '\0') {
        uVar2 = FUN_00c52b60(param_1,local_10);
        cVar1 = FUN_00c51870(uVar2,param_2,param_3,param_4);
        if (cVar1 != '\0') goto LAB_00c5253e;
        local_9 = '\0';
      }
      else {
LAB_00c5253e:
        local_9 = '\x01';
      }
    } while ((*(char *)(param_1 + 0x88) == '\0') && (local_10 = local_10 + -1, local_10 != -1));
  }
  FUN_00c52ac0(param_1);
  return local_9;
}

