/* Ghidra address: 004c48b0 */
/* Ghidra symbol: FUN_004c48b0 */


void FUN_004c48b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_004c8510(param_1,0xe);
  if (param_2 != 0) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004c8510(param_1,1);
        uVar1 = FUN_004b2070(param_2,local_24);
        FUN_004c58f0(param_1,uVar1);
        FUN_004c8510(param_1,0);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_004c8510(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = local_20;
  return;
}

