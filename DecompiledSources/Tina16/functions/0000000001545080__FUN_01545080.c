/* Ghidra address: 01545080 */
/* Ghidra symbol: FUN_01545080 */


void FUN_01545080(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_1c [3];
  
  cVar1 = FUN_0153fa80(*(undefined8 *)(param_1 + 0x10),param_2,local_1c);
  if (cVar1 != '\0') {
    FUN_01d34870(*(undefined8 *)(param_1 + 0x10),local_1c[0]);
  }
  return;
}

