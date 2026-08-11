/* Ghidra address: 01a9cdf0 */
/* Ghidra symbol: FUN_01a9cdf0 */


undefined8 FUN_01a9cdf0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_2;
  uStack_c = (int)((ulonglong)*param_2 >> 0x20);
  if (*(char *)(param_1 + 0x164) == '\0') {
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
  }
  cVar1 = *(char *)(param_1 + 0x162);
  if (cVar1 == '\0') {
    local_18 = local_10;
    uStack_14 = uStack_c;
  }
  else if (cVar1 == '\x01') {
    local_18 = uStack_c;
    uStack_14 = -local_10;
  }
  else if (cVar1 == '\x02') {
    local_18 = -local_10;
    uStack_14 = -uStack_c;
  }
  else if (cVar1 == '\x03') {
    local_18 = -uStack_c;
    uStack_14 = local_10;
  }
  cVar1 = *(char *)(param_1 + 0x163);
  if (cVar1 == '\0') {
    local_18 = local_18 * iVar2;
  }
  else if (cVar1 == '\x01') {
    uStack_14 = uStack_14 * iVar2;
  }
  else if (cVar1 == '\x02') {
    local_18 = local_18 * iVar2;
  }
  else if (cVar1 == '\x03') {
    uStack_14 = uStack_14 * iVar2;
  }
  return CONCAT44(uStack_14 + (*(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x15c)),
                  local_18 + (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x158)));
}

