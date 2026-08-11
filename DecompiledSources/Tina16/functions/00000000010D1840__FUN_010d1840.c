/* Ghidra address: 010d1840 */
/* Ghidra symbol: FUN_010d1840 */


longlong FUN_010d1840(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_308 [256];
  char local_208;
  undefined8 *local_1f0;
  undefined8 *local_190;
  
  for (iVar2 = 0; iVar2 <= *(int *)(param_1 + 0x10) + -1; iVar2 = iVar2 + 1) {
    FUN_010d3290(param_1,iVar2,local_308);
    if (local_208 == '\b') {
      uVar1 = (**(code **)*local_1f0)(local_1f0);
      FUN_004095f0(uVar1);
    }
    if (local_208 == '\x14') {
      uVar1 = (**(code **)*local_190)(local_190);
      FUN_004095f0(uVar1);
    }
  }
  FUN_00b94e30(param_1);
  return param_1;
}

