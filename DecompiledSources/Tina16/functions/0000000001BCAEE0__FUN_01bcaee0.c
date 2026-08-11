/* Ghidra address: 01bcaee0 */
/* Ghidra symbol: FUN_01bcaee0 */


void FUN_01bcaee0(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(*(longlong *)(param_1 + 0x590) + 0xa9) != '\0') {
    FUN_0064d000(param_1,&local_28);
    local_28 = local_20 - *(int *)(param_1 + 0x578);
    if (*(char *)(*(longlong *)(param_1 + 0x598) + 0xa9) != '\0') {
      local_1c = local_1c - *(int *)(param_1 + 0x57c);
    }
    FUN_0064d040(*(undefined8 *)(param_1 + 0x590),&local_28);
    if (param_2 != '\0') {
      FUN_0064e1d0(*(undefined8 *)(param_1 + 0x590));
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x598) + 0xa9) != '\0') {
    FUN_0064d000(param_1,&local_28);
    local_24 = local_1c - *(int *)(param_1 + 0x57c);
    if (*(char *)(*(longlong *)(param_1 + 0x590) + 0xa9) != '\0') {
      local_20 = local_20 - *(int *)(param_1 + 0x578);
    }
    FUN_0064d040(*(undefined8 *)(param_1 + 0x598),&local_28);
    if (param_2 != '\0') {
      FUN_0064e1d0(*(undefined8 *)(param_1 + 0x598));
    }
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x5a0) + 0xa9);
  if ((*(char *)(*(longlong *)(param_1 + 0x598) + 0xa9) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x590) + 0xa9) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x590) >> 8),1);
  }
  FUN_0064dbe0(*(longlong *)(param_1 + 0x5a0),uVar2);
  if (*(char *)(*(longlong *)(param_1 + 0x5a0) + 0xa9) != '\0') {
    FUN_0064d000(param_1,&local_28);
    local_28 = local_20 - *(int *)(param_1 + 0x578);
    local_24 = local_1c - *(int *)(param_1 + 0x57c);
    FUN_0064d040(*(undefined8 *)(param_1 + 0x5a0),&local_28);
    if (cVar1 == '\0') {
      FUN_0064e1d0(*(undefined8 *)(param_1 + 0x5a0));
    }
  }
  return;
}

