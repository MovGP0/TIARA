/* Ghidra address: 00a249a0 */
/* Ghidra symbol: FUN_00a249a0 */


void FUN_00a249a0(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (param_3 == 0) {
    puVar5 = (undefined8 *)**(longlong **)(param_1 + 0x38);
    *(undefined4 *)(puVar5 + 5) = 0x28;
    (*(code *)*puVar5)();
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 == 0) {
    uVar12 = iVar9 + param_3;
    uVar11 = ((1 << ((byte)param_3 & 0x1f)) - 1U & param_2) << (0x18U - (char)uVar12 & 0x1f) |
             *(uint *)(param_1 + 0x30);
    if (7 < (int)uVar12) {
      uVar10 = 0xfffffff0;
      if (-0x11 < (int)~uVar12) {
        uVar10 = ~uVar12;
      }
      param_3 = iVar9 + 8 + param_3;
      do {
        puVar3 = *(undefined1 **)(param_1 + 0x20);
        *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
        *puVar3 = (char)(uVar11 >> 0x10);
        plVar1 = (longlong *)(param_1 + 0x28);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x28);
          iVar9 = (**(code **)(puVar4 + 6))();
          if (iVar9 == 0) {
            puVar5 = (undefined8 *)**(longlong **)(param_1 + 0x38);
            *(undefined4 *)(puVar5 + 5) = 0x18;
            (*(code *)*puVar5)();
          }
          uVar6 = puVar4[1];
          uVar7 = puVar4[2];
          uVar8 = puVar4[3];
          *(undefined4 *)(param_1 + 0x20) = *puVar4;
          *(undefined4 *)(param_1 + 0x24) = uVar6;
          *(undefined4 *)(param_1 + 0x28) = uVar7;
          *(undefined4 *)(param_1 + 0x2c) = uVar8;
        }
        if ((uVar11 >> 0x10 & 0xff) == 0xff) {
          puVar3 = *(undefined1 **)(param_1 + 0x20);
          *(undefined1 **)(param_1 + 0x20) = puVar3 + 1;
          *puVar3 = 0;
          plVar1 = (longlong *)(param_1 + 0x28);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x28);
            iVar9 = (**(code **)(puVar4 + 6))();
            if (iVar9 == 0) {
              puVar5 = (undefined8 *)**(longlong **)(param_1 + 0x38);
              *(undefined4 *)(puVar5 + 5) = 0x18;
              (*(code *)*puVar5)();
            }
            uVar6 = puVar4[1];
            uVar7 = puVar4[2];
            uVar8 = puVar4[3];
            *(undefined4 *)(param_1 + 0x20) = *puVar4;
            *(undefined4 *)(param_1 + 0x24) = uVar6;
            *(undefined4 *)(param_1 + 0x28) = uVar7;
            *(undefined4 *)(param_1 + 0x2c) = uVar8;
          }
        }
        uVar11 = uVar11 << 8;
        param_3 = param_3 + -8;
      } while (0xf < param_3);
      uVar12 = (uVar12 - 8) - (uVar12 + 8 + uVar10 & 0xfffffff8);
    }
    *(uint *)(param_1 + 0x30) = uVar11;
    *(uint *)(param_1 + 0x34) = uVar12;
  }
  return;
}

