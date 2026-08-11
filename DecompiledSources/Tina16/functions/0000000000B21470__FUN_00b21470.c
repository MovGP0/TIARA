/* Ghidra address: 00b21470 */
/* Ghidra symbol: FUN_00b21470 */


undefined4 FUN_00b21470(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_c;
  
  cVar1 = FUN_00b211f0(param_1,&local_c);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,5);
    FUN_004134c0(uVar2);
  }
  return local_c;
}

