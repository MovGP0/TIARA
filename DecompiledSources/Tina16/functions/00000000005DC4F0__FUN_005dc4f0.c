/* Ghidra address: 005dc4f0 */
/* Ghidra symbol: FUN_005dc4f0 */


undefined4 FUN_005dc4f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_005dc0b0(param_1);
  }
  FUN_005dbea0(param_1,local_20,param_2);
  cVar1 = FUN_005e13b0(*(undefined8 *)(param_1 + 0x10),local_20[0],&local_c);
  if (cVar1 == '\0') {
    local_c = 0xffffffff;
  }
  FUN_00414480(local_20);
  return local_c;
}

