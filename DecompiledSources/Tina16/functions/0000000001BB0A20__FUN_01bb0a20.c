/* Ghidra address: 01bb0a20 */
/* Ghidra symbol: FUN_01bb0a20 */


void FUN_01bb0a20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_20 [4];
  int local_1c;
  
  cVar1 = FUN_01bb06d0(param_1,param_2,&local_1c,local_20);
  if (cVar1 != '\0') {
    *(bool *)param_3 = *(char *)(*(longlong *)(param_1 + 0x10) + (longlong)local_1c) != '\0';
  }
  return;
}

