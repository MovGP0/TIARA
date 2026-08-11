/* Ghidra address: 019b6360 */
/* Ghidra symbol: FUN_019b6360 */


void FUN_019b6360(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_30;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_30 = 0;
  iVar3 = FUN_019b5e10(local_res10,*param_1,0,param_4);
  do {
    if ((iVar3 < 0) || (iVar7 = FUN_019b5ce0(*param_1,param_4), iVar7 <= iVar3)) {
      FUN_019b6320(&local_30);
      FUN_00414560(&local_res10,2);
      return;
    }
    iVar7 = FUN_00416db0(local_res10,&DAT_019b665c);
    if (iVar7 == 0) {
LAB_019b6477:
      uVar6 = 0;
      if (local_res10 != 0) {
        uVar6 = *(undefined4 *)(local_res10 + -4);
      }
      FUN_019b5f00(param_1,iVar3,uVar6,param_4);
      iVar7 = 0;
      if (local_res10 != 0) {
        iVar7 = *(int *)(local_res10 + -4);
      }
      iVar4 = FUN_019b5ce0(*param_1,param_4);
      iVar5 = 0;
      if (local_res10 != 0) {
        iVar5 = *(int *)(local_res10 + -4);
      }
      FUN_019b6010(&local_30,*param_1,iVar3 + iVar7 + -1,(iVar4 - (iVar3 + iVar5)) + 1,param_4);
      iVar7 = 0;
      if (local_res18 != 0) {
        iVar7 = *(int *)(local_res18 + -4);
      }
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          FUN_019b5bb0(param_1,iVar3 + iVar5,
                       *(undefined2 *)(local_res18 + -2 + (longlong)(iVar5 + 1) * 2),param_4);
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar7 = FUN_019b5ce0(local_30,param_4);
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          iVar4 = 0;
          if (local_res18 != 0) {
            iVar4 = *(int *)(local_res18 + -4);
          }
          uVar6 = FUN_019b60b0(local_30,iVar5,param_4);
          FUN_019b5bb0(param_1,iVar3 + iVar4 + iVar5,uVar6,param_4);
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      sVar1 = FUN_019b60b0(*param_1,iVar3 + -1,param_4);
      uVar2 = sVar1 - 0x30;
      if (uVar2 < 0x50) {
        bVar9 = ((byte)(&DAT_019b6660)[(longlong)(short)(uVar2 & 0x7f) >> 3] >> (uVar2 & 7) & 1) !=
                0;
      }
      else {
        bVar9 = false;
      }
      if (!bVar9) {
        sVar1 = FUN_019b60b0(*param_1,iVar3 + 1,param_4);
        if ((ushort)(sVar1 - 0x28U) < 0x58) {
          uVar8 = ((ulonglong)(ushort)(sVar1 - 0x28U) & 0x7f) + 0x10;
          bVar9 = ((byte)(&DAT_019b6668)[(longlong)uVar8 >> 3] >> (uVar8 & 7) & 1) != 0;
        }
        else {
          bVar9 = false;
        }
        if (!bVar9) goto LAB_019b6477;
      }
    }
    iVar3 = FUN_019b5e10(local_res10,*param_1,iVar3 + 1,param_4);
  } while( true );
}

