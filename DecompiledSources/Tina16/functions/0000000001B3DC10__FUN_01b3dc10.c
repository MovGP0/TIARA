/* Ghidra address: 01b3dc10 */
/* Ghidra symbol: FUN_01b3dc10 */


void FUN_01b3dc10(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_01b3b450(&local_20,param_6);
  FUN_00414ad0(param_4,local_20);
  if ((*(char *)(param_2 + 0x1a0) == '\x01') && (FUN_01d04330(param_2,&local_28), local_28 != 0)) {
    FUN_01d04330(param_2,&local_30);
    FUN_01d04330(param_2,&local_38);
    iVar1 = FUN_004170c0(&DAT_01b3decc,local_38,1);
    FUN_01d04330(param_2,&local_40);
    iVar2 = FUN_004170c0(&DAT_01b3dedc,local_40,1);
    FUN_01d04330(param_2,&local_48);
    iVar3 = FUN_004170c0(&DAT_01b3decc,local_48,1);
    FUN_00416dc0(param_4 + 8,local_30,iVar1 + 1,(iVar2 - iVar3) + -1);
  }
  else {
    FUN_00414ad0(param_4 + 8,*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0x38));
  }
  FUN_01d04330(param_2,&local_50);
  FUN_00414ad0(param_4 + 0x18,local_50);
  *(int *)(param_4 + 0x34) = param_7;
  FUN_00419260(param_5,&DAT_004066f0,1,(longlong)param_7);
  iVar1 = *(int *)(param_4 + 0x34);
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar3 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar2);
      *(int *)(*param_5 + (longlong)iVar2 * 4) = iVar3;
      if (iVar3 == -1) {
        *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01b388b0(param_4 + 8);
  FUN_00414560(&local_50,7);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_6);
  return;
}

