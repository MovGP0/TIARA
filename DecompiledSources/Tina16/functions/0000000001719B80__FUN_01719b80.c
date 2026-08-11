/* Ghidra address: 01719b80 */
/* Ghidra symbol: FUN_01719b80 */


void FUN_01719b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xb0))
                    (*(longlong **)(param_1 + 0xa0),local_res10);
  if (iVar1 == -1) {
    uVar3 = FUN_01710e80(&DAT_0170c190,1,local_res10,local_res18);
    iVar1 = FUN_00416db0(local_res18,L"<TINADIR>");
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_00416db0(local_res18,L"<COMMONCATDIR>");
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      if ((int)uVar4 == 0) {
        uVar2 = (undefined4)CONCAT71(uVar5,1);
      }
      else {
        uVar2 = (undefined4)CONCAT71(uVar5,2);
      }
    }
    FUN_0171c960(*(undefined8 *)(param_1 + 8),uVar2,uVar3);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x78))
              (*(longlong **)(param_1 + 0xa0),local_res10);
  }
  FUN_00414560(&local_res10,2);
  return;
}

