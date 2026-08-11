/* Ghidra address: 006de2e0 */
/* Ghidra symbol: FUN_006de2e0 */


void FUN_006de2e0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_40 [2];
  int local_2c;
  
  local_40[0] = 0;
  FUN_006dfe80(*(undefined8 *)(param_1 + 8));
  FUN_004b84c0(param_2,&local_2c,4);
  FUN_004b84c0(param_2,param_3,(longlong)local_2c);
  FUN_004169a0(local_40,param_3 + 6);
  FUN_006dc8a0(param_1,local_40[0]);
  FUN_006dcbd0(param_1,*param_3);
  FUN_006dcca0(param_1,param_3[1]);
  FUN_006dcd70(param_1,param_3[2]);
  FUN_006dcd10(param_1,param_3[3]);
  FUN_006dc990(param_1,(longlong)(int)param_3[4]);
  iVar4 = param_3[5];
  FUN_006dd340(param_1,iVar4 != 0);
  if ((0 < iVar4) && (-1 < iVar4 + -1)) {
    do {
      uVar2 = FUN_006dee40(*(undefined8 *)(param_1 + 8),param_1,0);
      FUN_006de2e0(uVar2,param_2);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      pcVar3 = (code *)FUN_00411550(uVar1,0xffa5);
      (*pcVar3)(uVar1,uVar2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_40);
  return;
}

