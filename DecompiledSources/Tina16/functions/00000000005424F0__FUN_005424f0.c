/* Ghidra address: 005424f0 */
/* Ghidra symbol: FUN_005424f0 */


undefined8 FUN_005424f0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = 0;
  FUN_00542450(param_1,&local_10);
  uVar5 = local_10;
  iVar2 = 0;
  if (local_10 != 0) {
    uVar5 = *(ulonglong *)(local_10 - 8);
    iVar2 = 0;
  }
  while (iVar4 = iVar2, 1 < (int)uVar5 - iVar4) {
    uVar1 = (longlong)(iVar4 + (int)uVar5) / 2;
    iVar2 = (int)uVar1;
    if (param_2 < *(ulonglong *)(*(longlong *)(local_10 + (longlong)iVar2 * 8) + 0x40)) {
      uVar5 = uVar1 & 0xffffffff;
      iVar2 = iVar4;
    }
  }
  lVar3 = 0;
  if (local_10 != 0) {
    lVar3 = *(longlong *)(local_10 - 8);
  }
  if (iVar4 < lVar3) {
    local_20 = *(undefined8 *)(local_10 + (longlong)iVar4 * 8);
  }
  else {
    local_20 = *(undefined8 *)(param_1 + 0x10);
  }
  FUN_00419430(&local_10,&DAT_005341c0);
  return local_20;
}

