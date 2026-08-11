/* Ghidra address: 01c72c70 */
/* Ghidra symbol: FUN_01c72c70 */


void FUN_01c72c70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_00b89270();
  if (*(char *)(lVar1 + 0x2e) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))
              (*(longlong **)(param_1 + 0x708),
               CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x700) >> 8),
                        0 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8)));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8) + *(int *)(param_1 + 0x1b50);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
              (*(longlong **)(param_1 + 0x710),
               CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < *(int *)(param_1 + 0x1b4c)));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
              (*(longlong **)(param_1 + 0x710),
               CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x700) >> 8),
                        0 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8)));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8) + *(int *)(param_1 + 0x1b50);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))
              (*(longlong **)(param_1 + 0x708),
               CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < *(int *)(param_1 + 0x1b4c)));
  }
  return;
}

