/* Ghidra address: 01873050 */
/* Ghidra symbol: FUN_01873050 */


int FUN_01873050(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_58;
  local_1c = -1;
  FUN_01873240(param_1,0);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_20);
      cVar1 = FUN_0043e530(*(undefined8 *)(lVar2 + 8),param_2);
      if (cVar1 != '\0') {
        local_1c = local_20;
        break;
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_018733b0(param_1,0);
  return local_1c;
}

