/* Ghidra address: 01630110 */
/* Ghidra symbol: FUN_01630110 */


void FUN_01630110(longlong param_1,longlong param_2,double param_3,char param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 local_c70;
  undefined1 local_c68;
  undefined8 local_c60;
  undefined1 local_c54 [4];
  undefined1 local_c50 [4];
  undefined1 local_c4c [4];
  undefined1 local_c48 [2048];
  undefined1 local_448 [1024];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c60 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 8);
  if (param_5 == '\0') {
    FUN_00414b50(&local_48,L"CROSS");
  }
  else {
    FUN_00414b50(&local_48,L"ABOVE");
  }
  if ((param_3 == 1.0) && ((*(uint *)(lVar1 + 0x5cc) & 2) != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x20);
    (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x18))
              (*(longlong **)(lVar2 + 0x58),&local_30,*(undefined4 *)(lVar1 + 0x5c0));
    FUN_00414b50(&local_40,L"std_logic");
    FUN_01b218c0(local_30,&local_38,&local_20);
    uVar4 = FUN_0043fc00(local_20);
    FUN_00442620(local_448,local_38);
    FUN_00442620(local_c48,local_40);
    cVar3 = _GetObjectProp(*(undefined8 *)(lVar2 + 0x10b0),local_448,local_c54);
    if (cVar3 == '\0') {
      local_c70 = local_38;
      local_c68 = 0x11;
      FUN_00442f70(&local_c60,L"VerilogAMS: object not found: %s",&local_c70,0);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_c60);
      FUN_004134c0(uVar5);
    }
    puVar6 = (undefined1 *)
             _GetDigitalValue(*(undefined8 *)(lVar2 + 0x10b0),0,uVar4,0x6f,local_c54,local_c50,
                              local_c4c);
    uVar4 = FUN_00e02540(*puVar6);
    FUN_00442620(local_448,local_38);
    FUN_00442620(local_c48,local_40);
    if ((*(char *)(lVar2 + 0x1108) == '\0') || (param_5 != '\0')) {
      if (*(double *)(param_1 + 0xd8) == 1.0) {
        uVar4 = 1;
      }
      if (*(double *)(param_1 + 0xd8) == -1.0) {
        uVar4 = 0;
      }
      if (*(double *)(param_1 + 0xd8) == 0.0) {
        uVar4 = FUN_016300f0(param_1,uVar4);
      }
      _AddSignalTransAction(*(undefined8 *)(lVar2 + 0x10b0),local_448,uVar4,local_c48);
      if (*(double *)(param_1 + 0xd8) != 0.0) {
        uVar4 = FUN_016300f0(param_1,uVar4);
        _AddSignalTransActionD
                  (*(undefined8 *)(lVar2 + 0x10b0),local_448,uVar4,local_c48,0x3e112e0be826d695);
      }
    }
    else {
      _AddSignalTransAction(*(undefined8 *)(lVar2 + 0x10b0),local_448,param_4 != '\0',local_c48);
    }
  }
  FUN_00414480(&local_c60);
  FUN_00414560(&local_48,6);
  return;
}

