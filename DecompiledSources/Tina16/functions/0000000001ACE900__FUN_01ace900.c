/* Ghidra address: 01ace900 */
/* Ghidra symbol: FUN_01ace900 */


undefined8 FUN_01ace900(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  cVar1 = FUN_01d2dd00(param_1 + 0x14,param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar7 = 1;
    if (0 < iVar2) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar7 + -1);
        lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
        iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))(*(longlong **)(lVar5 + 0x70));
        iVar8 = 1;
        if (0 < iVar3) {
          do {
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                               (*(longlong **)(lVar5 + 0x70),iVar8 + -1);
            cVar1 = (**(code **)(*plVar6 + 0x88))
                              (plVar6,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
            if (cVar1 != '\0') {
              return 1;
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))(*(longlong **)(lVar5 + 0x78));
        iVar8 = 1;
        if (0 < iVar3) {
          do {
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                               (*(longlong **)(lVar5 + 0x78),iVar8 + -1);
            cVar1 = (**(code **)(*plVar6 + 0x88))
                              (plVar6,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
            if (cVar1 != '\0') {
              return 1;
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

