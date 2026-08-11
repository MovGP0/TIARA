/* Ghidra address: 00b7f210 */
/* Ghidra symbol: FUN_00b7f210 */


void FUN_00b7f210(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint local_140;
  uint local_13c;
  int local_138 [66];
  
  uVar1 = (param_3 & 0xffffffff) / 8;
  FUN_0040d200(local_138,0x100,0);
  FUN_00409a70(param_2,local_138,uVar1);
  uVar4 = uVar1 / 4;
  if ((int)(uVar1 % 4) != 0) {
    uVar4 = (ulonglong)((int)uVar4 + 1);
  }
  FUN_00409a70(&DAT_01e90300,param_1 + 0xa8,0xb0);
  local_140 = 0;
  local_13c = 0;
  iVar2 = 0;
  iVar3 = 0;
  if ((uint)uVar4 < 0x2d) {
    iVar5 = 0x84;
  }
  else {
    iVar5 = (uint)uVar4 * 3;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar2 = FUN_00b7f000(*(int *)(param_1 + 0xa8 + (ulonglong)local_140 * 4) + iVar2 + iVar3,3);
    *(int *)(param_1 + 0xa8 + (ulonglong)local_140 * 4) = iVar2;
    iVar3 = FUN_00b7f000(local_138[local_13c] + iVar2 + iVar3);
    local_138[local_13c] = iVar3;
    local_140 = (local_140 + 1) % 0x2c;
    local_13c = (uint)((ulonglong)(local_13c + 1) % uVar4);
  }
  FUN_0040d200(local_138,0x100,0);
  return;
}

