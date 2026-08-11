/* Ghidra address: 01090360 */
/* Ghidra symbol: FUN_01090360 */


void FUN_01090360(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  local_40[0] = 0;
  local_48 = 0;
  if (*(char *)((longlong)param_1 + 0xb52) == '\0') {
    FUN_0108f9d0(param_1,local_1c,local_20);
    cVar1 = FUN_01088e80(param_1,local_1c[0],local_2c);
    if (cVar1 == '\0') {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_48,PTR_PTR_02003950);
      FUN_00b8e650(uVar2,local_40,L"HDLStrings.Msg_NoLineInfo",local_48);
      FUN_0072d730(local_40[0],0xffffffff,0xffffffff);
    }
    else {
      (**(code **)(*param_1 + 0x348))(param_1,0);
      _MCU_SetAborted(param_1[0x164],0);
      if (param_1[0x9a4] != 0) {
        *(undefined4 *)(param_1[0x9a4] + 0x22c8) = 0;
      }
      cVar1 = FUN_01089170(param_1,local_1c[0],local_28);
      if (cVar1 == '\0') {
        FUN_01089060(param_1,local_1c[0]);
      }
      *(undefined1 *)((longlong)param_1 + 0xbfd) = 1;
      FUN_01087a10(param_1,param_2);
      *(undefined1 *)((longlong)param_1 + 0xbfd) = 0;
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

