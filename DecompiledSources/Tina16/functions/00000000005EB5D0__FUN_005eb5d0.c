/* Ghidra address: 005eb5d0 */
/* Ghidra symbol: FUN_005eb5d0 */


undefined4 FUN_005eb5d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  cVar1 = FUN_005eb550(param_1,param_2,local_10);
  if (cVar1 == '\0') {
    local_c = 0xffffffff;
  }
  return local_c;
}

