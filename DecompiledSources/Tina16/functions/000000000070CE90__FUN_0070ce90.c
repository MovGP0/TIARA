/* Ghidra address: 0070ce90 */
/* Ghidra symbol: FUN_0070ce90 */


void FUN_0070ce90(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  FUN_00786c80(param_1,param_2);
  if ((*param_2 == 0x430) && (*(longlong *)(param_1 + 0x48) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00410f20(uVar1);
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041543e0(uVar1,0,0,1);
  }
  return;
}

