/* Ghidra address: 00ab6b60 */
/* Ghidra symbol: FUN_00ab6b60 */


int FUN_00ab6b60(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  int iVar5;
  bool bVar6;
  longlong local_50;
  longlong local_48;
  longlong local_40 [2];
  
  iVar5 = 0;
  while( true ) {
    while( true ) {
      if (param_4 < 1) {
        return iVar5;
      }
      iVar1 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0xf8),
                           (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,local_40);
      iVar2 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0x100),
                           (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,&local_48);
      if ((iVar1 != 0) && (iVar2 != 0)) break;
      if (iVar1 != 0) {
        local_40[0] = local_48;
      }
      uVar4 = (undefined7)((ulonglong)local_40[0] >> 8);
      if (*(byte *)(local_40[0] + 0x60) < 8) {
        bVar6 = ((int)CONCAT71(uVar4,1) << (*(byte *)(local_40[0] + 0x60) & 0x1f) & 0x60U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        if (*(byte *)(local_40[0] + 0x4c) < 8) {
          bVar6 = ((int)CONCAT71(uVar4,1) << (*(byte *)(local_40[0] + 0x4c) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          iVar1 = FUN_00ac4f20(local_40[0]);
          iVar5 = iVar5 + iVar1;
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 2;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    iVar2 = FUN_00a949e0(*(undefined8 *)(param_1 + 0x118),
                         (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,
                         *(undefined4 *)(param_1 + 0x6c),&local_50);
    if (param_4 <= iVar2) {
      iVar2 = param_4;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    FUN_00a4df80(*(undefined8 *)(local_50 + 0x38),param_2);
    uVar3 = FUN_005ffa40(param_2);
    iVar2 = FUN_00a71d80(uVar3,param_3,iVar1);
    iVar5 = iVar5 + (iVar2 - *(int *)(local_50 + 0x54));
    if (iVar1 == 0) break;
    param_4 = param_4 - iVar1;
    param_3 = param_3 + (longlong)iVar1 * 2;
  }
  return iVar5;
}

