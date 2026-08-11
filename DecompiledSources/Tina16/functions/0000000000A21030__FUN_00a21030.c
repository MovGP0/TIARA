/* Ghidra address: 00a21030 */
/* Ghidra symbol: FUN_00a21030 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a21030(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xc0);
  *(undefined8 **)(param_1 + 0x1c8) = puVar4;
  *puVar4 = FUN_00a21160;
  if (param_2 == 0) {
    lVar7 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1,1,0x500);
    puVar4[4] = lVar7;
    auVar8._8_4_ = (int)lVar7;
    auVar8._0_8_ = lVar7;
    auVar8._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
    lVar9 = auVar8._8_8_;
    lVar10 = lRam0000000001e70598 + lVar9;
    puVar4[5] = _DAT_01e70590 + lVar7;
    puVar4[6] = lVar10;
    lVar10 = lRam0000000001e705a8 + lVar9;
    puVar4[7] = _DAT_01e705a0 + lVar7;
    puVar4[8] = lVar10;
    lVar10 = lRam0000000001e705b8 + lVar9;
    puVar4[9] = _DAT_01e705b0 + lVar7;
    puVar4[10] = lVar10;
    lVar9 = lVar9 + lRam0000000001e705c8;
    puVar4[0xb] = lVar7 + _DAT_01e705c0;
    puVar4[0xc] = lVar9;
    puVar4[0xd] = lVar7 + 0x480;
    puVar4[0xe] = 0;
  }
  else if (0 < *(int *)(param_1 + 0x4c)) {
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + 8);
    lVar7 = 0;
    do {
      pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x28);
      uVar2 = FUN_00a1bc80(puVar6[5],*puVar6);
      uVar3 = FUN_00a1bc80(puVar6[6],puVar6[1]);
      uVar5 = (*pcVar1)(param_1,1,0,uVar2,uVar3,puVar6[1]);
      puVar4[lVar7 + 0xe] = uVar5;
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 0x18;
    } while (lVar7 < *(int *)(param_1 + 0x4c));
  }
  return;
}

