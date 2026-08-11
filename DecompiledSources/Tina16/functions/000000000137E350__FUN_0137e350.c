/* Ghidra address: 0137e350 */
/* Ghidra symbol: FUN_0137e350 */


/* WARNING: Type propagation algorithm not settling */

double FUN_0137e350(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double unaff_XMM6_Qa;
  double dVar9;
  int local_8c;
  double local_78 [9];
  
  dVar9 = 0.0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((int)(uint)param_2 <= iVar2 + -1) {
    dVar7 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011051a8);
    if (*(longlong *)(lVar5 + 0xd8) != 0) {
      uVar1 = (uint)*(ushort *)(lVar5 + 0xe0) * 2;
      FUN_00c42780(0x4000000000000000,(double)uVar1);
      FUN_0040c770();
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      iVar2 = *(int *)(param_1 + 0x108);
      if (iVar2 < 4) {
        if (iVar2 == 3) {
          FUN_010bf680(local_78 + 1,local_78);
        }
        else if (iVar2 == 0) {
          local_78[1] = 1.0;
          local_78[0] = 1.0;
        }
        else if (iVar2 == 1) {
          FUN_010bf640(local_78 + 1,local_78);
        }
        else if (iVar2 == 2) {
          FUN_010bf6a0(local_78 + 1,local_78);
        }
      }
      else if (iVar2 == 4) {
        FUN_010bf660(local_78 + 1,local_78);
      }
      else if (iVar2 == 5) {
        FUN_010bf620(local_78 + 1,local_78);
      }
      else if (iVar2 == 6) {
        local_78[1] = 1.0;
      }
      iVar3 = FUN_0040c840(((*(double *)(param_1 + 0xa0) / *(double *)(param_1 + 0xa8)) *
                           (double)uVar1) / 2.0);
      FUN_0040c840(((double)uVar1 / 2.0 - dVar7) + 1.0);
      dVar7 = (*(double *)(param_1 + 0xa8) * 2.0) / (double)uVar1;
      local_8c = FUN_00526350((local_78[0] * dVar7) / dVar7,(ulonglong)uVar1 % 2,2);
      dVar7 = 0.0;
      iVar2 = -1;
      if (local_8c < iVar3) {
        local_8c = iVar3;
      }
      iVar6 = uVar1 / 2 - 1;
      if (local_8c <= iVar6) {
        iVar6 = (iVar6 - local_8c) + 1;
        dVar7 = 0.0;
        do {
          dVar8 = (double)FUN_00c44590(*(longlong *)(lVar5 + 0xd8) + (longlong)local_8c * 0x10);
          if (dVar7 < dVar8) {
            iVar2 = local_8c;
            dVar7 = dVar8;
          }
          local_8c = local_8c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (0 < iVar2) {
        dVar9 = 0.0;
        iVar6 = uVar1 / 2 - 1;
        if (iVar3 <= iVar6) {
          iVar6 = (iVar6 - iVar3) + 1;
          dVar9 = 0.0;
          local_8c = iVar3;
          do {
            if ((local_8c % iVar2 == 0) && (local_8c != iVar2)) {
              dVar8 = (double)FUN_00c44590(*(longlong *)(lVar5 + 0xd8) + (longlong)local_8c * 0x10);
              dVar9 = dVar9 + dVar8 * dVar8;
            }
            local_8c = local_8c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        dVar9 = (double)FUN_0040c760(dVar9);
        dVar9 = dVar9 / dVar7;
      }
      unaff_XMM6_Qa = dVar9 * 100.0;
    }
  }
  return unaff_XMM6_Qa;
}

