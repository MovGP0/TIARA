/* Ghidra address: 01b669b0 */
/* Ghidra symbol: FUN_01b669b0 */


void FUN_01b669b0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined1 local_20 [16];
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_0153b700(local_20,&local_28,local_3c,&local_58,local_30,&local_38,local_40,&local_60,0);
  FUN_010c04f0(&local_58);
  FUN_010c04f0(&local_60);
  plVar1 = *(longlong **)(param_1 + 0xcb0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  lVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar2);
  FUN_00414b50(&local_48,*(undefined8 *)(PTR_PTR_02004640 + (longlong)*(short *)(lVar4 + 0x2e) * 8))
  ;
  (**(code **)(**(longlong **)(param_1 + 0xd38) + 0x128))(*(longlong **)(param_1 + 0xd38),1);
  iVar3 = FUN_0044f900(local_48,local_58);
  if (iVar3 == 0) {
    iVar3 = FUN_0044f900(local_48,local_60);
    if (iVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xd38) + 0x128))(*(longlong **)(param_1 + 0xd38),0);
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0xd38),local_38);
    }
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd38),local_28);
  }
  FUN_00414560(&local_60,4);
  return;
}

