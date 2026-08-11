/* Ghidra address: 015dce90 */
/* Ghidra symbol: FUN_015dce90 */


void FUN_015dce90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_1c;
  
  if ((*(char *)(param_1 + 0x103) != '\0') && (*(char *)(param_1 + 0x231) != '\0')) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x3e,0);
    FUN_004134c0(uVar2);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_015ca2b0(param_1,1);
    if (((*(ushort *)(param_1 + 0xa0) & 0xff03) == 0) && (*(char *)(param_1 + 0x86) == '\0')) {
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x20,param_1);
      FUN_004134c0(uVar2);
    }
    iVar1 = FUN_015c2df0();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_1c);
        *(undefined1 *)(lVar3 + 0x6c) = 0;
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_015c2e10(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}

