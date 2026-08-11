/* Ghidra address: 0163f970 */
/* Ghidra symbol: FUN_0163f970 */


undefined8 FUN_0163f970(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_00e01e00(*(undefined8 *)(param_1 + 0x30));
  FUN_00414480(param_2);
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00e01de0(*(undefined8 *)(param_1 + 0x30),iVar5);
      if (*(char *)(lVar3 + 8) == -0x23) {
        iVar2 = FUN_00e01e00();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            lVar4 = FUN_00e01de0(*(undefined8 *)(lVar3 + 0x18),iVar6);
            if (*(char *)(lVar4 + 8) == -0x22) {
              if (*(int *)(lVar4 + 0x18) == param_3) {
                FUN_00414ad0(param_2,*(undefined8 *)(lVar4 + 0x10));
                return param_2;
              }
            }
            else {
              FUN_01613110(0);
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        FUN_01613110(0);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_3 == 1) {
    FUN_00414ad0(param_2,L"a2d_TTL");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"d2a_TTL");
  }
  else {
    FUN_01613110(L"Connect rule not found");
  }
  return param_2;
}

