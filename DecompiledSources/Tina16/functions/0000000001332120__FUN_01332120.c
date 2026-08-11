/* Ghidra address: 01332120 */
/* Ghidra symbol: FUN_01332120 */


void FUN_01332120(longlong param_1,double param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  
  uVar5 = FUN_0132f4b0(param_1 + 0x78,0x3fb999999999999a,(double)*(ushort *)(param_1 + 0x28),
                       0xc6293e5939a08cea,0x3ff0000000000000);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(double *)(param_1 + 0x80) = param_2 * 10.0;
  uVar5 = FUN_0040c760(0x3f847ae147ae147b);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = FUN_0132c9c0(param_1 + 0xe0,*(undefined2 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_0132c9c0(param_1 + 0xe8,*(undefined2 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  FUN_0132cd20(*(undefined8 *)(param_1 + 0xe0));
  FUN_0132cd20(*(undefined8 *)(param_1 + 0xe8));
  bVar2 = false;
  bVar1 = false;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (param_3 != '\0') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                          (*(longlong **)(param_1 + 0x138),iVar7);
        cVar3 = FUN_01330f80(*(undefined8 *)(lVar6 + 8),L"CSENSOR");
        if (cVar3 != '\0') {
          bVar1 = true;
          bVar2 = true;
          if ((*(double *)(lVar6 + 0x10) <= *(double *)(param_1 + 0x110) &&
               *(double *)(param_1 + 0x110) != *(double *)(lVar6 + 0x10)) &&
             (dVar8 = (double)FUN_0040c850(*(undefined8 *)(lVar6 + 0x30)), dVar8 < 10000000000.0)) {
            *(undefined1 *)(param_1 + 0xf0) = 1;
            break;
          }
        }
        bVar1 = bVar2;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
        bVar2 = bVar1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                        (*(longlong **)(param_1 + 0x138),iVar7);
      if (*(char *)(lVar6 + 0x18) == '\x02') {
        if (param_3 == '\0') {
          FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe8),iVar7,0x3ff0000000000000);
        }
        else {
          FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe8),iVar7,0);
        }
      }
      else if (*(char *)(lVar6 + 0x18) == '\x01') {
        if (bVar1) {
          cVar3 = FUN_01330f80(*(undefined8 *)(lVar6 + 8),L"CSENSOR");
          if (cVar3 == '\0') {
            FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe8),iVar7,0);
          }
          else {
            if ((*(char *)(param_1 + 0xf0) != '\0') &&
               (dVar8 = (double)FUN_0040c850(*(undefined8 *)(lVar6 + 0x30)), dVar8 < 10000000000.0))
            {
              FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe0),iVar7,*(undefined8 *)(lVar6 + 0x30));
            }
            FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe8),iVar7,0x3ff0000000000000);
          }
        }
        else {
          FUN_0132dbe0(*(undefined8 *)(param_1 + 0xe8),iVar7,0x3ff0000000000000);
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

