/* Ghidra address: 0161ece0 */
/* Ghidra symbol: FUN_0161ece0 */


void FUN_0161ece0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined1 auStack_68 [40];
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined4 *)(param_1 + 0xdc) = 1;
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  local_2c = 0;
  FUN_015ef8b0(local_res10[0],param_1 + 0xdc);
  iVar1 = *(int *)(param_1 + 0xdc);
  while (iVar1 <= iVar3) {
    FUN_0161eb00(auStack_68);
    iVar1 = *(int *)(param_1 + 0xdc);
  }
  if (local_2c != 2) {
    FUN_0041ddd0(local_40,PTR_PTR_02004c30);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40[0]);
    FUN_004134c0(uVar2);
  }
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  FUN_00414480(local_40);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

