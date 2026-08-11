/* Ghidra address: 00ad1c80 */
/* Ghidra symbol: FUN_00ad1c80 */


void FUN_00ad1c80(longlong param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  FUN_00414480(param_2);
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20);
  if (((((ushort)(sVar1 - 0x2dU) < 0xd) || ((ushort)(sVar1 - 0x41U) < 0x1a)) || (sVar1 == 0x5f)) ||
     ((ushort)(sVar1 - 0x61U) < 0x1a)) {
    *(undefined1 *)(param_1 + 0x7f) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  while ((*(char *)(param_1 + 0x7f) != '\0' &&
         (((sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20), (ushort)(sVar1 - 0x2dU) < 0xd
           || ((ushort)(sVar1 - 0x41U) < 0x1a)) ||
          ((sVar1 == 0x5f || ((ushort)(sVar1 - 0x61U) < 0x1a))))))) {
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + 1);
    lVar3 = FUN_00414de0(param_2);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(short *)(lVar3 + -2 + (longlong)iVar2 * 2) = sVar1;
    FUN_00ad1af0(param_1);
  }
  if (*(char *)(param_1 + 0x7f) != '\0') {
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(bool *)(param_1 + 0x7f) = 0 < iVar2;
  }
  return;
}

