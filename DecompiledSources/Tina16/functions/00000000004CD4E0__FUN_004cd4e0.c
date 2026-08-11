/* Ghidra address: 004cd4e0 */
/* Ghidra symbol: FUN_004cd4e0 */


ulonglong FUN_004cd4e0(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong local_10;
  
  local_10 = 0;
  uVar3 = param_2;
  FUN_004c9a40(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1e0),param_2);
  while( true ) {
    sVar2 = FUN_004c9210(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1e0));
    if (sVar2 != 0x2b) break;
    FUN_004c9210(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1e0));
    uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x1e0) + 0x56);
    if (uVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x24U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      FUN_004c8ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1e0),2);
    }
    FUN_004c9a40(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x1e0),&local_10);
    uVar3 = local_10;
    FUN_00416ad0(param_2,local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

