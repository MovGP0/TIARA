/* Ghidra address: 006298b0 */
/* Ghidra symbol: FUN_006298b0 */


int FUN_006298b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_0062a220();
  if (iVar2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x44) * 2;
    lVar3 = *(longlong *)(lVar1 + 0x68);
    uVar4 = (ulonglong)(*(int *)(lVar1 + 0x74) - 1);
    *(undefined2 *)(lVar3 + uVar4 * 2) = 0;
    FUN_00626680(lVar3,0,uVar4 * 2);
    lVar3 = (longlong)*(int *)(lVar1 + 0xac) * 0x10;
    *(uint *)(lVar1 + 0xa8) = (uint)*(ushort *)(&DAT_01df1d52 + lVar3);
    *(uint *)(lVar1 + 0xb4) = (uint)*(ushort *)(&DAT_01df1d50 + lVar3);
    *(uint *)(lVar1 + 0xb8) = (uint)*(ushort *)(&DAT_01df1d54 + lVar3);
    *(uint *)(lVar1 + 0xa4) = (uint)*(ushort *)(&DAT_01df1d56 + lVar3);
    *(undefined8 *)(lVar1 + 0x84) = 0x200000000;
    *(undefined8 *)(lVar1 + 0x9c) = 0x200000000;
    *(undefined4 *)(lVar1 + 0x170c) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined4 *)(lVar1 + 0x70) = 0;
  }
  return iVar2;
}

