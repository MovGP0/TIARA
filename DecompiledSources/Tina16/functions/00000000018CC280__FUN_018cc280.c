/* Ghidra address: 018cc280 */
/* Ghidra symbol: FUN_018cc280 */


void FUN_018cc280(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  param_1[0x20] = 0;
  (**(code **)(*(longlong *)param_1[7] + 0x40))((longlong *)param_1[7],param_1[0x25]);
  param_1[0x12] = 0;
  lVar5 = FUN_018cb270(param_1,&PTR_FUN_01933a98);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x240) == '\0')) {
    (**(code **)(*param_1 + 0x58))(param_1,lVar5);
  }
  param_1[0x12] = 0;
  lVar5 = param_1[0x11];
  param_1[0x1a] = 0;
  iVar4 = FUN_018c5900();
  iVar9 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar6 = FUN_018c5910(param_1[0x18],iVar9);
      param_1[0x11] = *(longlong *)(lVar6 + 0x10);
      lVar6 = FUN_018c5910(param_1[0x18],iVar9);
      lVar6 = *(longlong *)(lVar6 + 8);
      if (lVar6 != param_1[0x27]) {
        if (((*(char *)((longlong)param_1 + 0xd9) != '\0') &&
            (cVar2 = FUN_004113d0(lVar6,&PTR_FUN_01930480), cVar2 != '\0')) &&
           (*(char *)(lVar6 + 0x240) == '\0')) {
          if (*(char *)(lVar6 + 0x1cb) == '\0') goto LAB_018cc5b6;
          lVar6 = *(longlong *)(lVar6 + 0x1a8);
        }
        cVar2 = FUN_004113d0(lVar6,&PTR_FUN_0192e210);
        if (((lVar6 != 0) &&
            ((((*(char *)((longlong)param_1 + 0xf2) == '\0' ||
               (*(longlong *)(param_1[0x1d] + 0x210) != lVar6)) &&
              ((lVar7 = FUN_018c5910(param_1[0x18],iVar9), *(char *)(lVar7 + 0x18) == '\0' ||
               (*(char *)((longlong)param_1 + 0xf1) == '\0')))) || ((char)param_1[0x1e] != '\0'))))
           && (((cVar2 == '\0' || ((char)param_1[0x17] == '\0')) &&
               (((cVar2 == '\0' || (param_1[0x16] != lVar6)) &&
                ((cVar2 = FUN_004113d0(lVar6,&PTR_FUN_019317f0), cVar2 == '\0' ||
                 ((char)param_1[0x17] == '\0')))))))) {
          *(undefined1 *)(lVar6 + 0x1c8) = 1;
          lVar7 = param_1[2];
          uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar6 + 0x228);
          *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar6 + 0x22c);
          *(undefined1 *)(param_1 + 0x14) = 1;
          uVar3 = FUN_004113d0(lVar6,&PTR_FUN_01930480);
          *(undefined1 *)(param_1 + 0x23) = uVar3;
          cVar2 = FUN_004113d0(lVar6,&PTR_FUN_01932898);
          if (cVar2 != '\0') {
            lVar8 = FUN_018c5910(param_1[0x18],iVar9);
            *(undefined8 *)(lVar8 + 8) = 0;
          }
          (**(code **)(*param_1 + 0x58))(param_1,lVar6);
          cVar2 = FUN_004113d0(lVar6,&PTR_FUN_01930480);
          if (cVar2 != '\0') {
            param_1[0x1a] = *(longlong *)(lVar6 + 0x238);
          }
          if (((char)param_1[0x1b] != '\0') &&
             (cVar2 = FUN_004113d0(lVar6,&PTR_FUN_01932898), cVar2 != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0xdb) = 1;
          }
          *(undefined1 *)(param_1 + 0x23) = 0;
          *(undefined1 *)(param_1 + 0x14) = 0;
          *(undefined1 *)(lVar6 + 0x1c8) = 0;
          *(int *)(param_1 + 2) = (int)lVar7;
          *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
        }
      }
LAB_018cc5b6:
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0x11] = lVar5;
  return;
}

