/* Ghidra address: 006e04d0 */
/* Ghidra symbol: FUN_006e04d0 */


ushort * FUN_006e04d0(undefined8 param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  
  *param_3 = 0;
  while( true ) {
    uVar1 = *param_2;
    if (uVar1 < 0x100) {
      bVar2 = ((byte)(&DAT_006e0508)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) break;
    param_2 = param_2 + 1;
    *param_3 = *param_3 + 1;
  }
  return param_2;
}

