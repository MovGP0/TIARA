/* Ghidra address: 008099d0 */
/* Ghidra symbol: FUN_008099d0 */


void FUN_008099d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00809950();
  if (cVar1 != '\0') {
    FUN_00809990(0);
  }
  thunk_FUN_03ab0e43(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00809990(1);
  }
  return;
}

