/* Ghidra address: 00b21840 */
/* Ghidra symbol: FUN_00b21840 */


undefined8 FUN_00b21840(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  cVar1 = FUN_00b21610(param_1,&local_10);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,5);
    FUN_004134c0(uVar2);
  }
  return local_10;
}

