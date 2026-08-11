/* Ghidra address: 0185e970 */
/* Ghidra symbol: FUN_0185e970 */


void FUN_0185e970(longlong param_1)

{
  longlong lVar1;
  undefined1 local_19;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  while (0 < *(int *)(lVar1 + 0x9028)) {
    local_19 = *(undefined1 *)(lVar1 + 0x9024);
    *(uint *)(lVar1 + 0x9024) = *(uint *)(lVar1 + 0x9024) >> 8;
    *(int *)(lVar1 + 0x9028) = *(int *)(lVar1 + 0x9028) + -8;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
              (*(longlong **)(param_1 + 0x10),&local_19,1);
  }
  return;
}

