/* Ghidra address: 0176c920 */
/* Ghidra symbol: FUN_0176c920 */


ulonglong FUN_0176c920(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_0176a500(param_1,param_2);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)(*(longlong *)(param_2 + 8) + 0x10);
    uVar2 = (ulonglong)
            CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  return uVar2;
}

