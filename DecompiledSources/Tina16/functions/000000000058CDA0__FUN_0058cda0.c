/* Ghidra address: 0058cda0 */
/* Ghidra symbol: FUN_0058cda0 */


void FUN_0058cda0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  sVar1 = *(short *)(*(longlong *)*param_2 + 2 + (ulonglong)*(byte *)(*(longlong *)*param_2 + 1));
  if (sVar1 == 0) {
    FUN_00415dd0(&local_20,param_3,0);
  }
  else {
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = *(undefined4 *)(param_3 + -4);
    }
    uVar2 = FUN_00416740(param_3);
    FUN_004173c0(&local_20,uVar2,uVar3,sVar1);
  }
  FUN_00591120(&DAT_0058e088,param_1,param_2,local_20);
  FUN_004144d0(&local_20);
  return;
}

