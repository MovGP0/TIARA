/* Ghidra address: 01ab4310 */
/* Ghidra symbol: FUN_01ab4310 */


undefined8 FUN_01ab4310(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_2;
  if ((((local_10 < *(int *)(*(longlong *)(param_1 + 0xf8) + 0xe8)) ||
       (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xec) < local_10)) ||
      (uStack_c = (int)((ulonglong)*param_2 >> 0x20),
      uStack_c < *(int *)(*(longlong *)(param_1 + 0x100) + 0xec))) ||
     (*(int *)(*(longlong *)(param_1 + 0x100) + 0xe8) < uStack_c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x100) >> 8),1);
  }
  return uVar1;
}

