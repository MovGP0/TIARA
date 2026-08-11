/* Ghidra address: 00d36f10 */
/* Ghidra symbol: FUN_00d36f10 */


int FUN_00d36f10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_88;
  undefined4 local_84;
  int local_78;
  
  if (param_1 != 0) {
    iVar1 = thunk_FUN_041b99e8();
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      do {
        FUN_0040d200(&local_88,0x50,0);
        local_88 = 0x50;
        local_84 = 2;
        iVar2 = thunk_FUN_0410b804(param_1,iVar3,0xffffffff,&local_88);
        if ((iVar2 != 0) && (local_78 == param_2)) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return -1;
}

