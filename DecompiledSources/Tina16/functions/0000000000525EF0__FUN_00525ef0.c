/* Ghidra address: 00525ef0 */
/* Ghidra symbol: FUN_00525ef0 */


float FUN_00525ef0(float param_1,float param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  double dVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [6];
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  bVar1 = FUN_00458160(local_res8);
  uVar5 = FUN_00458160(local_res10);
  fVar8 = *(float *)(&DAT_01dd74f8 + (uVar5 & 0xff) * 4 + (ulonglong)bVar1 * 0x24);
  if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x3cU) != 0) {
    if ((byte)uVar5 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x3cU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar3 = FUN_004580f0(local_res8);
      iVar4 = FUN_004580f0(local_res10);
      if (iVar3 - iVar4 < 0x1a) {
        if (fVar8 == 0.0) {
          dVar7 = (double)FUN_0040c660((double)(local_res8[0] / local_res10[0]));
          fVar8 = (float)dVar7;
        }
        else {
          dVar7 = (double)FUN_0040c660((double)(local_res8[0] / local_res10[0]));
          fVar8 = (float)((double)fVar8 + dVar7);
        }
      }
      else {
        bVar1 = FUN_00458070(local_res8,3);
        bVar2 = FUN_00458070(local_res10,3);
        if (0x7f < bVar1 == 0x7f < bVar2) {
          fVar8 = fVar8 + 1.5707964;
        }
        else {
          fVar8 = fVar8 - 1.5707964;
        }
      }
    }
  }
  return fVar8;
}

