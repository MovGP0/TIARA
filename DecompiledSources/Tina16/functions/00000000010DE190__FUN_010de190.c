/* Ghidra address: 010de190 */
/* Ghidra symbol: FUN_010de190 */


ulonglong FUN_010de190(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RDI;
  undefined8 local_38 [2];
  undefined7 uVar8;
  
  *param_2 = 0x46293e5939a08cea;
  if (((((*(char *)(param_1 + 0x69) != '\0') && (*(char *)(param_1 + 0x68) == '\0')) &&
       (plVar2 = *(longlong **)(param_1 + 8), plVar2 != (longlong *)0x0)) &&
      ((iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2), iVar4 != 0 &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8)),
       *(int *)(param_1 + 0x1c) <= iVar4 + -1)))) && (-1 < *(int *)(param_1 + 0x1c))) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    lVar7 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
    uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
    uVar5 = (undefined4)CONCAT71(uVar8,1);
    bVar1 = *(byte *)(param_1 + 0x58);
    if (bVar1 < 2) {
      uVar5 = (undefined4)CONCAT71(uVar8,1);
    }
    else if ((byte)(bVar1 - 2) < 2) {
      uVar5 = (undefined4)CONCAT71(uVar8,2);
    }
    else if (bVar1 == 4) {
      uVar5 = (undefined4)CONCAT71(uVar8,3);
    }
    else if (bVar1 == 5) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x88);
      if (lVar7 != 0) {
        uVar6 = FUN_004113f0(lVar7,&PTR_FUN_01133e90);
        uVar6 = FUN_01139050(uVar6);
        *param_2 = uVar6;
      }
      goto LAB_010de3f6;
    }
    cVar3 = FUN_0153a250(uVar5,*(undefined8 *)(lVar7 + 0x18));
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_1 + 0x58);
      if (cVar3 == '\0') {
        FUN_010dd4f0(*(undefined8 *)(lVar7 + 0x18),
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x408) + 0x488),0
                     ,1);
      }
      else if (cVar3 == '\x01') {
        FUN_010dd4f0(*(undefined8 *)(lVar7 + 0x18),
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x408) + 0x488),1
                     ,1);
      }
      else if (cVar3 == '\x02') {
        FUN_010dd4f0(*(undefined8 *)(lVar7 + 0x18),
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x408) + 0x488),0
                     ,0);
      }
      else {
        if (cVar3 != '\x03') goto LAB_010de3f6;
        FUN_010dd4f0(*(undefined8 *)(lVar7 + 0x18),
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x408) + 0x488),1
                     ,0);
      }
      *param_2 = DAT_0202f9b0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x58);
      if (bVar1 < 3) {
        if ((bVar1 == 2) || (bVar1 == 0)) {
          uVar6 = FUN_0153b190(*(undefined8 *)(lVar7 + 0x18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          *param_2 = uVar6;
          goto LAB_010de3f6;
        }
        if (bVar1 != 1) goto LAB_010de3f6;
      }
      else if (bVar1 != 3) {
        if (bVar1 == 4) {
          uVar6 = FUN_0153b190(*(undefined8 *)(lVar7 + 0x18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
          *param_2 = uVar6;
        }
        goto LAB_010de3f6;
      }
      FUN_0153b260(local_38,*(undefined8 *)(lVar7 + 0x18),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      *param_2 = local_38[0];
    }
  }
LAB_010de3f6:
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}

