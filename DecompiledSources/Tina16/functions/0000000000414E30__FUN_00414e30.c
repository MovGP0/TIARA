/* Ghidra address: 00414e30 */
/* Ghidra symbol: FUN_00414e30 */


int FUN_00414e30(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte local_218;
  undefined4 local_217 [63];
  byte local_118;
  undefined4 local_117 [63];
  
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar6 = &local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar6 = *param_1;
    param_1 = param_1 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar6 = &local_218;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
  }
  pbVar6 = (byte *)local_117;
  pbVar7 = (byte *)local_217;
  uVar4 = (uint)local_118;
  uVar2 = uVar4;
  if ((uint)local_218 < (uint)local_118) {
    uVar2 = (uint)local_218;
  }
  while( true ) {
    if ((uVar2 < 4) || (*(int *)pbVar6 != *(int *)pbVar7)) goto code_r0x00414ec3;
    if ((uVar2 < 8) || (*(int *)(pbVar6 + 4) != *(int *)(pbVar7 + 4))) break;
    pbVar6 = pbVar6 + 8;
    pbVar7 = pbVar7 + 8;
    uVar2 = uVar2 - 8;
  }
  pbVar6 = pbVar6 + 4;
  pbVar7 = pbVar7 + 4;
  uVar2 = uVar2 - 4;
code_r0x00414ec3:
  uVar5 = (uint)local_218;
  if (uVar2 == 0) {
    iVar1 = local_118 - uVar5;
  }
  else {
    iVar1 = (uint)*pbVar6 - (uint)*pbVar7;
    if (iVar1 == 0) {
      if (uVar2 == 1) {
        iVar1 = local_118 - uVar5;
      }
      else {
        iVar1 = (uint)pbVar6[1] - (uint)pbVar7[1];
        if (iVar1 == 0) {
          if (uVar2 == 2) {
            iVar1 = uVar4 - uVar5;
          }
          else {
            iVar1 = (uint)pbVar6[2] - (uint)pbVar7[2];
            if (iVar1 == 0) {
              if (uVar2 == 3) {
                iVar1 = uVar4 - uVar5;
              }
              else {
                iVar1 = (uint)pbVar6[3] - (uint)pbVar7[3];
                if (iVar1 == 0) {
                  iVar1 = uVar4 - uVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

