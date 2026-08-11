/* Ghidra address: 00af5780 */
/* Ghidra symbol: FUN_00af5780 */


void FUN_00af5780(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  char *local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  char local_1e;
  char local_1d;
  undefined4 local_1c;
  
  local_30 = auStack_88;
  local_40 = 0;
  local_38 = 0;
  FUN_00afe640(param_1,1);
  local_1d = (char)param_1[0x126];
  *(undefined1 *)(param_1 + 0x126) = 0;
  while( true ) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x124] + 0x28))((longlong *)param_1[0x124]);
    if (iVar2 < 1) break;
    uVar3 = (**(code **)(*(longlong *)param_1[0x124] + 0x30))((longlong *)param_1[0x124],0);
    cVar1 = FUN_004113d0(uVar3,&DAT_00a43080);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)param_1[0x124] + 0x18))((longlong *)param_1[0x124],&local_40,0);
      uVar3 = (**(code **)(*(longlong *)param_1[0x124] + 0x30))((longlong *)param_1[0x124],0);
      FUN_00aa7510(param_1[0x116],local_40,uVar3,&local_1e);
    }
    else {
      uVar3 = (**(code **)(*(longlong *)param_1[0x124] + 0x30))((longlong *)param_1[0x124],0);
      local_28 = FUN_004113f0(uVar3,&DAT_00a43080);
      (**(code **)(*(longlong *)param_1[0x124] + 0x18))((longlong *)param_1[0x124],&local_38,0);
      local_68 = *(undefined1 *)(local_28 + 0x14);
      local_60 = *(undefined1 *)(local_28 + 0x15);
      local_58 = &local_1e;
      FUN_00aa7720(param_1[0x116],local_38,*(undefined8 *)(local_28 + 8),
                   *(undefined4 *)(local_28 + 0x10));
    }
    if (local_1e != '\0') {
      local_1d = '\x01';
    }
    uVar3 = (**(code **)(*(longlong *)param_1[0x124] + 0x30))((longlong *)param_1[0x124]);
    FUN_00410f20(uVar3);
    (**(code **)(*(longlong *)param_1[0x124] + 0x98))((longlong *)param_1[0x124]);
  }
  FUN_00aa84c0(param_1[0x116]);
  if ((local_1d != '\0') && (0 < *(int *)(param_1[0x116] + 0x10))) {
    local_1c = FUN_00af5fb0(param_1);
    FUN_00af2250(param_1);
    FUN_00af6000(param_1,local_1c);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  FUN_00afe640(param_1,0);
  FUN_00414560(&local_40,2);
  return;
}

