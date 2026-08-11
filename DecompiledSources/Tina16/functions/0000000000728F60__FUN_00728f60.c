/* Ghidra address: 00728f60 */
/* Ghidra symbol: FUN_00728f60 */


void FUN_00728f60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  uVar2 = FUN_0041b800(&local_10);
  cVar1 = FUN_00452340(*(undefined8 *)(param_1 + 0x90),&LAB_00728fe8,uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*local_10 + 0x18))(local_10,param_1 + 200);
  }
  FUN_0041b800(&local_10);
  return;
}

