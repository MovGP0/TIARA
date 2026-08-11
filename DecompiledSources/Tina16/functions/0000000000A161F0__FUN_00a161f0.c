/* Ghidra address: 00a161f0 */
/* Ghidra symbol: FUN_00a161f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a161f0(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xe0);
  *(undefined8 **)(param_1 + 0x230) = puVar4;
  *puVar4 = &LAB_00a163b0;
  puVar4[2] = FUN_00a16400;
  puVar4[0x1b] = 0;
  if (param_2 == 0) {
    lVar8 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1,1,0x500);
    puVar4[7] = lVar8;
    auVar9._8_4_ = (int)lVar8;
    auVar9._0_8_ = lVar8;
    auVar9._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    lVar10 = auVar9._8_8_;
    lVar11 = lRam0000000001e6f728 + lVar10;
    puVar4[8] = _DAT_01e6f720 + lVar8;
    puVar4[9] = lVar11;
    lVar11 = lRam0000000001e6f738 + lVar10;
    puVar4[10] = _DAT_01e6f730 + lVar8;
    puVar4[0xb] = lVar11;
    lVar11 = lRam0000000001e6f748 + lVar10;
    puVar4[0xc] = _DAT_01e6f740 + lVar8;
    puVar4[0xd] = lVar11;
    lVar10 = lVar10 + lRam0000000001e6f758;
    puVar4[0xe] = lVar8 + _DAT_01e6f750;
    puVar4[0xf] = lVar10;
    puVar4[0x10] = lVar8 + 0x480;
    puVar4[1] = &LAB_00a16af0;
    puVar4[3] = FUN_00a16b00;
    puVar4[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x38)) {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
      lVar8 = 0;
      do {
        iVar6 = puVar7[1] * 3;
        if (*(int *)(param_1 + 0x138) == 0) {
          iVar6 = puVar7[1];
        }
        pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x28);
        uVar2 = FUN_00a1bc80(puVar7[5],*puVar7);
        uVar3 = FUN_00a1bc80(puVar7[6],puVar7[1]);
        uVar5 = (*pcVar1)(param_1,1,1,uVar2,uVar3,iVar6);
        puVar4[lVar8 + 0x11] = uVar5;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 0x18;
      } while (lVar8 < *(int *)(param_1 + 0x38));
    }
    puVar4[1] = FUN_00a16590;
    puVar4[3] = FUN_00a168f0;
    puVar4[4] = puVar4 + 0x11;
  }
  return;
}

