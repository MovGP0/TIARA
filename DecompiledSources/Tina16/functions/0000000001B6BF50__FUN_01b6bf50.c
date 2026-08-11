/* Ghidra address: 01b6bf50 */
/* Ghidra symbol: FUN_01b6bf50 */


void FUN_01b6bf50(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  double dVar10;
  byte local_39 [9];
  
  iVar9 = 0;
  bVar3 = false;
  bVar8 = 0;
  do {
    local_39[0] = bVar8;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x98))
                      (*(longlong **)(param_1 + 0x9d8),local_39);
    if (cVar4 == '\0') {
      uVar7 = (ulonglong)bVar8;
      if (uVar7 < 5) {
        if (uVar7 == 4) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x948),0);
        }
        else if (uVar7 == 0) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),0);
        }
        else if (uVar7 == 1) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),0);
        }
        else if (uVar7 == 2) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),0);
        }
        else if (uVar7 == 3) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x938),0);
        }
      }
      else if (uVar7 - 5 < 6) {
        if (!bVar3) {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x988),0);
        }
      }
      else if (uVar7 == 0xb) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9a0),0);
      }
      else if (uVar7 == 0xc) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x9a8),0);
      }
      else if (uVar7 == 0xd) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x998),0);
      }
    }
    else {
      uVar7 = (ulonglong)bVar8;
      if (uVar7 < 5) {
        if (uVar7 == 4) {
          uVar1 = *(undefined8 *)(param_1 + 0x948);
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
        else if (uVar7 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x928);
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
        else if (uVar7 == 1) {
          uVar1 = *(undefined8 *)(param_1 + 0x930);
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
        else if (uVar7 == 2) {
          uVar1 = *(undefined8 *)(param_1 + 0x940);
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
        else if (uVar7 == 3) {
          uVar1 = *(undefined8 *)(param_1 + 0x938);
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
      }
      else if (uVar7 - 5 < 6) {
        uVar1 = *(undefined8 *)(param_1 + 0x988);
        if (!bVar3) {
          FUN_0064dbe0(uVar1,1);
          FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
          dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
          iVar5 = FUN_0040c770(dVar10 * 27.0);
          FUN_0064cb90(uVar1,iVar5 + 0x14);
          iVar9 = iVar9 + 1;
        }
        bVar3 = true;
      }
      else if (uVar7 == 0xb) {
        uVar1 = *(undefined8 *)(param_1 + 0x9a0);
        FUN_0064dbe0(uVar1,1);
        FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
        dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
        iVar5 = FUN_0040c770(dVar10 * 27.0);
        FUN_0064cb90(uVar1,iVar5 + 0x14);
        iVar9 = iVar9 + 1;
      }
      else if (uVar7 == 0xc) {
        uVar1 = *(undefined8 *)(param_1 + 0x9a8);
        FUN_0064dbe0(uVar1,1);
        FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
        dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
        iVar5 = FUN_0040c770(dVar10 * 27.0);
        FUN_0064cb90(uVar1,iVar5 + 0x14);
        iVar9 = iVar9 + 1;
      }
      else if (uVar7 == 0xd) {
        uVar1 = *(undefined8 *)(param_1 + 0x998);
        FUN_0064dbe0(uVar1,1);
        FUN_0064cb30(uVar1,(iVar9 % 3) * 0x38 + 0xc);
        dVar10 = (double)FUN_0040af10((double)iVar9 / 3.0);
        iVar5 = FUN_0040c770(dVar10 * 27.0);
        FUN_0064cb90(uVar1,iVar5 + 0x14);
        iVar9 = iVar9 + 1;
      }
    }
    bVar8 = bVar8 + 1;
  } while (bVar8 != 0xe);
  plVar2 = *(longlong **)(param_1 + 0x9d8);
  local_39[0] = 0x6e;
  uVar6 = (**(code **)(*plVar2 + 0x98))(plVar2,local_39);
  (**(code **)(**(longlong **)(param_1 + 0x958) + 0x128))(*(longlong **)(param_1 + 0x958),uVar6);
  local_39[0] = 0x6f;
  uVar6 = (**(code **)(*plVar2 + 0x98))(plVar2,local_39);
  (**(code **)(**(longlong **)(param_1 + 0x980) + 0x128))(*(longlong **)(param_1 + 0x980),uVar6);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x980) + 0xf0))(*(longlong **)(param_1 + 0x980));
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x128))(*(longlong **)(param_1 + 0x960),uVar6);
  return;
}

