/* Ghidra address: 01c00850 */
/* Ghidra symbol: FUN_01c00850 */


void FUN_01c00850(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_50;
  int local_4c;
  undefined1 local_48 [24];
  
  if ((param_1[0x93] != 0) && (cVar2 = FUN_01bfab60(param_1[0x93]), cVar2 != '\0')) {
    lVar7 = param_1[0x93];
    bVar1 = *(byte *)(lVar7 + 0x28);
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        lVar7 = FUN_01bfa9a0(lVar7);
        iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x60))(*(longlong **)(lVar7 + 0x18));
        lVar7 = FUN_01bfa9a0(param_1[0x93]);
        iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x48))(*(longlong **)(lVar7 + 0x18));
        iVar5 = FUN_0064d0b0();
        local_50 = 0;
        if (0x7fffffff < (uint)(iVar5 / iVar3)) {
          return;
        }
        iVar5 = iVar5 / iVar3 + 1;
        do {
          iVar6 = FUN_0064d120();
          local_4c = 0;
          if ((uint)(iVar6 / iVar4) < 0x80000000) {
            iVar6 = iVar6 / iVar4 + 1;
            do {
              lVar7 = FUN_01bfa9a0(param_1[0x93]);
              (**(code **)(*(longlong *)param_1[0x96] + 0x88))
                        ((longlong *)param_1[0x96],iVar3 * local_50,iVar4 * local_4c,
                         *(undefined8 *)(lVar7 + 0x18));
              local_4c = local_4c + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_50 = local_50 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          return;
        }
        (**(code **)(*param_1 + 0xe0))(param_1,local_48);
        lVar7 = FUN_01bfa9a0(param_1[0x93]);
        (**(code **)(*(longlong *)param_1[0x96] + 0x110))
                  ((longlong *)param_1[0x96],local_48,*(undefined8 *)(lVar7 + 0x18));
        return;
      }
    }
    else if (bVar1 != 3) {
      if (bVar1 != 4) {
        return;
      }
      lVar7 = FUN_01bfa9a0(lVar7);
      iVar3 = (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x60))(*(longlong **)(lVar7 + 0x18));
      lVar7 = FUN_01bfa9a0(param_1[0x93]);
      (**(code **)(*(longlong *)param_1[0x96] + 0x88))
                ((longlong *)param_1[0x96],(int)param_1[0x13] - iVar3,0,
                 *(undefined8 *)(lVar7 + 0x18));
      return;
    }
    lVar7 = FUN_01bfa9a0(lVar7);
    (**(code **)(*(longlong *)param_1[0x96] + 0x88))
              ((longlong *)param_1[0x96],0,0,*(undefined8 *)(lVar7 + 0x18));
  }
  return;
}

