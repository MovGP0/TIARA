/* Ghidra address: 0044c460 */
/* Ghidra symbol: FUN_0044c460 */


undefined4 FUN_0044c460(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = 0;
  iVar3 = 0;
  while (*(int *)(DAT_0200c660 + 8 + (longlong)iVar3 * 0x20) != -1) {
    lVar2 = 0;
    if (DAT_0200c660 != 0) {
      lVar2 = *(longlong *)(DAT_0200c660 + -8);
    }
    if ((longlong)iVar3 == lVar2 + -1) goto LAB_0044c4ea;
    iVar3 = iVar3 + 1;
  }
  FUN_004167d0(local_20,param_1);
  uVar1 = FUN_0043fc50(local_20[0],0);
  *(undefined4 *)(DAT_0200c660 + 8 + (longlong)iVar3 * 0x20) = uVar1;
  local_24 = 1;
LAB_0044c4ea:
  FUN_00414480(local_20);
  return local_24;
}

