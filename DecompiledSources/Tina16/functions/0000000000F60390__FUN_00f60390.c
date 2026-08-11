/* Ghidra address: 00f60390 */
/* Ghidra symbol: FUN_00f60390 */


void FUN_00f60390(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_30 [2];
  
  cVar2 = FUN_00f60310(param_1,param_2,local_30);
  if (cVar2 == '\0') {
    uVar1 = FUN_00f60260(&DAT_00f5ff68,1,param_2,param_3);
    FUN_004ae7e0(param_1,uVar1);
  }
  else {
    FUN_004aee30(param_1,local_30[0]);
    FUN_00410f20(local_30[0]);
  }
  return;
}

