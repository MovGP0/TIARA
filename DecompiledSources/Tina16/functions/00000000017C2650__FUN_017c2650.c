/* Ghidra address: 017c2650 */
/* Ghidra symbol: FUN_017c2650 */


undefined8 FUN_017c2650(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = param_3;
  local_2c = param_4;
  FUN_017c3000(param_1,local_40);
  FUN_00b956f0(local_40);
  FUN_00b95880(local_40,2,2);
  cVar1 = FUN_00b958b0(local_40,&local_30);
  if ((cVar1 != '\0') && (iVar2 = FUN_017c2460(param_1,param_3,param_4), iVar2 < 3)) {
    return 1;
  }
  return 0;
}

