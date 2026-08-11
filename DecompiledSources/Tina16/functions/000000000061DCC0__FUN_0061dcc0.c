/* Ghidra address: 0061dcc0 */
/* Ghidra symbol: FUN_0061dcc0 */


undefined8 FUN_0061dcc0(byte *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (param_1[param_2] != 0)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      if (((byte)PTR_DAT_02005a50[(longlong)(ulonglong)*param_1 >> 3] >> ((ulonglong)*param_1 & 7) &
          1) != 0) {
        uVar2 = 1;
      }
    }
    else {
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          bVar3 = false;
        }
        else {
          bVar3 = ((byte)PTR_DAT_02005a50[(longlong)(ulonglong)param_1[iVar1] >> 3] >>
                   ((ulonglong)param_1[iVar1] & 7) & 1) != 0;
        }
      } while (bVar3);
      if ((param_2 - iVar1) % 2 == 0) {
        uVar2 = 2;
      }
      else if (((byte)PTR_DAT_02005a50[(longlong)(ulonglong)param_1[param_2] >> 3] >>
                ((ulonglong)param_1[param_2] & 7) & 1) != 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

