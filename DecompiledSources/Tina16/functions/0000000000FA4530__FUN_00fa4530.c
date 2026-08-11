/* Ghidra address: 00fa4530 */
/* Ghidra symbol: FUN_00fa4530 */


void FUN_00fa4530(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [3];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  dVar6 = *(double *)(param_1 + 0x858);
  iVar5 = 0x10000;
  if ((*(int *)(param_1 + 0x870) == 8) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0)), cVar1 == '\0')) {
    iVar5 = 0x100;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),local_40);
  iVar2 = FUN_00f60f70(local_40[0]);
  if (iVar2 < 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),&DAT_00fa4894);
  }
  if (iVar5 <= iVar2) {
    FUN_0043f750(&local_48,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_48);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
            (*(longlong **)(param_1 + 0x6c0),*(undefined4 *)(param_1 + 0x878));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar2 = *(int *)(param_1 + 0x844 + (longlong)iVar2 * 4);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_50);
  iVar3 = FUN_00f60f70(local_50);
  dVar6 = (1.0 / (dVar6 / 4.0)) * (double)(iVar5 - iVar3) * (double)iVar2;
  if (0.0 < dVar6) {
    FUN_00b8fd60(&local_78,dVar6,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_70,3,L"Time: ",local_78,&DAT_00fa4910);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_70);
  }
  else {
    dVar6 = 0.0;
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02003e08);
    FUN_00b8e650(uVar4,&local_58,L"HDLStrings.Msg_FC_invalid_reload",local_60);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_58);
    FUN_0043f750(&local_68,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_68);
  }
  dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x758));
  if (dVar7 != dVar6) {
    *(undefined1 *)(param_1 + 0x874) = 1;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x758),dVar6);
    *(undefined1 *)(param_1 + 0x874) = 0;
  }
  FUN_00414560(&local_78,5);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

