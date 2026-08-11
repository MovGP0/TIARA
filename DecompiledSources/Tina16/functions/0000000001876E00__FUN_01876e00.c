/* Ghidra address: 01876e00 */
/* Ghidra symbol: FUN_01876e00 */


void FUN_01876e00(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == '\0') || (*(longlong *)(param_1 + 8) != 0)) {
    FUN_00452320(param_1 + 8);
    *(longlong *)(param_1 + 0x28) = param_1;
    *(code **)(param_1 + 0x20) = FUN_01876f70;
    *(longlong *)(param_1 + 0x38) = param_1;
    *(code **)(param_1 + 0x30) = FUN_01876f80;
  }
  else {
    uVar1 = FUN_01876a20(&DAT_018750c8,1);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(longlong *)(param_1 + 0x28) = param_1;
    *(code **)(param_1 + 0x20) = FUN_01876e80;
    *(longlong *)(param_1 + 0x38) = param_1;
    *(code **)(param_1 + 0x30) = FUN_01876f60;
  }
  return;
}

