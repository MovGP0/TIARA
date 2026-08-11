/* Ghidra address: 009ec9b0 */
/* Ghidra symbol: FUN_009ec9b0 */


void FUN_009ec9b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_00410f20(uVar1);
  }
  else {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      uVar1 = FUN_009ec850(&PTR_FUN_009eb620,1,0);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      FUN_0060be90(uVar1,1);
      FUN_0060be30(*(undefined8 *)(param_1 + 0x70),0x1fffffff);
    }
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))(*(longlong **)(param_1 + 0x70),param_2);
  }
  return;
}

