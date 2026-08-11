/* Ghidra address: 00ab6950 */
/* Ghidra symbol: FUN_00ab6950 */


undefined8
FUN_00ab6950(longlong param_1,undefined8 param_2,longlong param_3,int param_4,char param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  bool bVar6;
  int local_60;
  int iStack_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  
  local_40 = 0;
  iStack_3c = 0;
  if (param_5 != '\0') {
    while ((sVar1 = *(short *)(param_3 + -2 + (longlong)param_4 * 2), sVar1 == 8 || (sVar1 == 0x20))
          ) {
      param_4 = param_4 + -1;
    }
  }
  while (0 < param_4) {
    iVar2 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0xf8),
                         (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,&local_48);
    iVar3 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0x100),
                         (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,&local_50);
    if ((iVar2 == 0) || (iVar3 == 0)) {
      if (iVar2 != 0) {
        local_48 = local_50;
      }
      uVar5 = (undefined7)((ulonglong)local_48 >> 8);
      if (*(byte *)(local_48 + 0x60) < 8) {
        bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(local_48 + 0x60) & 0x1f) & 0x60U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        if (*(byte *)(local_48 + 0x4c) < 8) {
          bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(local_48 + 0x4c) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          iVar3 = FUN_00ac4f20(local_48);
          iVar2 = iStack_3c;
          local_40 = local_40 + iVar3;
          iStack_3c = FUN_00ac4ef0(local_48);
          if (iStack_3c < iVar2) {
            iStack_3c = iVar2;
          }
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 2;
    }
    else {
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = FUN_00a949e0(*(undefined8 *)(param_1 + 0x118),
                           (param_3 - *(longlong *)(param_1 + 0xd8)) / 2,
                           *(undefined4 *)(param_1 + 0x6c),&local_58);
      if (param_4 <= iVar3) {
        iVar3 = param_4;
      }
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      FUN_00a4df80(*(undefined8 *)(local_58 + 0x38),param_2);
      uVar4 = FUN_005ffa40(param_2);
      uVar4 = FUN_00a71d80(uVar4,param_3,iVar2);
      local_60 = (int)uVar4;
      local_40 = local_40 + local_60 + *(int *)(local_58 + 0x54);
      iStack_5c = (int)((ulonglong)uVar4 >> 0x20);
      if (iStack_3c <= iStack_5c) {
        iStack_3c = iStack_5c;
      }
      if (iVar2 == 0) break;
      param_4 = param_4 - iVar2;
      param_3 = param_3 + (longlong)iVar2 * 2;
    }
  }
  return CONCAT44(iStack_3c,local_40);
}

