/* Ghidra address: 014b82b0 */
/* Ghidra symbol: FUN_014b82b0 */


undefined4 FUN_014b82b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 local_58 [48];
  
  uVar1 = FUN_0172c130(param_1,param_2);
  if ((char)uVar1 == '\0') {
    FUN_00414480(param_3);
  }
  else {
    FUN_01d39d80(local_58,param_1,param_2);
    FUN_004169a0(param_3,local_58);
  }
  return uVar1;
}

