/* Ghidra address: 01cf0dd0 */
/* Ghidra symbol: FUN_01cf0dd0 */


int FUN_01cf0dd0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [24];
  int local_30;
  int local_2c;
  
  iVar4 = -1;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    iVar5 = -1;
    while( true ) {
      cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,iVar5,&local_30);
      if (cVar1 == '\0') break;
      FUN_00498350(local_48,local_30 + -3,local_2c + -3,local_30 + 4,local_2c + 4);
      uVar3 = FUN_00498310(param_3,param_4);
      iVar2 = thunk_FUN_03f16006(local_48,uVar3);
      if (iVar2 != 0) {
        iVar4 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return iVar4;
}

