/* Ghidra address: 00c7d700 */
/* Ghidra symbol: FUN_00c7d700 */


bool FUN_00c7d700(undefined8 param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_3 == -1) {
    iVar1 = thunk_FUN_040f0269(0xffff,0xffffffff);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

