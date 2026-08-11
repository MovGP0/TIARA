/* Ghidra address: 0046c930 */
/* Ghidra symbol: FUN_0046c930 */


undefined8 FUN_0046c930(undefined8 param_1)

{
  char cVar1;
  undefined1 local_12 [2];
  undefined8 local_10;
  
  cVar1 = FUN_0046c6f0(param_1,local_12,&local_10);
  if (cVar1 == '\0') {
    FUN_004607e0(0x80070057);
  }
  return local_10;
}

