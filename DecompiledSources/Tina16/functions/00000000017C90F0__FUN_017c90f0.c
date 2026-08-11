/* Ghidra address: 017c90f0 */
/* Ghidra symbol: FUN_017c90f0 */


void FUN_017c90f0(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *unaff_RDI;
  int local_2c;
  
  *param_2 = 1;
  sVar6 = 0;
  cVar3 = FUN_0198a580(*(undefined8 *)(param_1 + 0x128));
  cVar5 = '\0';
  if (cVar3 == '\x04') {
    unaff_RDI = *(longlong **)(param_1 + 0x128);
    sVar6 = (**(code **)(*unaff_RDI + 0xf8))(unaff_RDI);
    iVar7 = FUN_01cfd2d0();
    local_2c = 0;
    cVar5 = '\0';
    cVar3 = '\0';
    if (-1 < iVar7 + -1) {
      do {
        cVar5 = cVar3;
        cVar3 = FUN_01cfd030(unaff_RDI,local_2c);
        if (cVar3 == '\t') {
          cVar5 = cVar5 + '\x01';
        }
        local_2c = local_2c + 1;
        iVar7 = iVar7 + -1;
        cVar3 = cVar5;
      } while (iVar7 != 0);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x128);
  if (sVar6 == 0xc2) {
    *(undefined1 *)(param_1 + 5) = 8;
  }
  else if (sVar6 == 0xbd) {
    *(undefined1 *)(param_1 + 5) = 7;
  }
  else if (sVar6 == 0xbc) {
    *(undefined1 *)(param_1 + 5) = 6;
  }
  else if (sVar6 == 0xbb) {
    *(undefined1 *)(param_1 + 5) = 5;
  }
  else if (sVar6 == 0xba) {
    *(undefined1 *)(param_1 + 5) = 4;
  }
  else if (sVar6 == 0xb9) {
    *(undefined1 *)(param_1 + 5) = 3;
  }
  else if (sVar6 == 0xae) {
    *(undefined1 *)(param_1 + 5) = 4;
  }
  else if (sVar6 == 0xaf) {
    *(undefined1 *)(param_1 + 5) = 2;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x1c8))(plVar2);
    *(undefined1 *)(param_1 + 5) = uVar4;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + cVar5;
  uVar9 = FUN_00409570((uint)*(byte *)(param_1 + 5) * 4);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  uVar10 = (uint)*(byte *)(param_1 + 5);
  local_2c = 0;
  if (-1 < (int)(uVar10 - 1)) {
    do {
      cVar5 = FUN_01d420f0(sVar6);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*plVar2 + 0x210))(plVar2,local_2c);
        *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)(local_2c + 1) * 4) = uVar8;
      }
      else if (local_2c < 4) {
        if (*(short *)((longlong)unaff_RDI + (longlong)local_2c * 4 + 0x518) < 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)(local_2c + 1) * 4) = 0;
        }
        else {
          uVar8 = (**(code **)(*unaff_RDI + 0x210))
                            (unaff_RDI,
                             *(undefined2 *)((longlong)unaff_RDI + (longlong)local_2c * 4 + 0x518));
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)(local_2c + 1) * 4) = uVar8
          ;
        }
      }
      else {
        uVar1 = *(uint *)((longlong)unaff_RDI + (longlong)(local_2c + -4) * 4 + 0x518);
        if ((int)uVar1 < 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)(local_2c + 1) * 4) = 0;
        }
        else {
          uVar8 = (**(code **)(*unaff_RDI + 0x210))(unaff_RDI,uVar1 >> 0x10);
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + (longlong)(local_2c + 1) * 4) = uVar8
          ;
        }
      }
      local_2c = local_2c + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

