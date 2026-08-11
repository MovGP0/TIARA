/* Ghidra address: 010f6d70 */
/* Ghidra symbol: FUN_010f6d70 */


void FUN_010f6d70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00f83630(param_2,param_1 + 0x9c4);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x9c0) == '\0') {
      FUN_010e7ef0(*(undefined8 *)(param_1 + 0x9b0),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x328),
                   *(undefined1 *)(param_2 + 0x10));
      FUN_010f6de0(param_1,param_2);
    }
    else {
      uVar2 = FUN_0065b870(param_1);
      FUN_00f83670(uVar2,param_2);
    }
  }
  return;
}

