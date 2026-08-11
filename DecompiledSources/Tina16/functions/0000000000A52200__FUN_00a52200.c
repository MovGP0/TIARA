/* Ghidra address: 00a52200 */
/* Ghidra symbol: FUN_00a52200 */


undefined8 FUN_00a52200(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_0046bd60(&local_30);
  FUN_00414480(param_1);
  cVar2 = FUN_0046c390(&local_30);
  if (cVar2 != '\0') {
    FUN_00467e90(&local_38,&local_30);
    iVar3 = FUN_004170c0(L"url(");
    if (0 < iVar3) {
      iVar6 = 0;
      if (local_38 != 0) {
        iVar6 = *(int *)(local_38 + -4);
      }
      iVar3 = iVar3 + 4;
      while ((iVar3 <= iVar6 &&
             (((sVar4 = *(short *)(local_38 + -2 + (longlong)iVar3 * 2), sVar4 == 10 ||
               ((ushort)(sVar4 - 0xcU) < 2)) || (sVar4 == 0x20))))) {
        iVar3 = iVar3 + 1;
      }
      sVar4 = 0;
      if ((iVar3 < iVar6) &&
         ((sVar1 = *(short *)(local_38 + -2 + (longlong)iVar3 * 2), sVar1 == 0x22 ||
          (sVar4 = 0, sVar1 == 0x27)))) {
        iVar3 = iVar3 + 1;
        sVar4 = sVar1;
      }
      iVar5 = iVar3;
      if (sVar4 == 0) {
        iVar7 = 0;
        for (; iVar5 <= iVar6; iVar5 = iVar5 + 1) {
          uVar8 = (ulonglong)*(ushort *)(local_38 + -2 + (longlong)iVar5 * 2);
          if (uVar8 < 0x21) {
            if ((((uVar8 == 0x20) || (uVar8 == 10)) || (uVar8 - 0xc < 2)) && (iVar7 == 0)) break;
          }
          else if (uVar8 == 0x28) {
            iVar7 = iVar7 + 1;
          }
          else if (uVar8 == 0x29) {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
          }
        }
      }
      else {
        while ((iVar5 <= iVar6 && (*(short *)(local_38 + -2 + (longlong)iVar5 * 2) != sVar4))) {
          iVar5 = iVar5 + 1;
        }
      }
      FUN_00416dc0(param_1,local_38,iVar3,iVar5 - iVar3);
    }
  }
  FUN_00414480(&local_38);
  FUN_00460ba0(&local_30);
  return param_1;
}

