/* Ghidra address: 00f9f050 */
/* Ghidra symbol: FUN_00f9f050 */


void FUN_00f9f050(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  if (*(int *)(param_1 + 0x788) != 1) {
    dVar5 = *(double *)(param_1 + 0x740);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),local_30);
    iVar2 = FUN_00f60f70(local_30[0]);
    if (iVar2 < 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&DAT_00f9f3c8);
    }
    if (*(int *)(param_1 + 0x784) <= iVar2) {
      FUN_0043f750(&local_38,*(int *)(param_1 + 0x784) + -1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_38);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x758));
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      iVar2 = *(int *)(param_1 + 0x760 + (longlong)iVar2 * 4);
    }
    else {
      iVar2 = 1;
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x75c));
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_40);
    iVar3 = FUN_00f60f70(local_40);
    dVar5 = (1.0 / (dVar5 / 4.0)) * (double)(*(int *)(param_1 + 0x784) - iVar3) * (double)iVar2;
    if (0.0 < dVar5) {
      FUN_00b8fd60(&local_68,dVar5,*PTR_DAT_02005310,0,1);
      FUN_00416cd0(&local_60,3,L"Time: ",local_68,&DAT_00f9f444);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_60);
    }
    else {
      dVar5 = 0.0;
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_50,PTR_PTR_02003e08);
      FUN_00b8e650(uVar4,&local_48,L"HDLStrings.Msg_FC_invalid_reload",local_50);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_48);
      FUN_0043f750(&local_58,*(int *)(param_1 + 0x784) + -1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_58);
    }
    dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
    if (dVar6 != dVar5) {
      *(undefined1 *)(param_1 + 0x74c) = 1;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x700),dVar5);
      *(undefined1 *)(param_1 + 0x74c) = 0;
    }
  }
  FUN_00414560(&local_68,5);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

