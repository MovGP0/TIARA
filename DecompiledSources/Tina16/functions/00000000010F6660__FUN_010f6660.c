/* Ghidra address: 010f6660 */
/* Ghidra symbol: FUN_010f6660 */


void FUN_010f6660(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                 char *param_5)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_5;
  *param_5 = '\0';
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x20))
            (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990),
             *(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x40),
             *(undefined8 *)(param_2 + 0x50),param_2 + 0x80,*(undefined4 *)(param_2 + 0x94),param_3,
             param_4,param_5,param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x50) = 0;
  if ((cVar1 == '\0') || (*param_5 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),*param_5);
  }
  return;
}

