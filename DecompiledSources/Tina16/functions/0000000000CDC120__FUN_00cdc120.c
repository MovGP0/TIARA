/* Ghidra address: 00cdc120 */
/* Ghidra symbol: FUN_00cdc120 */


longlong * FUN_00cdc120(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *local_30;
  
  local_30 = (byte *)0x0;
  FUN_00419260(&local_30,&DAT_0086e978,1,4);
  iVar5 = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_3 + -8);
  }
  iVar1 = (int)uVar2;
  if ((int)((longlong)((ulonglong)(uint)(iVar1 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) % 4) != 0) {
    iVar1 = (int)((longlong)((ulonglong)(uint)(iVar1 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) / 4) * 4
    ;
  }
  iVar3 = 0;
  iVar4 = (iVar1 / 4) * 3;
  FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar4);
  if (0 < iVar1) {
    do {
      *local_30 = *(byte *)(param_3 + iVar5);
      local_30[1] = *(byte *)(param_3 + (iVar5 + 1));
      local_30[2] = *(byte *)(param_3 + (iVar5 + 2));
      local_30[3] = *(byte *)(param_3 + (iVar5 + 3));
      iVar5 = iVar5 + 4;
      *(byte *)(*param_2 + (longlong)iVar3) =
           *(char *)(param_1 + 0x87 + (ulonglong)*local_30) * '\x04' |
           *(byte *)(param_1 + 0x87 + (ulonglong)local_30[1]) >> 4 & 3;
      *(byte *)(*param_2 + (longlong)(iVar3 + 1)) =
           *(char *)(param_1 + 0x87 + (ulonglong)local_30[1]) << 4 |
           *(byte *)(param_1 + 0x87 + (ulonglong)local_30[2]) >> 2 & 0xf;
      *(byte *)(*param_2 + (longlong)(iVar3 + 2)) =
           *(char *)(param_1 + 0x87 + (ulonglong)local_30[2]) << 6 |
           *(byte *)(param_1 + 0x87 + (ulonglong)local_30[3]) & 0x3f;
      iVar3 = iVar3 + 3;
    } while (iVar5 < iVar1);
  }
  if (((param_4 == '\0') && (0 < iVar5)) &&
     ((ushort)*(byte *)(param_3 + (iVar5 + -1)) == *(ushort *)(param_1 + 0x108))) {
    if ((ushort)*(byte *)(param_3 + (iVar5 + -2)) == *(ushort *)(param_1 + 0x108)) {
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
    }
    FUN_00419260(param_2,&DAT_0086e978,1,(longlong)(iVar4 - iVar5));
  }
  FUN_00419430(&local_30,&DAT_0086e978);
  return param_2;
}

