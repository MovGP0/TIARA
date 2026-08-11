/* Ghidra address: 01b67610 */
/* Ghidra symbol: FUN_01b67610 */


void FUN_01b67610(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00f83630(param_2,param_1 + 0xdb0);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x9c3) == '\0') {
      *(undefined1 *)(param_1 + 0xd78) = 1;
      FUN_010e4410(param_1,param_1);
      FUN_010f6af0(param_1,2,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
                (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
      FUN_01b64fa0(param_1,param_2);
      FUN_01b69a50(param_1);
    }
    else {
      uVar2 = FUN_0065b870(param_1);
      FUN_00f83670(uVar2,param_2);
    }
  }
  return;
}

