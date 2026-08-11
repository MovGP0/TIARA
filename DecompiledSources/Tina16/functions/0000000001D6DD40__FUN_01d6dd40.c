/* Ghidra address: 01d6dd40 */
/* Ghidra symbol: FUN_01d6dd40 */


void FUN_01d6dd40(undefined8 param_1,char param_2,undefined1 param_3,undefined1 param_4,char param_5
                 ,undefined8 param_6,longlong param_7)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = 1;
  for (cVar2 = param_2; cVar2 != '\0'; cVar2 = cVar2 + -1) {
    FUN_016ec970(param_1,param_5 + bVar1 + -1,
                 *(undefined1 *)
                  (*(longlong *)(*(longlong *)(param_7 + 0x28) + -0x228 + (ulonglong)bVar1 * 0x228)
                  + 2),param_3,param_4);
    bVar1 = bVar1 + 1;
  }
  if (*(char *)(param_7 + 0x9cc0) != '\0') {
    cVar2 = '\x01';
    for (; param_2 != '\0'; param_2 = param_2 + -1) {
      FUN_016ed220(param_1,param_5 + cVar2 + -1,0,0);
      cVar2 = cVar2 + '\x01';
    }
  }
  return;
}

