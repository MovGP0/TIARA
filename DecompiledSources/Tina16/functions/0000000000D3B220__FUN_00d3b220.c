/* Ghidra address: 00d3b220 */
/* Ghidra symbol: FUN_00d3b220 */


void FUN_00d3b220(longlong param_1)

{
  char cVar1;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  
  thunk_FUN_03cc0d62(&local_20);
  cVar1 = FUN_00422c60(param_1 + 0x80,&local_20);
  if (cVar1 != '\0') {
    cVar1 = FUN_00422c60(param_1 + 0x90,&local_20);
    if (cVar1 != '\0') {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x671,CONCAT22(uStack_1c,local_20),0);
      *(ulonglong *)(param_1 + 0x80) =
           CONCAT26(uStack_1a,CONCAT24(uStack_1c,CONCAT22(uStack_1e,local_20)));
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    }
  }
  return;
}

