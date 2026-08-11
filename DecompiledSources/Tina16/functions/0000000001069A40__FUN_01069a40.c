/* Ghidra address: 01069a40 */
/* Ghidra symbol: FUN_01069a40 */


void FUN_01069a40(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  
  *(undefined1 *)((longlong)param_1 + 0x162) = 8;
  sVar2 = *(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2);
  if (sVar2 == 0) {
    FUN_010689b0(param_1);
  }
  else if (sVar2 == 10) {
    FUN_01068710(param_1);
  }
  else {
    if (sVar2 != 0xd) {
      *(undefined1 *)((longlong)param_1 + 0x161) = 0;
      do {
        iVar4 = (int)param_1[0x2a];
        uVar3 = *(ushort *)(param_1[0x24] + (longlong)iVar4 * 2);
        if (uVar3 < 0xe) {
          if (((uVar3 == 0xd) || (uVar3 == 0)) || (uVar3 == 10)) goto code_r0x01069ba8;
        }
        else {
          if (uVar3 == 0x22) {
code_r0x01069ba8:
            if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) != 0x22) {
              return;
            }
            param_1 = param_1 + 0x2a;
            lVar7 = *param_1;
            *(int *)param_1 = (int)*param_1 + 1;
            if (!SCARRY4((int)lVar7,1)) {
              return;
            }
            FUN_00410ab0();
            return;
          }
          if (uVar3 == 0x5c) {
            lVar7 = param_1[0x24];
            iVar6 = iVar4 + 1;
            if (SCARRY4(iVar4,1)) {
              iVar6 = FUN_00410ab0();
            }
            sVar2 = *(short *)(lVar7 + (longlong)iVar6 * 2);
            if (sVar2 == 0) {
              plVar1 = param_1 + 0x2a;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + 1;
              if (SCARRY4((int)lVar7,1)) {
                FUN_00410ab0();
              }
              *(undefined1 *)((longlong)param_1 + 0x161) = 8;
              return;
            }
            if ((sVar2 == 0x22) || (sVar2 == 0x5c)) {
              plVar1 = param_1 + 0x2a;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + 1;
              if (SCARRY4((int)lVar7,1)) {
                FUN_00410ab0();
              }
            }
          }
        }
        plVar1 = param_1 + 0x2a;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar7,1)) {
          FUN_00410ab0();
        }
        cVar5 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
        if ((cVar5 != '\0') ||
           (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == 0x22))
        goto code_r0x01069ba8;
      } while( true );
    }
    FUN_010680f0(param_1);
  }
  return;
}

