/* Ghidra address: 01c979b0 */
/* Ghidra symbol: FUN_01c979b0 */


void FUN_01c979b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_238 [264];
  undefined1 local_130 [256];
  longlong local_30;
  
  cVar3 = FUN_01c8cee0(param_1);
  if (cVar3 == '\0') {
    plVar6 = (longlong *)FUN_007fc180(&PTR_FUN_01bab8c8,1,*(undefined8 *)PTR_DAT_02004030);
    iVar4 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
    if (2 < iVar4) {
      *(int *)(param_1 + 0x1840) = iVar4;
      plVar1 = (longlong *)plVar6[0xe0];
      uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar7 = FUN_006efcb0(plVar1[0x9c],uVar5);
      FUN_00414ad0(param_1 + 0x1848,*(undefined8 *)(lVar7 + 0x30));
      plVar1 = (longlong *)plVar6[0xe0];
      uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar7 = FUN_006efcb0(plVar1[0x9c],uVar5);
      lVar7 = *(longlong *)(lVar7 + 0x40);
      cVar3 = *(char *)(lVar7 + 8);
      FUN_00414ad0(param_1 + 0x1850,L"<Auto>");
      *(undefined8 *)(param_1 + 0x1858) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined1 *)(param_1 + 0x1860) = *(undefined1 *)(lVar7 + 9);
      if (*(char *)(lVar7 + 10) == '\0') {
        FUN_01c6ec30(param_1,*(int *)(param_1 + 0x1840),0,1,1);
      }
      else {
        FUN_004169a0(param_1 + 0x2760,*(undefined8 *)(param_1 + 0x1858));
        FUN_01c6ec30(param_1,0x39,1,1,1);
      }
      plVar1 = *(longlong **)(param_1 + 0x1898);
      if (plVar1 != (longlong *)0x0) {
        if (cVar3 != '\0') {
          (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_30);
          lVar2 = local_30;
          FUN_00416910(local_238,*(undefined8 *)(param_1 + 0x1848),0xff);
          FUN_00415020(lVar2,local_238,0x14);
          *(undefined1 *)(lVar2 + 0x2f) = 1;
          uVar8 = FUN_016ffb50(*(undefined8 *)(param_1 + 0x1848),*(undefined8 *)(param_1 + 0x1858),
                               *(undefined8 *)(param_1 + 0x1898),0);
          *(undefined8 *)(lVar2 + 0x30) = uVar8;
          FUN_00416910(lVar2 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0x1858) + 0x40),0xff);
          uVar8 = FUN_00416740(**(undefined8 **)(param_1 + 0x1858));
          uVar8 = FUN_00442bd0(uVar8);
          *(undefined8 *)(lVar2 + 0x138) = uVar8;
          FUN_01d07850(*(undefined8 *)(param_1 + 0x1898));
          FUN_01d37030(*(undefined8 *)(param_1 + 0x1898));
        }
        if (-1 < *(char *)(lVar7 + 5)) {
          uVar8 = FUN_0172d840(*(undefined8 *)(param_1 + 0x1898),*(undefined1 *)(lVar7 + 4),
                               *(char *)(lVar7 + 5),0);
          (**(code **)(**(longlong **)(param_1 + 0x1898) + 0x2d0))
                    (*(longlong **)(param_1 + 0x1898),(longlong)*(char *)(lVar7 + 4),&local_30);
          lVar2 = *(longlong *)(local_30 + 0x26);
          FUN_0172cc40(uVar8,*(undefined2 *)(lVar7 + 6),*(undefined2 *)(lVar2 + 0x21),
                       *(undefined8 *)(lVar2 + 1),*(undefined8 *)(lVar2 + 9),local_130,0xff);
          FUN_0172f320(*(undefined8 *)(param_1 + 0x1898),*(undefined1 *)(lVar7 + 4),
                       *(undefined2 *)(lVar7 + 6),*(undefined1 *)(lVar7 + 5),uVar8,local_30,0x14,
                       local_30 + 0x15,0x10);
          FUN_00410f20(uVar8);
          FUN_01d07850(*(undefined8 *)(param_1 + 0x1898));
          FUN_01d37030(*(undefined8 *)(param_1 + 0x1898));
        }
      }
    }
    FUN_00410f20(plVar6);
  }
  return;
}

