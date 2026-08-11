/* Ghidra address: 0080eb50 */
/* Ghidra symbol: FUN_0080eb50 */


int FUN_0080eb50(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  int local_2c;
  undefined8 local_20;
  
  local_20 = 0;
  local_2c = 0;
  if (param_2 != (ushort *)0x0) {
    while (puVar3 = param_2, *param_2 != 0) {
      while( true ) {
        uVar1 = *puVar3;
        if (uVar1 < 0x100) {
          bVar4 = ((byte)(&DAT_0080ec58)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7)
                  & 1) != 0;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) break;
        puVar3 = (ushort *)FUN_0044f6b0(puVar3);
      }
      FUN_00414740(&local_20,param_2,((longlong)puVar3 - (longlong)param_2) / 2 & 0xffffffff);
      iVar2 = FUN_005fdff0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x100) + 0x490),local_20
                          );
      if (local_2c < iVar2) {
        local_2c = iVar2;
      }
      param_2 = puVar3;
      if (*puVar3 == 0xd) {
        param_2 = puVar3 + 1;
      }
      if (*param_2 == 10) {
        param_2 = param_2 + 1;
      }
    }
  }
  FUN_00414480(&local_20);
  return local_2c;
}

