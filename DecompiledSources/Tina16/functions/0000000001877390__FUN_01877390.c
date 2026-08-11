/* Ghidra address: 01877390 */
/* Ghidra symbol: FUN_01877390 */


void FUN_01877390(longlong *param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (param_3 < param_4) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_00419260(local_30,&DAT_01877350,1,(longlong)iVar1);
    FUN_01877300(param_1,(longlong)(param_3 + param_4) / 2 & 0xffffffff,local_30[0]);
    iVar1 = param_3;
    iVar4 = param_4;
    if (param_3 <= param_4) {
      do {
        while( true ) {
          uVar3 = (**(code **)(*param_1 + 0x28))(param_1,iVar1);
          iVar2 = (*param_2)(uVar3,local_30[0]);
          if (-1 < iVar2) break;
          iVar1 = iVar1 + 1;
        }
        while( true ) {
          uVar3 = (**(code **)(*param_1 + 0x28))(param_1,iVar4);
          iVar2 = (*param_2)(local_30[0],uVar3);
          if (-1 < iVar2) break;
          iVar4 = iVar4 + -1;
        }
        if (iVar1 <= iVar4) {
          (**(code **)(*param_1 + 0x38))(param_1,iVar1,iVar4);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        }
      } while (iVar1 <= iVar4);
    }
    if (param_3 < iVar4) {
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,iVar4);
    }
    if (iVar1 < param_4) {
      (**(code **)(*param_1 + 0x48))(param_1,param_2,iVar1,param_4);
    }
  }
  FUN_00419430(local_30,&DAT_01877350);
  return;
}

