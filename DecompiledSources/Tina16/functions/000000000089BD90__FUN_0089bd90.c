/* Ghidra address: 0089bd90 */
/* Ghidra symbol: FUN_0089bd90 */


int FUN_0089bd90(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_20;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_0089bcf0(param_1,local_20);
      if ((*(char *)(lVar2 + 0x18) == param_3) &&
         (iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x20),param_2), iVar1 == 0)) {
        return local_20;
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

