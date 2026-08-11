/* Ghidra address: 00b52e00 */
/* Ghidra symbol: FUN_00b52e00 */


void FUN_00b52e00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  while( true ) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x70),(longlong)iVar1);
    iVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x68) + 0x3e) +
            (*(int *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xa8));
    if (((int)(uint)*(ushort *)(param_1 + 0xb0) < iVar1) ||
       (iVar1 < (int)(uint)*(ushort *)(param_1 + 0xa8))) {
      return;
    }
    uVar2 = FUN_00b52ce0(*(undefined8 *)(param_1 + 0xa0),iVar1);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
                      (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x68));
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(param_1 + 100) <= iVar1) break;
    if (*(char *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1) == '\x01') {
      return;
    }
  }
  return;
}

