/* Ghidra address: 00e817c0 */
/* Ghidra symbol: FUN_00e817c0 */


int FUN_00e817c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  
  *(longlong *)(param_1 + 0x78) =
       *(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0xac) * 2;
  do {
    while( true ) {
      psVar3 = *(short **)(param_1 + 0x78);
      if (*(short **)(param_1 + 0x88) <= psVar3) {
        return 0;
      }
      if (*(short *)(*(longlong *)(param_1 + 0x90) + -2 + (longlong)*(int *)(param_1 + 0xac) * 2) ==
          *psVar3) break;
      *(longlong *)(param_1 + 0x78) =
           *(longlong *)(param_1 + 0x78) +
           (longlong)*(int *)(param_1 + 0xb4 + (ulonglong)(ushort)psVar3[1] * 4) * 2;
    }
    iVar2 = 1;
    for (psVar3 = psVar3 + (1 - (longlong)*(int *)(param_1 + 0xac));
        *(short *)(*(longlong *)(param_1 + 0x90) + -2 + (longlong)iVar2 * 2) == *psVar3;
        psVar3 = psVar3 + 1) {
      if (iVar2 == *(int *)(param_1 + 0xac)) {
        if ((*(char *)(param_1 + 0x400b5) == '\0') || (cVar1 = FUN_00e81760(param_1), cVar1 != '\0')
           ) {
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          return ((int)((*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x80)) / 2) -
                 *(int *)(param_1 + 0xac)) + 2;
        }
        break;
      }
      iVar2 = iVar2 + 1;
    }
    *(longlong *)(param_1 + 0x78) =
         *(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0xa8) * 2;
    if (*(ushort **)(param_1 + 0x88) <= *(ushort **)(param_1 + 0x78)) {
      return 0;
    }
    *(longlong *)(param_1 + 0x78) =
         *(longlong *)(param_1 + 0x78) +
         (longlong)(*(int *)(param_1 + 0xb4 + (ulonglong)**(ushort **)(param_1 + 0x78) * 4) + -1) *
         2;
  } while( true );
}

