/* Ghidra address: 00c00d70 */
/* Ghidra symbol: FUN_00c00d70 */


void FUN_00c00d70(longlong param_1)

{
  char cVar1;
  undefined4 local_1c [3];
  
  if (*(char *)(param_1 + 0x498) != '\0') {
    cVar1 = FUN_00bdfaa0(*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x4cc),local_1c)
    ;
    if (cVar1 != '\0') {
      FUN_00c00b80(param_1,local_1c[0],1);
    }
    FUN_00c03710(param_1);
  }
  return;
}

