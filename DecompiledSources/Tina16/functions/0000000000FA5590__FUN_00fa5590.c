/* Ghidra address: 00fa5590 */
/* Ghidra symbol: FUN_00fa5590 */


void FUN_00fa5590(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  dVar6 = *(double *)(param_1 + 0x868);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar2 = *(int *)(param_1 + 0x844 + (longlong)iVar2 * 4);
  iVar5 = 0x10000;
  if (*(int *)(param_1 + 0x870) == 8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    if (cVar1 == '\0') {
      iVar5 = 0x100;
    }
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_60);
  iVar3 = FUN_00f60f70(local_60);
  if (iVar3 < 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),&DAT_00fa58d0);
  }
  if (iVar5 <= iVar3) {
    FUN_0043f750(&local_68,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_68);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_70);
  iVar3 = FUN_00f60f70(local_70);
  dVar6 = (1.0 / (dVar6 / 4.0)) * (double)(iVar5 - iVar3) * (double)iVar2;
  if (0.0 < dVar6) {
    FUN_00b8fd60(&local_98,dVar6,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_90,3,L"Time: ",local_98,&DAT_00fa594c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_90);
  }
  else {
    dVar6 = 0.0;
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_80,PTR_PTR_02003e08);
    FUN_00b8e650(uVar4,&local_78,L"HDLStrings.Msg_FC_invalid_reload",local_80);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_78);
    FUN_0043f750(&local_88,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_88);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x7b8),dVar6);
  FUN_00414560(&local_98,5);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00460ba0(&local_50);
  return;
}

