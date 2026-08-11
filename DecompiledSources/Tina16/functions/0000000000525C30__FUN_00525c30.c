/* Ghidra address: 00525c30 */
/* Ghidra symbol: FUN_00525c30 */


double FUN_00525c30(double param_1,double param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double local_res8;
  double local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  bVar1 = FUN_00458610(&local_res8);
  uVar5 = FUN_00458610(local_res10);
  dVar8 = *(double *)(&DAT_01dd6fe8 + (uVar5 & 0xff) * 8 + (ulonglong)bVar1 * 0x48);
  if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x3cU) != 0) {
    if ((byte)uVar5 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x3cU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar3 = FUN_00458460(&local_res8);
      iVar4 = FUN_00458460(local_res10);
      if (iVar3 - iVar4 < 0x38) {
        if (dVar8 == 0.0) {
          dVar8 = (double)FUN_0040c660(local_res8 / local_res10[0]);
        }
        else {
          dVar7 = (double)FUN_0040c660(local_res8 / local_res10[0]);
          dVar8 = dVar8 + dVar7;
        }
      }
      else {
        bVar1 = FUN_00458410(&local_res8,7);
        bVar2 = FUN_00458410(local_res10,7);
        if (0x7f < bVar1 == 0x7f < bVar2) {
          dVar8 = dVar8 + 1.5707963267948966;
        }
        else {
          dVar8 = dVar8 - 1.5707963267948966;
        }
      }
    }
  }
  return dVar8;
}

