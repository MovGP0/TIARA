/* Ghidra address: 005ebb80 */
/* Ghidra symbol: FUN_005ebb80 */


undefined8 FUN_005ebb80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char local_21;
  undefined8 local_20 [2];
  
  iVar1 = FUN_005ebde0(param_1,param_2,local_20,8,&local_21);
  if ((local_21 != '\x04') || (iVar1 != 8)) {
    FUN_005ea1b0(param_2);
  }
  return local_20[0];
}

