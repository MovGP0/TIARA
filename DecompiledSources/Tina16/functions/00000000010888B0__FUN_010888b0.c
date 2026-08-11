/* Ghidra address: 010888b0 */
/* Ghidra symbol: FUN_010888b0 */


void FUN_010888b0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_10;
  
  local_10 = 0;
  uVar2 = _Debug_GetMainEntryPoint(*(undefined8 *)(param_1 + 0xb28),param_1 + 0xbfc);
  *(undefined4 *)(param_1 + 0xbf8) = uVar2;
  if (*(char *)(param_1 + 0x4c34) == '\0') {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x4c88) = uVar2;
    do {
      if ((*(char *)(param_1 + 0xb58) == '\0') && (*(char *)(param_1 + 0x4c36) == '\0')) {
        cVar1 = FUN_01088860(param_1,*(undefined4 *)(param_1 + 0x4c88),&local_10);
        if (cVar1 != '\0') goto LAB_01088960;
      }
      else {
LAB_01088960:
        if (*(int *)(param_1 + 0x4c88) != 0) {
          if (*(char *)(param_1 + 0xbfc) == '\0') goto LAB_010889a6;
          iVar3 = FUN_0108bb30(param_1);
          if (iVar3 == *(int *)(param_1 + 0xbf8)) goto LAB_010889a6;
        }
        cVar1 = FUN_0160ba00(*(undefined4 *)(param_1 + 0xad8));
        if (cVar1 == '\0') goto LAB_010889a6;
      }
      FUN_01087620(param_1);
      uVar2 = FUN_01085d30(param_1);
      *(undefined4 *)(param_1 + 0x4c88) = uVar2;
    } while( true );
  }
  FUN_01087910(param_1,*(undefined8 *)PTR_DAT_02004030);
LAB_010889e5:
  if (*(char *)(param_1 + 0x4c36) == '\0') {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x4c88) = uVar2;
    uVar2 = FUN_01085d60(param_1,uVar2,param_1 + 0x4cb0,0);
    *(undefined4 *)(param_1 + 0x4c94) = uVar2;
    FUN_010860d0(param_1,*(undefined8 *)(param_1 + 0x4cb0));
    FUN_01085cd0(param_1);
    FUN_010892f0(param_1);
  }
  FUN_00414480(&local_10);
  return;
LAB_010889a6:
  *(undefined4 *)(param_1 + 0x4c8c) = 0;
  _Debug_SetTraceOverPc(*(undefined8 *)(param_1 + 0xb20),0);
  _Debug_ClearStackFrames(*(undefined8 *)(param_1 + 0xb20));
  goto LAB_010889e5;
}

