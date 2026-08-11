/* Ghidra address: 008f8e50 */
/* Ghidra symbol: FUN_008f8e50 */


int FUN_008f8e50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  
  if ((char)param_1[4] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x38))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        iVar3 = FUN_008f7250(*(undefined8 *)(param_1[3] + (longlong)iVar4 * 0x10),param_2);
        if (iVar3 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_2c = -1;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xb0))(param_1,param_2,&local_2c);
    if (cVar1 == '\0') {
      local_2c = -1;
    }
  }
  return local_2c;
}

