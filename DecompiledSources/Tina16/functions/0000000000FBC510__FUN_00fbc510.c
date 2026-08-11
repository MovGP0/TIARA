/* Ghidra address: 00fbc510 */
/* Ghidra symbol: FUN_00fbc510 */


void FUN_00fbc510(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  dVar6 = *(double *)(param_1 + 0xd30);
  FUN_0043e130(local_50,*(undefined8 *)(param_1 + 0xd48));
  iVar1 = FUN_004170c0(L"ATTINY26",local_50[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_60,*(undefined8 *)(param_1 + 0xd48));
    iVar1 = FUN_004170c0(L"ATTINY24",local_60,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      iVar1 = *(int *)(param_1 + 0x81c + (longlong)iVar1 * 4);
      iVar5 = 0x10000;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_70);
      iVar2 = FUN_00f60f70(local_70);
      iVar2 = 0x10000 - iVar2;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      iVar1 = *(int *)(param_1 + 0x87c + (longlong)iVar1 * 4);
      iVar5 = 0x100;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_68);
      iVar2 = FUN_00f60f70(local_68);
      iVar2 = 0x100 - iVar2;
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    iVar1 = *(int *)(param_1 + 0x83c + (longlong)iVar1 * 4);
    iVar5 = 0x100;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_58);
    iVar2 = FUN_00f60f70(local_58);
    iVar2 = 0x100 - iVar2;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_78);
  iVar3 = FUN_00f60f70(local_78);
  if (iVar3 < 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fbc99c);
  }
  if (iVar5 <= iVar3) {
    FUN_0043f750(&local_80,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_80);
  }
  dVar6 = (1.0 / dVar6) * (double)iVar2 * (double)iVar1;
  if (0.0 < dVar6) {
    FUN_00b8fd60(&local_a8,dVar6,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_a0,3,L"Time: ",local_a8,&DAT_00fbca18);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_a0);
  }
  else {
    dVar6 = 0.0;
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_90,PTR_PTR_02003e08);
    FUN_00b8e650(uVar4,&local_88,L"HDLStrings.Msg_FC_invalid_reload",local_90);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_88);
    FUN_0043f750(&local_98,iVar5 + -1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_98);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x780),dVar6);
  FUN_00414560(&local_a8,6);
  FUN_00414560(&local_78,3);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

