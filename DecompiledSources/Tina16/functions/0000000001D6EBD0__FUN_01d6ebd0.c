/* Ghidra address: 01d6ebd0 */
/* Ghidra symbol: FUN_01d6ebd0 */


void FUN_01d6ebd0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = FUN_016eb0a0(param_1,1);
  uVar2 = FUN_016e9de0(param_1,2);
  if ((char)uVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  }
  FUN_01d6eb30(param_1,1,uVar1,local_20);
  return;
}

