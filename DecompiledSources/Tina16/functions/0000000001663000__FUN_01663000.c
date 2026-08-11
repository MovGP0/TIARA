/* Ghidra address: 01663000 */
/* Ghidra symbol: FUN_01663000 */


void FUN_01663000(longlong param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  (**(code **)(param_1 + 0x168))();
  lVar2 = *(longlong *)(param_1 + 0x130);
  iVar8 = *(int *)(lVar2 + 0x30c) + *(int *)(lVar2 + 0x310) + *(int *)(lVar2 + 0x314) + -1;
  iVar6 = 1;
  if (0 < iVar8) {
    do {
      lVar7 = (longlong)iVar6;
      cVar4 = FUN_00526f10(*(undefined8 *)(*(longlong *)(lVar2 + 0x118) + lVar7 * 8));
      if (cVar4 != '\0') {
        FUN_0040d200(*(undefined8 *)(lVar2 + 0x118),
                     (longlong)
                     ((*(int *)(lVar2 + 0x30c) + *(int *)(lVar2 + 0x310) + *(int *)(lVar2 + 0x314))
                     * 8),0);
        uVar5 = FUN_0044d490(&PTR_FUN_00435a90,1);
        FUN_004134c0(uVar5);
      }
      lVar3 = *(longlong *)(lVar2 + 0x118);
      if (*(double *)(lVar3 + lVar7 * 8) <= 100000000000000.0) {
        pdVar1 = (double *)(*(longlong *)(lVar2 + 0x118) + (longlong)iVar6 * 8);
        if (*pdVar1 <= -100000000000000.0 && *pdVar1 != -100000000000000.0) {
          *(undefined8 *)(lVar3 + lVar7 * 8) = 0xc2d6bcc41e900000;
        }
      }
      else {
        *(undefined8 *)(lVar3 + lVar7 * 8) = 0x42d6bcc41e900000;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

