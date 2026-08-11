/* Ghidra address: 00ab2360 */
/* Ghidra symbol: FUN_00ab2360 */


void FUN_00ab2360(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_c;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20);
  if (*(char *)(lVar2 + 0x581) == '\0') {
    local_1c = *(undefined4 *)(lVar2 + 0x498);
    local_c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20) + 0x4a0);
  }
  else {
    local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x174);
    local_c = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x174);
  }
  bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xb0) + 8);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      FUN_00ab1820(auStack_48);
    }
    else if (bVar1 == 0) {
      FUN_00ab1340(auStack_48);
    }
    else if (bVar1 == 1) {
      FUN_00ab21e0(auStack_48);
    }
  }
  else if (bVar1 == 3) {
    FUN_00ab1c00(auStack_48);
  }
  else if (bVar1 == 5) {
    FUN_00ab1fd0(auStack_48);
  }
  return;
}

