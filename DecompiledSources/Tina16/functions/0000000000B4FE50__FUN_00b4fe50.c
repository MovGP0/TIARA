/* Ghidra address: 00b4fe50 */
/* Ghidra symbol: FUN_00b4fe50 */


void FUN_00b4fe50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  while( true ) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),(longlong)iVar1);
    iVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x48) +
            (*(int *)(param_1 + 0x98) - (uint)*(ushort *)(param_1 + 0x78));
    if (((((int)(uint)*(ushort *)(param_1 + 0x80) < iVar1) ||
         (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x78))) ||
        ((int)(uint)*(ushort *)(param_1 + 0x90) <
         (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x4a) +
              (*(int *)(param_1 + 0xa0) - (uint)*(ushort *)(param_1 + 0x88))))) ||
       ((int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x4a) +
             (*(int *)(param_1 + 0xa0) - (uint)*(ushort *)(param_1 + 0x88))) <
        (int)(uint)*(ushort *)(param_1 + 0x88))) {
      return;
    }
    uVar2 = FUN_00b4fb40(*(undefined8 *)(param_1 + 0x70),iVar1,
                         (uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x4a) +
                         (*(int *)(param_1 + 0xa0) - (uint)*(ushort *)(param_1 + 0x88)));
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))
                      (*(longlong **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x38));
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x34) <= iVar1) break;
    if (*(char *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1) == '\x01') {
      return;
    }
  }
  return;
}

