/* Ghidra address: 00ea04d0 */
/* Ghidra symbol: FUN_00ea04d0 */


ulonglong FUN_00ea04d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  longlong local_30;
  
  uVar3 = FUN_00ea0200(param_1,0,8,&local_38);
  if ((int)uVar3 == 0) {
    if (0 < local_38) {
      uVar3 = FUN_00ea0200(param_1,0,7,&local_34);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_00ea0200(param_1,0,9,&local_30);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (0 < local_38) {
        iVar6 = 0;
        do {
          lVar1 = local_30;
          iVar5 = (local_38 + iVar6) / 2;
          lVar4 = (longlong)local_34;
          iVar2 = FUN_00ea12d0(param_2,local_30 + 2 + iVar5 * lVar4 * 2);
          if (iVar2 == 0) {
            return (ulonglong)*(ushort *)(lVar1 + iVar5 * lVar4 * 2);
          }
          if (0 < iVar2) {
            iVar6 = iVar5 + 1;
            iVar5 = local_38;
          }
          local_38 = iVar5;
        } while (iVar6 < local_38);
      }
    }
    uVar3 = 0xfffffff9;
  }
  return uVar3;
}

