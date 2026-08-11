/* Ghidra address: 00527400 */
/* Ghidra symbol: FUN_00527400 */


undefined8 FUN_00527400(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (param_2 < 0x80000000) {
    iVar1 = param_2 + 1;
    do {
      FUN_005273d0(&local_20,&local_28,*param_1);
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return local_20;
}

