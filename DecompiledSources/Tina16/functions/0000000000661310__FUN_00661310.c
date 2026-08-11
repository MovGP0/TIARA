/* Ghidra address: 00661310 */
/* Ghidra symbol: FUN_00661310 */


void FUN_00661310(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar5 = FUN_00661230();
  if (lVar5 == 0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((longlong)param_3 + 4) = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  }
  else {
    uVar1 = FUN_00660730(lVar5,2);
    uVar2 = FUN_00660730(lVar5,1);
    uVar3 = FUN_006607d0(lVar5,2);
    uVar4 = FUN_006607d0(lVar5,1);
    FUN_00423b80(&local_38,uVar1,uVar2,uVar3,uVar4);
    *param_3 = local_38;
    param_3[1] = uStack_30;
  }
  return;
}

