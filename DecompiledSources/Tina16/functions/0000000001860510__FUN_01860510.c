/* Ghidra address: 01860510 */
/* Ghidra symbol: FUN_01860510 */


void FUN_01860510(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) != param_2) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      FUN_00452320(param_1 + 0x70);
    }
    else if (*(longlong *)(param_1 + 0x70) == 0) {
      uVar1 = FUN_01860570(&PTR_FUN_0185b3d8,1,0);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      FUN_0060be90(uVar1,1);
      FUN_0060be30(*(undefined8 *)(param_1 + 0x70),0x1fffffff);
    }
  }
  return;
}

