/* Ghidra address: 0107adc0 */
/* Ghidra symbol: FUN_0107adc0 */


void FUN_0107adc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450 [2];
  undefined8 local_440;
  undefined1 local_432 [1025];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  
  local_460 = 0;
  local_458 = 0;
  local_450[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_440 = 0;
  iVar4 = 0;
LAB_0107aee7:
  do {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x28))(*(longlong **)(param_1 + 0xb60));
    if (iVar2 + -1 < iVar4) break;
    (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x18))
              (*(longlong **)(param_1 + 0xb60),local_450,iVar4);
    FUN_0043e1a0(&local_28,local_450[0]);
    iVar2 = FUN_004170c0(L"message:",local_28,1);
    if (0 < iVar2) {
LAB_0107ae74:
      (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x98))(*(longlong **)(param_1 + 0xb60),iVar4);
      goto LAB_0107aee7;
    }
    iVar2 = FUN_004170c0(L"errors",local_28,1);
    if (0 < iVar2) goto LAB_0107ae74;
    iVar2 = FUN_004170c0(L"error",local_28,1);
    if (iVar2 == 0) {
      iVar2 = FUN_004170c0(L"warning",local_28,1);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x98))
                  (*(longlong **)(param_1 + 0xb60),iVar4);
        goto LAB_0107aee7;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
  cVar1 = FUN_00f81d50(*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    cVar1 = FUN_00f81d60(*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 == '\0') goto code_r0x0107b06a;
  }
  FUN_004414c0(&local_458,*(undefined8 *)(param_1 + 0x4cc0),L".err");
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0107b158,local_458);
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x100))(*(longlong **)(param_1 + 0xb60),local_30);
  cVar1 = FUN_010b3a90(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    uVar3 = FUN_00442620(param_1 + 0xc08,local_30);
    _CheckC18Error(uVar3,&local_31,local_432,local_1c);
  }
  else {
    uVar3 = FUN_00442620(param_1 + 0xc08,local_30);
    _CheckXC8Error(uVar3,&local_31,local_432,local_1c);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
  FUN_00415500(&local_440,local_432,0x401,0);
  FUN_00416880(&local_460,local_440);
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x78))(*(longlong **)(param_1 + 0xb60),local_460);
code_r0x0107b06a:
  FUN_00414560(&local_460,3);
  FUN_004144d0(&local_440);
  FUN_00414560(&local_30,2);
  return;
}

