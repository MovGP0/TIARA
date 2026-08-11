/* Ghidra address: 00628dd0 */
/* Ghidra symbol: FUN_00628dd0 */


int FUN_00628dd0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x48) = param_3;
  lVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if (lVar3 != *(longlong *)(param_1 + 0x18)) {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x18));
  }
  iVar1 = 0;
  do {
    if ((*(int *)(param_1 + 0x48) == 0) || (iVar1 == 1)) {
      if ((iVar1 == 1) && (*(int *)(param_1 + 0x38) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        lVar3 = FUN_004b6da0(uVar6);
        FUN_004b6dc0(uVar6,lVar3 - (ulonglong)*(uint *)(param_1 + 0x38));
        uVar6 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x48);
LAB_00628ed1:
      return param_3 - iVar1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar4 = 0;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + -8);
      }
      iVar1 = FUN_004b72d0(*(undefined8 *)(param_1 + 8),param_1 + 0x88,uVar4 & 0xffffffff);
      *(int *)(param_1 + 0x38) = iVar1;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x48);
        goto LAB_00628ed1;
      }
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x88);
      uVar6 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      pcVar5 = (code *)FUN_00411550(param_1,0xffffffff);
      (*pcVar5)(param_1);
    }
    uVar2 = FUN_0062db10(param_1 + 0x30,0);
    iVar1 = FUN_00627ee0(uVar2);
  } while( true );
}

