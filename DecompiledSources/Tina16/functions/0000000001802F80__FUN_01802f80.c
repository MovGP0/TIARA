/* Ghidra address: 01802f80 */
/* Ghidra symbol: FUN_01802f80 */


undefined8 * FUN_01802f80(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_50 = param_1;
  local_48 = param_2;
  iVar3 = FUN_00414cb0(param_2);
  if (iVar3 < 0x20) {
    FUN_00414ad0(local_50,local_48);
    if (0 < iVar3) {
      do {
        cVar2 = FUN_0043e100(*(undefined2 *)(local_48 + -2 + (longlong)iVar3 * 2),&DAT_01803368);
        if (cVar2 != '\0') {
          if (*(short *)(local_48 + -2 + (longlong)iVar3 * 2) == 0x26) {
            FUN_00416dc0(local_40,local_48,iVar3 + 1,5);
            iVar4 = FUN_00416db0(local_40[0],L"quot;");
            if (iVar4 == 0) {
              FUN_00416e20(local_50,iVar3,6);
              FUN_00416ea0(L"&#34;",local_50,iVar3);
            }
            else {
              FUN_01802ea0(auStack_78,local_50,iVar3);
            }
          }
          else {
            FUN_01802ea0(auStack_78,local_50,iVar3);
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    FUN_004169f0(local_50,iVar3);
    lVar6 = FUN_00416740(*local_50);
    lVar6 = lVar6 + -2;
    iVar8 = 1;
    for (iVar4 = 1; iVar5 = FUN_00414cb0(local_48), iVar4 <= iVar5; iVar4 = iVar4 + 1) {
      if (iVar3 < iVar8 + 5) {
        iVar3 = iVar3 + 0x100;
        FUN_004169f0(local_50,iVar3);
        lVar6 = FUN_00416740(*local_50);
        lVar6 = lVar6 + -2;
      }
      cVar2 = FUN_0043e100(*(undefined2 *)(local_48 + -2 + (longlong)iVar4 * 2),&DAT_01803368);
      if (cVar2 == '\0') {
        *(undefined2 *)(lVar6 + (longlong)iVar8 * 2) =
             *(undefined2 *)(local_48 + -2 + (longlong)iVar4 * 2);
      }
      else {
        lVar9 = (longlong)iVar4;
        if ((((*(short *)(local_48 + -2 + lVar9 * 2) == 0x26) &&
             (iVar5 = FUN_00414cb0(local_48), iVar4 <= iVar5 + -5)) &&
            (*(short *)(local_48 + -2 + (longlong)(iVar4 + 1) * 2) == 0x71)) &&
           (((*(short *)(local_48 + -2 + (longlong)(iVar4 + 2) * 2) == 0x75 &&
             (*(short *)(local_48 + -2 + (longlong)(iVar4 + 3) * 2) == 0x6f)) &&
            ((*(short *)(local_48 + -2 + (longlong)(iVar4 + 4) * 2) == 0x74 &&
             (*(short *)(local_48 + -2 + (longlong)(iVar4 + 5) * 2) == 0x3b)))))) {
          *(undefined2 *)(lVar6 + (longlong)iVar8 * 2) = 0x26;
          *(undefined2 *)(lVar6 + (longlong)(iVar8 + 1) * 2) = 0x23;
          *(undefined2 *)(lVar6 + (longlong)(iVar8 + 2) * 2) = 0x33;
          *(undefined2 *)(lVar6 + (longlong)(iVar8 + 3) * 2) = 0x34;
          *(undefined2 *)(lVar6 + (longlong)(iVar8 + 4) * 2) = 0x3b;
          iVar8 = iVar8 + 4;
          iVar4 = iVar4 + 5;
        }
        else if (*(short *)(local_48 + -2 + lVar9 * 2) == 0) {
          *(undefined2 *)(lVar6 + (longlong)iVar8 * 2) = 0x20;
        }
        else {
          *(undefined2 *)(lVar6 + (longlong)iVar8 * 2) = 0x26;
          *(undefined2 *)(lVar6 + (longlong)(iVar8 + 1) * 2) = 0x23;
          uVar1 = *(ushort *)(local_48 + -2 + lVar9 * 2);
          uVar7 = (uint)uVar1;
          if (uVar1 < 10) {
            *(ushort *)(lVar6 + (longlong)(iVar8 + 2) * 2) = uVar1 + 0x30;
            iVar8 = iVar8 + 3;
          }
          else if (uVar1 < 100) {
            *(short *)(lVar6 + (longlong)(iVar8 + 2) * 2) = (short)((ulonglong)uVar7 / 10) + 0x30;
            *(short *)(lVar6 + (longlong)(iVar8 + 3) * 2) = (short)((ulonglong)uVar7 % 10) + 0x30;
            iVar8 = iVar8 + 4;
          }
          else {
            *(short *)(lVar6 + (longlong)(iVar8 + 2) * 2) = (short)((ulonglong)uVar7 / 100) + 0x30;
            *(short *)(lVar6 + (longlong)(iVar8 + 3) * 2) =
                 (short)(((ulonglong)uVar7 % 100) / 10) + 0x30;
            *(short *)(lVar6 + (longlong)(iVar8 + 4) * 2) = (short)((ulonglong)uVar7 % 10) + 0x30;
            iVar8 = iVar8 + 5;
          }
          *(undefined2 *)(lVar6 + (longlong)iVar8 * 2) = 0x3b;
        }
      }
      iVar8 = iVar8 + 1;
    }
    FUN_004169f0(local_50,iVar8 + -1);
  }
  FUN_00414480(local_40);
  return local_50;
}

