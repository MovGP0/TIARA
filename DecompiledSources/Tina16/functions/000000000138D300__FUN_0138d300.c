/* Ghidra address: 0138d300 */
/* Ghidra symbol: FUN_0138d300 */


void FUN_0138d300(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xe44) != '\0') {
    cVar1 = *(char *)(param_1 + 0x7fa);
    if ((cVar1 == '\x04') || (cVar1 == '\x0f')) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xb68),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xda0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xde8),1);
    }
    else if (cVar1 == '\b') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xb68),0);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0xda0),
                   *(undefined4 *)(*(longlong *)(param_1 + 0xb68) + 0x90));
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xda0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xde8),0);
    }
    *(undefined1 *)(param_1 + 0xe44) = 0;
  }
  FUN_010f9770(param_1,param_2);
  FUN_01384540(param_1);
  return;
}

