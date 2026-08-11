/* Ghidra address: 0044b200 */
/* Ghidra symbol: FUN_0044b200 */


undefined8 FUN_0044b200(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20 [2];
  
  cVar1 = FUN_0044b250(param_1,local_20,param_2);
  if (cVar1 == '\0') {
    local_30 = 0x11;
    local_38 = param_1;
    FUN_0043dbd0(PTR_PTR_02003558,&local_38,0);
  }
  return local_20[0];
}

