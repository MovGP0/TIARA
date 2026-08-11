/* Ghidra address: 0080c960 */
/* Ghidra symbol: FUN_0080c960 */


undefined1 FUN_0080c960(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  char local_29 [9];
  
  local_29[0] = '\0';
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    (**(code **)(param_1 + 0x2a0))(*(undefined8 *)(param_1 + 0x2a8),param_2,local_29);
  }
  if (local_29[0] == '\0') {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      uVar4 = FUN_0065b870(*(longlong *)(param_1 + 0xa8));
      iVar3 = thunk_FUN_03986dbd(uVar4);
      if (iVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        pcVar5 = (code *)FUN_00411550(uVar4,0xffa0);
        cVar1 = (*pcVar5)(uVar4,param_2);
        if (cVar1 != '\0') goto LAB_0080c9dc;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_0080c9dc:
    uVar2 = 1;
  }
  return uVar2;
}

