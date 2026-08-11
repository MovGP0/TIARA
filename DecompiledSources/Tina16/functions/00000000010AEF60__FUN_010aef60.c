/* Ghidra address: 010aef60 */
/* Ghidra symbol: FUN_010aef60 */


void FUN_010aef60(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_2c [3];
  
  cVar1 = FUN_010aed00(param_1,param_2,param_3,local_2c);
  if (cVar1 == '\0') {
    FUN_010aeba0(param_1,param_2,param_3,1);
  }
  else {
    FUN_010aecc0(param_1,local_2c[0]);
  }
  return;
}

