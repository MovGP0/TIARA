/* Ghidra address: 00a16400 */
/* Ghidra symbol: FUN_00a16400 */


void FUN_00a16400(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 *puVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  lVar5 = *(longlong *)(param_1 + 0x230);
  if (*(longlong *)(lVar5 + 0x20) == 0) goto LAB_00a1656c;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x138) == 0)) ||
     (*(longlong *)(param_1 + 0xc0) == 0)) {
LAB_00a16561:
    pcVar10 = FUN_00a168f0;
  }
  else {
    lVar11 = *(longlong *)(lVar5 + 0xd8);
    if (lVar11 == 0) {
      lVar11 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1);
      *(longlong *)(lVar5 + 0xd8) = lVar11;
      if (0 < *(int *)(param_1 + 0x38)) goto LAB_00a1648f;
      goto LAB_00a16561;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_00a16561;
LAB_00a1648f:
    puVar9 = (undefined4 *)(lVar11 + 0x14);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x50);
    lVar12 = 0;
    lVar11 = 5;
    bVar8 = false;
    do {
      psVar6 = (short *)*puVar13;
      if (((((psVar6 == (short *)0x0) || (*psVar6 == 0)) ||
           ((psVar6[1] == 0 || ((psVar6[8] == 0 || (psVar6[0x10] == 0)))))) || (psVar6[9] == 0)) ||
         ((psVar6[2] == 0 ||
          (lVar7 = *(longlong *)(param_1 + 0xc0), *(int *)(lVar7 + -0x14 + lVar11 * 4) < 0))))
      goto LAB_00a16561;
      puVar9[-4] = *(undefined4 *)(lVar7 + -0x10 + lVar11 * 4);
      iVar1 = *(int *)(lVar7 + -0x10 + lVar11 * 4);
      puVar9[-3] = *(undefined4 *)(lVar7 + -0xc + lVar11 * 4);
      iVar2 = *(int *)(lVar7 + -0xc + lVar11 * 4);
      puVar9[-2] = *(undefined4 *)(lVar7 + -8 + lVar11 * 4);
      iVar3 = *(int *)(lVar7 + -8 + lVar11 * 4);
      puVar9[-1] = *(undefined4 *)(lVar7 + -4 + lVar11 * 4);
      iVar4 = *(int *)(lVar7 + -4 + lVar11 * 4);
      *puVar9 = *(undefined4 *)(lVar7 + lVar11 * 4);
      if ((((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) || iVar4 != 0) ||
          *(int *)(lVar7 + lVar11 * 4) != 0) {
        bVar8 = true;
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x40;
      puVar9 = puVar9 + 6;
      puVar13 = puVar13 + 0xc;
    } while (lVar12 < *(int *)(param_1 + 0x38));
    if (!bVar8) goto LAB_00a16561;
    pcVar10 = FUN_00a16df0;
  }
  *(code **)(lVar5 + 0x18) = pcVar10;
LAB_00a1656c:
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

