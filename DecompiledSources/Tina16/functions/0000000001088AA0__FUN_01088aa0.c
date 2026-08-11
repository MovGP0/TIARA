/* Ghidra address: 01088aa0 */
/* Ghidra symbol: FUN_01088aa0 */


void FUN_01088aa0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0xb52) == '\0') {
    iVar2 = FUN_00c08890(*(undefined8 *)(param_1 + 0xa78));
    if (iVar2 == 0) {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_48,PTR_PTR_02003950);
      FUN_00b8e650(uVar3,&local_40,L"HDLStrings.Msg_NoLineInfo",local_48);
      FUN_0072d730(local_40,0xffffffff,0xffffffff);
    }
    else {
      FUN_0108f9d0(param_1,local_1c,local_20);
      cVar1 = FUN_01088e80(param_1,local_1c[0],&local_24);
      if (cVar1 == '\0') {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_38,PTR_PTR_02003950);
        FUN_00b8e650(uVar3,&local_30,L"HDLStrings.Msg_NoLineInfo",local_38);
        FUN_0072d730(local_30,0xffffffff,0xffffffff);
      }
      else {
        FUN_010890f0(param_1,local_1c[0]);
        _MCU_ToggleBreakPoint(*(undefined8 *)(param_1 + 0xb20),local_24);
        (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x180))(*(longlong **)(param_1 + 0xa78));
        iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x798));
        if (iVar2 == 3) {
          FUN_01088c80(param_1);
        }
      }
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

