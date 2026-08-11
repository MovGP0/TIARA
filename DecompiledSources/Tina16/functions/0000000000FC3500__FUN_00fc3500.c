/* Ghidra address: 00fc3500 */
/* Ghidra symbol: FUN_00fc3500 */


void FUN_00fc3500(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
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
  local_60[0] = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  dVar5 = *(double *)(param_1 + 0xbf0);
  if (*(int *)(param_1 + 0xb18) == 0) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0xb18) == 1) {
    iVar3 = 0x10000;
  }
  else {
    iVar3 = 0x100;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),local_60);
  iVar1 = FUN_00f60f70(local_60[0]);
  if (iVar1 < 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),&DAT_00fc37f4);
  }
  if (iVar3 <= iVar1) {
    FUN_0043f750(&local_68,iVar3 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_68);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_70);
  iVar1 = FUN_00f60f70(local_70);
  dVar5 = (1.0 / (dVar5 / 6.0)) * (double)(iVar3 - iVar1) * (double)iVar4;
  if (0.0 < dVar5) {
    FUN_00b8fd60(&local_98,dVar5,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_90,3,L"Time: ",local_98,&DAT_00fc3870);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_90);
  }
  else {
    dVar5 = 0.0;
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_80,PTR_PTR_02003e08);
    FUN_00b8e650(uVar2,&local_78,L"HDLStrings.Msg_FC_invalid_reload",local_80);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_78);
    FUN_0043f750(&local_88,iVar3 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_88);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),dVar5);
  FUN_00414560(&local_98,5);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(local_60);
  FUN_00460ba0(&local_50);
  return;
}

