/* Ghidra address: 00b53fe0 */
/* Ghidra symbol: FUN_00b53fe0 */


void FUN_00b53fe0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((ushort)param_2 <= (ushort)param_3) {
    iVar1 = FUN_00b4e330();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_00b53890(param_1,iVar3);
        if (((ushort)param_2 <= *(ushort *)(lVar2 + 0x3e)) &&
           (*(ushort *)(lVar2 + 0x3e) <= (ushort)param_3)) {
          FUN_00b50860(lVar2);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_00b4fd10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),param_2,param_3,0,0xff);
    }
  }
  return;
}

