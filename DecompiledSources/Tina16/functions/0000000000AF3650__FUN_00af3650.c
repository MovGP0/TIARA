/* Ghidra address: 00af3650 */
/* Ghidra symbol: FUN_00af3650 */


void FUN_00af3650(longlong param_1,longlong *param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a87e18);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0x948,param_2[0x1b]);
    if (*(longlong *)(param_1 + 0x948) == 0) {
      local_30 = 0;
      iVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
      iVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
      uVar4 = FUN_00414480(param_1 + 0x948);
      FUN_00af5250(param_1,param_4 + iVar2,param_5 + iVar3,&local_30,local_38,uVar4);
      FUN_00410f20(local_30);
    }
    FUN_00650d70(param_1,param_3,param_4,param_5);
  }
  return;
}

