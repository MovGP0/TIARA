/* Ghidra address: 00b30e70 */
/* Ghidra symbol: FUN_00b30e70 */


undefined8
FUN_00b30e70(longlong param_1,undefined8 param_2,short param_3,ushort param_4,byte param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  FUN_004144d0(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      psVar1 = (short *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      if ((((*psVar1 == param_3) && ((ushort)psVar1[1] <= param_4)) &&
          (param_4 <= (ushort)psVar1[2])) &&
         ((*(byte *)(psVar1 + 3) <= param_5 && (param_5 <= *(byte *)((longlong)psVar1 + 7))))) {
        FUN_00414bf0(param_2,*(undefined8 *)(psVar1 + 4));
        return param_2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

