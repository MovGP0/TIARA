/* Ghidra address: 0197d590 */
/* Ghidra symbol: FUN_0197d590 */


void FUN_0197d590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xc0))
                    (*(longlong **)(param_1 + 0x10),param_2);
  if (iVar2 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),iVar2);
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      *(int *)(lVar1 + 0x74) = *(int *)(lVar1 + 0x74) - *(int *)(param_2 + 0x74);
    }
  }
  return;
}

