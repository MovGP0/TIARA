/* Ghidra address: 0199b010 */
/* Ghidra symbol: FUN_0199b010 */


void FUN_0199b010(longlong param_1,longlong *param_2)

{
  short sVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_148 [256];
  undefined8 local_48;
  longlong local_40 [2];
  
  local_48 = 0;
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 == '\x04') {
    iVar4 = (**(code **)(*param_2 + 0x1c8))();
    iVar8 = 0;
    if (-1 < iVar4 + -1) {
      do {
        iVar5 = (**(code **)(*param_2 + 0x210))(param_2,iVar8);
        (**(code **)(*param_2 + 0x240))(param_2,local_148,iVar8);
        FUN_004169a0(&local_48,local_148);
        if ((iVar5 < *(int *)(param_1 + 0x2c)) || (0x1869e < iVar5)) {
          if (iVar5 < 1) {
            if ((iVar5 == 0) && (iVar5 = (**(code **)(*param_2 + 0x230))(param_2,iVar8), -1 < iVar5)
               ) {
              uVar7 = FUN_0199ac00(param_1,iVar5);
              (**(code **)(*param_2 + 0x208))(param_2,iVar8,uVar7,0);
              FUN_019ae8a0(*(undefined8 *)(param_1 + 0x70),local_48,uVar7);
            }
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x230))(param_2,iVar8);
            uVar7 = FUN_0199ac00(param_1,uVar7);
            (**(code **)(*param_2 + 0x208))(param_2,iVar8,uVar7);
            FUN_019ae8a0(*(undefined8 *)(param_1 + 0x70),local_48,uVar7);
          }
        }
        else {
          iVar6 = FUN_004170c0(&DAT_0199b3b8,local_48,1);
          if (iVar6 == 1) {
            iVar5 = -1;
            (**(code **)(*param_2 + 0x208))(param_2,iVar8,0xffffffff);
            FUN_019aeca0(*(undefined8 *)(param_1 + 0x70),local_48);
          }
          else {
            (**(code **)(*param_2 + 0x208))(param_2,iVar8,iVar5 + *(int *)(param_1 + 0x28));
            FUN_019ae8a0(*(undefined8 *)(param_1 + 0x70),local_48,iVar5 + *(int *)(param_1 + 0x28));
          }
          iVar5 = iVar5 + *(int *)(param_1 + 0x28);
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(param_1 + 0x24) <= iVar5) {
            iVar6 = iVar5;
          }
          *(int *)(param_1 + 0x24) = iVar6;
        }
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_01cfd2d0();
    iVar8 = 0;
    if (-1 < iVar4 + -1) {
      do {
        cVar2 = FUN_01cfd030(param_2,iVar8);
        if (cVar2 == '\t') {
          (**(code **)(*param_2 + 0x2d0))(param_2,iVar8,local_40);
          sVar1 = *(short *)(local_40[0] + 0x1f);
          iVar5 = (int)sVar1;
          FUN_004169a0(&local_48,local_40[0]);
          if (((int)sVar1 < *(int *)(param_1 + 0x2c)) || (0x1869e < sVar1)) {
            if (sVar1 < 1) {
              if ((sVar1 == 0) && (-1 < *(short *)(local_40[0] + 0x23))) {
                uVar3 = FUN_0199ac00(param_1,(int)*(short *)(local_40[0] + 0x23));
                *(undefined2 *)(local_40[0] + 0x1f) = uVar3;
              }
            }
            else {
              uVar3 = FUN_0199ac00(param_1,(longlong)*(short *)(local_40[0] + 0x23));
              *(undefined2 *)(local_40[0] + 0x1f) = uVar3;
            }
          }
          else {
            iVar6 = FUN_004170c0(&DAT_0199b3b8,local_48,1);
            if (iVar6 == 1) {
              iVar5 = -1;
              *(undefined2 *)(local_40[0] + 0x1f) = 0xffff;
              FUN_019aeca0(*(undefined8 *)(param_1 + 0x70),local_48);
            }
            else {
              *(short *)(local_40[0] + 0x1f) = sVar1 + *(short *)(param_1 + 0x28);
            }
            iVar6 = *(int *)(param_1 + 0x24);
            if (*(int *)(param_1 + 0x24) <= iVar5) {
              iVar6 = iVar5;
            }
            *(int *)(param_1 + 0x24) = iVar6;
          }
        }
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&local_48);
  return;
}

