/* Ghidra address: 010870c0 */
/* Ghidra symbol: FUN_010870c0 */


void FUN_010870c0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  bVar3 = true;
  bVar4 = true;
  if (*(char *)(param_1 + 0xb52) == '\0') {
    if (*(char *)(param_1 + 0x4c35) == '\0') {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_48,PTR_PTR_02003d60);
      FUN_00b8e650(uVar2,&local_40,L"HDLStrings.Msg_StopTheDebugger",local_48);
      FUN_016fd940(local_40);
      bVar4 = false;
    }
  }
  else {
    bVar4 = bVar3;
    if (*(char *)(param_1 + 0x4d48) == '\0') {
      cVar1 = FUN_010b27c0(*(undefined8 *)(param_1 + 0xac8));
      if ((cVar1 != '\0') || (*(char *)(*(longlong *)(param_1 + 0xa78) + 0x5e0) != '\0')) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_28,PTR_PTR_02005a30);
        FUN_00b8e650(uVar2,&local_20,L"HDLStrings.Msg_ProjectChangedWithCompile",local_28);
        cVar1 = FUN_01079230(param_1,local_20);
        if (cVar1 != '\0') {
          FUN_01084a30(param_1,param_2);
          bVar4 = *(char *)(param_1 + 0xb51) == '\0';
        }
      }
    }
    if (*(char *)(param_1 + 0xb51) == '\0') {
      cVar1 = FUN_010b2850(*(undefined8 *)(param_1 + 0xac8));
      if (cVar1 == '\0') {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_38,PTR_PTR_02002248);
        FUN_00b8e650(uVar2,&local_30,L"HDLStrings.Msg_ProjectChanged",local_38);
        cVar1 = FUN_01079230(param_1,local_30);
        if (cVar1 != '\0') {
          FUN_01079520(param_1,param_2);
        }
      }
    }
  }
  *param_3 = bVar4;
  FUN_00414560(&local_48,6);
  return;
}

