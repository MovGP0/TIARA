/* Ghidra address: 018a9b90 */
/* Ghidra symbol: FUN_018a9b90 */


undefined8 FUN_018a9b90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x578) != 0) &&
      (iVar1 = FUN_004b2060(*(longlong *)(param_1 + 0x578)), iVar1 != 0)) &&
     (-1 < *(int *)(*(longlong *)(param_1 + 0x578) + 0x40))) {
    lVar3 = FUN_018b0ad0(*(longlong *)(param_1 + 0x578),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x578) + 0x40));
    return *(undefined8 *)(lVar3 + 0x30);
  }
  uVar2 = FUN_0197c4e0(param_1);
  return uVar2;
}

