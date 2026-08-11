/* Ghidra address: 0110ea50 */
/* Ghidra symbol: FUN_0110ea50 */


undefined8 FUN_0110ea50(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_1c;
  
  uVar2 = 0;
  FUN_010bfea0((double)*param_2,0x408f400000000000,0x4000000000000000,&local_1c);
  iVar1 = FUN_0040c770();
  *param_2 = iVar1;
  if (local_1c != 0) {
    uVar2 = 0x132;
  }
  return uVar2;
}

