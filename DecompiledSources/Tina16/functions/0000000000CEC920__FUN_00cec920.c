/* Ghidra address: 00cec920 */
/* Ghidra symbol: FUN_00cec920 */


undefined8 FUN_00cec920(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_00419430(local_40,&DAT_0086e978);
  bVar4 = false;
  iVar6 = 0;
  if (param_4 != 0) {
    iVar6 = *(int *)(param_4 + -4);
  }
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      lVar7 = (longlong)iVar5;
      uVar2 = *(ushort *)(param_4 + lVar7 * 2 + -2);
      if (uVar2 < 0x80) {
        if (bVar4) {
          FUN_00878df0(local_40,0x1b);
          FUN_00878df0(local_40,0x28);
          FUN_00878df0(local_40,0x42);
          bVar4 = false;
        }
        FUN_00878df0(local_40,*(undefined1 *)(param_4 + lVar7 * 2 + -2));
        iVar5 = iVar5 + 1;
      }
      else {
        cVar1 = (&DAT_01eb1590)[uVar2];
        if (cVar1 == '\0') {
          iVar5 = iVar5 + 1;
        }
        else if (cVar1 == '\x01') {
          if (!bVar4) {
            FUN_00878df0(local_40,0x1b);
            FUN_00878df0(local_40,0x24);
            FUN_00878df0(local_40,0x42);
            bVar4 = true;
          }
          uVar8 = (ulonglong)
                  *(ushort *)
                   ((longlong)&UNWIND_INFO_01eb13d0 +
                   (ulonglong)*(ushort *)(param_4 + lVar7 * 2 + -2) * 2 + 2);
          if ((iVar5 < iVar6) &&
             ((*(ushort *)(param_4 + (longlong)(iVar5 + 1) * 2 + -2) & 0xfe) == 0xde)) {
            uVar2 = *(ushort *)
                     (&UNWIND_INFO_01eb1444.field_0xc +
                     (ulonglong)*(ushort *)(param_4 + (longlong)iVar5 * 2 + -2) * 2);
            sVar3 = *(short *)(param_4 + (longlong)(iVar5 + 1) * 2 + -2);
            if (sVar3 == 0xde) {
              if (uVar2 != 0) {
                iVar5 = iVar5 + 1;
                uVar8 = (ulonglong)uVar2;
              }
            }
            else if (((sVar3 == 0xdf) && (0x254f < uVar2)) && (uVar2 < 0x255d)) {
              uVar8 = (ulonglong)(ushort)(uVar2 + 1);
              iVar5 = iVar5 + 1;
            }
          }
          FUN_00878df0(local_40,uVar8 >> 8);
          FUN_00878df0(local_40,uVar8);
          iVar5 = iVar5 + 1;
        }
        else if (cVar1 == '\x02') {
          iVar5 = iVar5 + 2;
        }
        else {
          if (iVar5 < iVar6) {
            sVar3 = *(short *)(&DAT_01eb1690 +
                              (ulonglong)*(ushort *)(param_4 + (longlong)(iVar5 + 1) * 2 + -2) * 2);
            if (sVar3 != 0) {
              if (!bVar4) {
                FUN_00878df0(local_40,0x1b);
                FUN_00878df0(local_40,0x24);
                FUN_00878df0(local_40,0x42);
                bVar4 = true;
              }
              FUN_00878df0(local_40,cVar1 + (char)((ushort)sVar3 >> 8));
              FUN_00878df0(local_40,sVar3);
            }
          }
          iVar5 = iVar5 + 2;
        }
      }
    } while (iVar5 <= iVar6);
  }
  if (bVar4) {
    FUN_00878df0(local_40,0x1b);
    FUN_00878df0(local_40,0x28);
    FUN_00878df0(local_40,0x42);
  }
  FUN_004194b0(param_2,local_40[0],&DAT_0086e978);
  FUN_00419430(local_40,&DAT_0086e978);
  return param_2;
}

