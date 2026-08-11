/* Ghidra address: 0107ba70 */
/* Ghidra symbol: FUN_0107ba70 */


void FUN_0107ba70(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_00f81d30(*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    cVar1 = FUN_00f81d60(*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 == '\0') {
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),iVar4);
          cVar1 = FUN_010af9d0(uVar3);
          if (cVar1 == '\0') {
            FUN_0107b380(param_1,uVar3,param_2);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_0107b670(param_1,param_2);
    }
    else {
      FUN_00414480(&local_38);
      FUN_010ae170(&local_40);
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar2 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),iVar4);
          cVar1 = FUN_010af9d0(lVar2);
          if (cVar1 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
            FUN_004414c0(local_50,*(undefined8 *)(lVar2 + 0x30),&DAT_0107bf34);
            FUN_00416cd0(&local_38,4,local_38,&DAT_0107bf24,local_50[0],&DAT_0107bf48);
            FUN_0107a920(param_1,&local_58,*(undefined8 *)(param_1 + 0xb38));
            FUN_00416cd0(&local_30,8,L"mcc18 -p=",local_58,&DAT_0107bf7c,&DAT_0107bf24,
                         *(undefined8 *)(lVar2 + 0x30),&DAT_0107bf24,&DAT_0107bf7c,
                         L"-D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-");
            FUN_01056150(*(undefined8 *)(param_1 + 0xb60),local_30,*(undefined8 *)(param_1 + 0xb40),
                         1);
            FUN_0107b180(param_1);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_0107a920(param_1,&local_60,*(undefined8 *)(param_1 + 0xb38));
      FUN_00416cd0(&local_30,0xe,L"mplink /p",local_60,&DAT_0107bf7c,&DAT_0107c014,local_40,
                   L"\\lib\"",&DAT_0107bf7c,local_38,&DAT_0107bf7c,
                   L"/u_CRUNTIME /u_DEBUG /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1",&DAT_0107bf7c,
                   &DAT_0107c0c0,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".cof\"");
      FUN_01056150(*(undefined8 *)(param_1 + 0xb60),local_30,*(undefined8 *)(param_1 + 0xb40),1);
      FUN_0107b180(param_1);
    }
  }
  else if (param_2 == '\0') {
    FUN_00414b50(&local_30,L"make.exe");
    FUN_01056150(*(undefined8 *)(param_1 + 0xb60),local_30,*(undefined8 *)(param_1 + 0xb40),1);
    FUN_0107b180(param_1);
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_40,3);
  return;
}

