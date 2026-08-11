/* Ghidra address: 00447de0 */
/* Ghidra symbol: FUN_00447de0 */


int FUN_00447de0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  
  sVar2 = FUN_00447c80(param_1);
  iVar3 = 0;
  while( true ) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0x8c) * 2);
    uVar4 = uVar1 - 0x30;
    if (uVar4 < 0x10) {
      uVar5 = (int)CONCAT62((int6)(param_4 >> 0x10),1) << ((byte)uVar4 & 0x1f);
      param_4 = (ulonglong)uVar5;
      bVar6 = (uVar5 & 0x3ff) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) break;
    iVar3 = iVar3 * 10 + (uint)uVar1 + -0x30;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  return iVar3 * sVar2;
}

