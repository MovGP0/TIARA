/* Ghidra address: 00ced1a0 */
/* Ghidra symbol: FUN_00ced1a0 */


undefined8
FUN_00ced1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar5 = 0;
  iVar1 = FUN_00876570(&DAT_00ced30c,param_2);
  if ((iVar1 != 0) && (iVar1 <= *param_5)) {
    iVar7 = iVar1 + 2;
    iVar2 = FUN_00876570(&DAT_00ced320,param_2,iVar7);
    if ((iVar2 != 0) && (uVar6 = uVar5, iVar2 <= *param_5)) {
      iVar2 = iVar2 + 1;
      iVar3 = FUN_00876570(&DAT_00ced320,param_2,iVar2);
      if ((iVar3 != 0) && (iVar3 <= *param_5)) {
        iVar3 = iVar3 + 1;
        iVar4 = FUN_00876570(&DAT_00ced330,param_2,iVar3);
        if ((iVar4 != 0) && (iVar4 <= *param_5)) {
          *param_4 = iVar1;
          *param_5 = iVar4 + 1;
          FUN_00416dc0(param_6,param_2,iVar7,(iVar2 - iVar7) + -1);
          FUN_00416dc0(param_7,param_2,iVar2,(iVar3 - iVar2) + -1);
          FUN_00416dc0(param_8,param_2,iVar3,((iVar4 + 1) - iVar3) + -1);
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}

