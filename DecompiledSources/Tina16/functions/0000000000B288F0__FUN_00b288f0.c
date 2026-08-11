/* Ghidra address: 00b288f0 */
/* Ghidra symbol: FUN_00b288f0 */


undefined2 FUN_00b288f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 local_1a;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b15100(&local_10,param_2);
  iVar1 = FUN_00b19450(*(undefined8 *)(param_1 + 0x10),local_10);
  if (iVar1 < 0) {
    local_1a = 0xffff;
  }
  else {
    local_1a = (undefined2)iVar1;
  }
  FUN_004144d0(&local_10);
  return local_1a;
}

