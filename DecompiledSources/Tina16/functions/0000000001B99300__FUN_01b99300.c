/* Ghidra address: 01b99300 */
/* Ghidra symbol: FUN_01b99300 */


void FUN_01b99300(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))(*(longlong **)(param_1 + 0x7f0));
  if (cVar1 == '\0') {
    FUN_006e4390(*(undefined8 *)(param_1 + 0x7e8),0);
    FUN_006e2350(*(undefined8 *)(param_1 + 0x7e8),1);
  }
  else {
    FUN_006e4390(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 0x8a0));
  }
  return;
}

