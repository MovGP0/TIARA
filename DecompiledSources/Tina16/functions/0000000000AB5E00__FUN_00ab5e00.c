/* Ghidra address: 00ab5e00 */
/* Ghidra symbol: FUN_00ab5e00 */


int FUN_00ab5e00(longlong param_1,undefined8 param_2,int param_3,longlong param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  int iVar7;
  bool bVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if ((param_3 != DAT_01e7915c) || (param_4 != DAT_01e79150)) {
    local_50 = 0;
    local_4c = 0;
    iVar7 = 0;
    DAT_01e79150 = param_4;
    DAT_01e7915c = param_3;
    local_58 = param_4;
    while( true ) {
      iVar2 = FUN_00a949e0(*(undefined8 *)(param_1 + 0x118),
                           (local_58 - *(longlong *)(param_1 + 0xd8)) / 2,
                           *(undefined4 *)(param_1 + 0x6c),&local_40);
      FUN_00a4df80(*(undefined8 *)(local_40 + 0x38),param_2);
      iVar3 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0xf8),
                           (local_58 - *(longlong *)(param_1 + 0xd8)) / 2,&local_30);
      iVar4 = FUN_00ac50d0(*(undefined8 *)(param_1 + 0x100),
                           (local_58 - *(longlong *)(param_1 + 0xd8)) / 2,&local_38);
      if ((iVar3 == 0) || (iVar4 == 0)) {
        if (iVar3 != 0) {
          local_30 = local_38;
        }
        iVar2 = 1;
        iVar3 = 1;
        bVar1 = true;
        uVar6 = (undefined7)((ulonglong)local_30 >> 8);
        if (*(byte *)(local_30 + 0x60) < 8) {
          bVar8 = ((int)CONCAT71(uVar6,1) << (*(byte *)(local_30 + 0x60) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (!bVar8) {
          if (*(byte *)(local_30 + 0x4c) < 8) {
            bVar8 = ((int)CONCAT71(uVar6,1) << (*(byte *)(local_30 + 0x4c) & 0x1f) & 0xcU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (!bVar8) {
            iVar4 = FUN_00ac4f20(local_30);
            local_4c = local_4c + iVar4;
            if (param_3 < local_4c) goto code_r0x00ab6059;
          }
        }
      }
      else {
        bVar1 = false;
        if (iVar2 < iVar3) {
          iVar3 = iVar2;
        }
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
        uVar5 = FUN_005ffa40(param_2);
        iVar2 = FUN_00a71700(uVar5,local_58,iVar3,param_3 - local_4c,&local_48);
      }
      if (param_5 <= local_50 + iVar2) break;
      local_50 = local_50 + iVar2;
      if (!bVar1) {
        if ((iVar2 < iVar3) || (iVar2 == 0)) goto code_r0x00ab6059;
        local_4c = local_4c + local_48;
        if (iVar7 <= local_44) {
          iVar7 = local_44;
        }
      }
      local_58 = local_58 + (longlong)iVar2 * 2;
    }
    local_50 = param_5;
code_r0x00ab6059:
    DAT_01e79158 = local_50;
  }
  return DAT_01e79158;
}

