/* Ghidra address: 0109dcf0 */
/* Ghidra symbol: FUN_0109dcf0 */


void FUN_0109dcf0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int local_2c;
  
  FUN_004b84c0(param_2,&local_2c,4);
  iVar1 = 0;
  if (-1 < local_2c + -1) {
    do {
      FUN_0109dab0(param_1,param_2,0,iVar1,param_3,param_4);
      iVar1 = iVar1 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_004b6dc0(param_2,0);
  return;
}

