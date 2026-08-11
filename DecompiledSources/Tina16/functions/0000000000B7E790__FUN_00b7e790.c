/* Ghidra address: 00b7e790 */
/* Ghidra symbol: FUN_00b7e790 */


void FUN_00b7e790(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_140;
  uint local_13c;
  int local_138 [66];
  
  FUN_0040d200(local_138,0x100,0);
  uVar4 = (param_3 & 0xffffffff) / 8;
  FUN_00409a70(param_2,local_138,uVar4);
  uVar5 = uVar4 / 4;
  if ((int)(uVar4 % 4) != 0) {
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  FUN_00409a70(&DAT_01e901c8,param_1 + 0x98,0x68);
  local_140 = 0;
  local_13c = 0;
  iVar1 = 0;
  iVar2 = 0;
  if ((uint)uVar5 < 0x1b) {
    uVar4 = 0x4e;
  }
  else {
    uVar4 = uVar5 * 3;
  }
  uVar3 = (uint)uVar4;
  while (uVar3 != 0) {
    iVar1 = FUN_00b7e580(*(int *)(param_1 + 0x98 + (ulonglong)local_140 * 4) + iVar1 + iVar2,3);
    *(int *)(param_1 + 0x98 + (ulonglong)local_140 * 4) = iVar1;
    iVar2 = FUN_00b7e580(local_138[local_13c] + iVar1 + iVar2);
    local_138[local_13c] = iVar2;
    local_140 = (local_140 + 1) % 0x1a;
    local_13c = (uint)((ulonglong)(local_13c + 1) % uVar5);
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
  }
  FUN_0040d200(local_138,0x100,0);
  return;
}

