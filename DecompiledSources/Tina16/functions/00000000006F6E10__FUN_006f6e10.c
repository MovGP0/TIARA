/* Ghidra address: 006f6e10 */
/* Ghidra symbol: FUN_006f6e10 */


longlong FUN_006f6e10(longlong param_1,int param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_2c;
  
  local_2c = param_2;
  if (param_4 != '\0') {
    local_2c = param_2 + -1;
  }
  iVar1 = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
  iVar3 = local_2c + 1;
  if (iVar3 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - iVar3) + 1;
    do {
      lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar3);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) == param_3)) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_5 != '\0') {
    if (param_4 != '\0') {
      local_2c = local_2c + 1;
    }
    iVar1 = 0;
    if (-1 < local_2c + -1) {
      do {
        lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar1);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) == param_3)) {
          return lVar2;
        }
        iVar1 = iVar1 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
  return 0;
}

