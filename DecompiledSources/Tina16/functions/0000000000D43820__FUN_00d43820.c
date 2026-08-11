/* Ghidra address: 00d43820 */
/* Ghidra symbol: FUN_00d43820 */


void FUN_00d43820(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x42) & 1) == 0) {
    FUN_007899d0(param_1,param_2);
  }
  else if (*param_2 - 0x645U < 7) {
    uVar1 = FUN_00788c20(param_1);
    uVar1 = FUN_005fbf20(uVar1);
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar1);
    uVar1 = FUN_00788c10(param_1);
    uVar1 = FUN_005fbf20(uVar1);
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar1);
    uVar2 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  else {
    FUN_007899d0(param_1,param_2);
  }
  return;
}

