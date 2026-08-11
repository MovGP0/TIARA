/* Ghidra address: 00c00c30 */
/* Ghidra symbol: FUN_00c00c30 */


void FUN_00c00c30(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x498) != '\0') {
    while( true ) {
      cVar1 = FUN_00be0900(*(undefined8 *)(param_1 + 0x4a8),param_2,&local_1c);
      if (cVar1 == '\0') break;
      FUN_00c00b80(param_1,local_1c,1);
    }
  }
  return;
}

