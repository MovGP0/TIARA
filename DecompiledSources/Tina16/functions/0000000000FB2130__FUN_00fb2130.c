/* Ghidra address: 00fb2130 */
/* Ghidra symbol: FUN_00fb2130 */


void FUN_00fb2130(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),local_30);
  iVar1 = FUN_00f60f70(local_30[0]);
  if (iVar1 < 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fb24a0);
  }
  if (0xff < iVar1) {
    FUN_0043f750(&local_38,0xff);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_38);
  }
  dVar4 = *(double *)(param_1 + 0xc08);
  FUN_0043e130(&local_40,*(undefined8 *)(param_1 + 0xc20));
  iVar1 = FUN_004170c0(L"ATMEGA",local_40,1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_48,*(undefined8 *)(param_1 + 0xc20));
    iVar1 = FUN_004170c0(&DAT_00fb24cc,local_48,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      iVar1 = *(int *)(param_1 + 0x734 + (longlong)iVar1 * 4);
      goto LAB_00fb22c5;
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  iVar1 = *(int *)(param_1 + 0x754 + (longlong)iVar1 * 4);
LAB_00fb22c5:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_50);
  iVar2 = FUN_00f60f70(local_50);
  dVar4 = (1.0 / dVar4) * (double)(0x100 - iVar2) * (double)iVar1;
  if (0.0 < dVar4) {
    FUN_00b8fd60(&local_78,dVar4,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(&local_70,3,L"Time: ",local_78,&DAT_00fb254c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_70);
  }
  else {
    dVar4 = 0.0;
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02003e08);
    FUN_00b8e650(uVar3,&local_58,L"HDLStrings.Msg_FC_invalid_reload",local_60);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_58);
    FUN_0043f750(&local_68,0xff);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_68);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),dVar4);
  FUN_00414560(&local_78,5);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,3);
  FUN_00414480(local_30);
  return;
}

