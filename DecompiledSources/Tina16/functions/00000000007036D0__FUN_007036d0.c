/* Ghidra address: 007036d0 */
/* Ghidra symbol: FUN_007036d0 */


void FUN_007036d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) &&
     ((param_2 == 0 || (param_2 != *(longlong *)(param_1 + 0x498))))) goto LAB_0070375f;
  FUN_00654090(param_1);
  if (*(longlong *)(param_1 + 0x498) == 0) goto LAB_0070375f;
  FUN_00703400(param_1);
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    iVar1 = FUN_0064d120(param_1);
    if (*(int *)(*(longlong *)(param_1 + 0x498) + 0x9c) != iVar1) goto LAB_0070372c;
  }
  else {
LAB_0070372c:
    if (*(char *)(param_1 + 0x4a8) != '\x01') goto LAB_0070375f;
    iVar1 = FUN_0064d0b0(param_1);
    if (*(int *)(*(longlong *)(param_1 + 0x498) + 0x98) != iVar1) goto LAB_0070375f;
  }
  FUN_0064fca0(param_1,0x1402,0,0);
LAB_0070375f:
  uVar2 = FUN_0064fca0(param_1,0x1409,0,0);
  *(undefined4 *)(param_1 + 0x4ac) = uVar2;
  return;
}

