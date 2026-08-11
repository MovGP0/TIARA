/* Ghidra address: 0185e9d0 */
/* Ghidra symbol: FUN_0185e9d0 */


void FUN_0185e9d0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 local_29 [9];
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  while (7 < *(int *)(lVar1 + 0x9028)) {
    local_29[0] = *(undefined1 *)(lVar1 + 0x9024);
    *(uint *)(lVar1 + 0x9024) = *(uint *)(lVar1 + 0x9024) >> 8;
    *(int *)(lVar1 + 0x9028) = *(int *)(lVar1 + 0x9028) + -8;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),local_29,1)
    ;
  }
  *(uint *)(lVar1 + 0x9024) = *(uint *)(lVar1 + 0x9024) & 0xff;
  *(uint *)(lVar1 + 0x9024) =
       *(uint *)(lVar1 + 0x9024) | param_2 << (*(byte *)(lVar1 + 0x9028) & 0x1f);
  *(int *)(lVar1 + 0x9028) = *(int *)(lVar1 + 0x9028) + *(int *)(lVar1 + 0x9020);
  return;
}

