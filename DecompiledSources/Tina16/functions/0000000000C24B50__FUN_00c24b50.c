/* Ghidra address: 00c24b50 */
/* Ghidra symbol: FUN_00c24b50 */


void FUN_00c24b50(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  pbVar5 = *(byte **)(lVar2 + 0x30);
  pbVar1 = pbVar5 + (uint)*(ushort *)(lVar2 + 0x4d) * (uint)*(ushort *)(lVar2 + 0x4f);
  for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 1) {
    *pbVar5 = *(byte *)(param_2 + (ulonglong)*pbVar5);
  }
  cVar4 = FUN_00c2a4a0(*(undefined8 *)(param_1 + 0x18));
  if (cVar4 != '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60);
    uVar6 = FUN_00c2e3e0(uVar3);
    FUN_00c2e3f0(uVar3,*(undefined1 *)(param_2 + (uVar6 & 0xff)));
  }
  return;
}

