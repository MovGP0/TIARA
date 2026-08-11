/* Ghidra address: 00bb7800 */
/* Ghidra symbol: FUN_00bb7800 */


undefined8 FUN_00bb7800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_1;
  uStack_c = (int)((ulonglong)uVar1 >> 0x20);
  uStack_14 = (int)((ulonglong)*param_2 >> 0x20);
  if ((uStack_c == uStack_14) &&
     (local_10 = (int)uVar1, local_18 = (int)*param_2, local_10 == local_18)) {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar1 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

