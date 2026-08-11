/* Ghidra address: 00d8d010 */
/* Ghidra symbol: FUN_00d8d010 */


void FUN_00d8d010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  uStack_58 = param_5[2];
  local_50 = (longlong *)param_5[3];
  local_48 = param_5[4];
  lVar4 = 0;
  iVar1 = FUN_00416db0(param_6,L"default");
  if (iVar1 != 0) {
    lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
  }
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd0);
  }
  if ((char)local_48 == '\0') {
    plVar5 = (longlong *)FUN_00d77610(lVar4,L"Checked");
    if ((plVar5 == (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x30) != 0)) {
      plVar5 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30),L"Checked");
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_004238d0(local_78,0,0,*(undefined4 *)((longlong)plVar5 + 0x84),(int)plVar5[0x11]);
      FUN_00d57690(local_88,local_78,&local_68);
      FUN_00d77b90(plVar5,local_78);
      (**(code **)(*plVar5 + 0xa8))(plVar5,param_3,&DAT_01ecf394);
    }
  }
  else if ((char)local_48 == '\x01') {
    plVar5 = (longlong *)FUN_00d77610(lVar4,L"Unchecked");
    if ((plVar5 == (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x30) != 0)) {
      plVar5 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30),L"Unchecked");
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_004238d0(local_78,0,0,*(undefined4 *)((longlong)plVar5 + 0x84),(int)plVar5[0x11]);
      FUN_00d57690(local_88,local_78,&local_68);
      FUN_00d77b90(plVar5,local_78);
      (**(code **)(*plVar5 + 0xa8))(plVar5,param_3,&DAT_01ecf394);
    }
  }
  else if ((char)local_48 == '\x02') {
    plVar5 = (longlong *)FUN_00d77610(lVar4,L"Mixed");
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xd0),L"Checked");
    }
    if ((plVar5 == (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x30) != 0)) {
      plVar5 = (longlong *)
               FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30),L"Mixed");
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)
                 FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x30),L"Checked");
      }
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_004238d0(local_78,0,0,*(undefined4 *)((longlong)plVar5 + 0x84),(int)plVar5[0x11]);
      FUN_00d57690(local_88,local_78,&local_68);
      FUN_00d77b90(plVar5,local_78);
      (**(code **)(*plVar5 + 0xa8))(plVar5,param_3,&DAT_01ecf394);
    }
  }
  else if (((char)local_48 == '\x03') && (local_50 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*local_50 + 0x60))(local_50);
    uVar3 = (**(code **)(*local_50 + 0x48))(local_50);
    FUN_00423010(local_78,0,0,uVar2,uVar3);
    FUN_00d57690(local_88,local_78,&local_68);
    FUN_00d58940(local_50,param_3,local_78);
  }
  return;
}

