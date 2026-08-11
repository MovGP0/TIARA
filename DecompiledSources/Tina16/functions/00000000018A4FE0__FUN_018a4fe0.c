/* Ghidra address: 018a4fe0 */
/* Ghidra symbol: FUN_018a4fe0 */


void FUN_018a4fe0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8);
  iVar1 = FUN_006decb0(*(undefined8 *)(local_20 + 0x550));
  if (iVar1 != 0) {
    FUN_006df690(*(undefined8 *)(local_20 + 0x550));
    iVar1 = FUN_006decb0();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_006df500(*(undefined8 *)(local_20 + 0x550),local_24);
        FUN_006dd0c0(uVar2,param_2);
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_006df710(*(undefined8 *)(local_20 + 0x550));
  }
  return;
}

