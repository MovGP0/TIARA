/* Ghidra address: 017000a0 */
/* Ghidra symbol: FUN_017000a0 */


void FUN_017000a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  longlong local_20 [2];
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416e20(local_res10,1,1);
  FUN_00b90870(local_20,local_res10);
  iVar1 = 0;
  if (local_20[0] != 0) {
    iVar1 = *(int *)(local_20[0] + -4);
  }
  FUN_00416e20(local_20,iVar1 + -1,2);
  *param_3 = 0x3ff0000000000000;
  for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
    FUN_00416780(&local_30,(&DAT_01f973f8)[bVar2]);
    FUN_0043e130(&local_38,local_20[0]);
    iVar1 = FUN_004170c0(local_30,local_38,1);
    if (iVar1 != 0) break;
  }
  if (bVar2 < 5) {
    *param_3 = (&DAT_01f97408)[bVar2];
  }
  FUN_00b90870(local_20,local_res10);
  FUN_00b90870(&local_40,local_res10);
  FUN_00414ad0(param_5,local_40);
  FUN_00b90870(local_20,local_res10);
  FUN_00b90870(local_20,local_res10);
  uVar3 = FUN_00410100(local_20[0],&local_24);
  *param_4 = uVar3;
  if (local_24 != 0) {
    *param_4 = 0;
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

