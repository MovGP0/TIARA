/* Ghidra address: 00f606d0 */
/* Ghidra symbol: FUN_00f606d0 */


undefined8 FUN_00f606d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_1;
  local_10 = (int)uVar1;
  local_18 = (int)*param_2;
  if ((local_10 == local_18) &&
     (uStack_c = (int)((ulonglong)uVar1 >> 0x20), uStack_14 = (int)((ulonglong)*param_2 >> 0x20),
     uStack_c == uStack_14)) {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar1 >> 0x28),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

