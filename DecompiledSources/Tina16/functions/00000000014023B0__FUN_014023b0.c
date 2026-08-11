/* Ghidra address: 014023b0 */
/* Ghidra symbol: FUN_014023b0 */


void FUN_014023b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x790);
  if (*(int *)(param_1 + 0x89c) < *(int *)(param_1 + 0x894) * 8) {
    *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 800;
    FUN_00409620(param_1 + 0x8b8,(longlong)*(int *)(param_1 + 0x89c));
  }
  iVar2 = *(int *)(param_1 + 0x894);
  if (iVar2 == 0) {
    **(undefined8 **)(param_1 + 0x8b8) = 0x3ff0000000000000;
  }
  else {
    *(double *)(*(longlong *)(param_1 + 0x8b8) + (longlong)iVar2 * 8) =
         *(double *)(*(longlong *)(param_1 + 0x8b8) + (longlong)(iVar2 + -2) * 8) + 1.0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)(*(int *)(param_1 + 0x894) + 1) * 8) =
       0x3ff0000000000000;
  FUN_0043f750(&local_28,*(int *)(param_1 + 0x894) / 2 + 1);
  FUN_00416ba0(local_20,L"Input #",local_28);
  uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                       *(longlong *)(param_1 + 0x8b8) + (longlong)*(int *)(param_1 + 0x894) * 8,0);
  FUN_00b0ab70(uVar1,local_20[0],uVar3);
  FUN_0043f750(&local_38,*(int *)(param_1 + 0x894) / 2 + 1);
  FUN_00416ba0(&local_30,L"Output #",local_38);
  uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                       *(longlong *)(param_1 + 0x8b8) +
                       (longlong)(*(int *)(param_1 + 0x894) + 1) * 8,0);
  FUN_00b0ab70(uVar1,local_30,uVar3);
  iVar2 = *(int *)(param_1 + 0x894) + 2;
  if (*(int *)(param_1 + 0x8a4) < iVar2) {
    FUN_00848a70(uVar1,iVar2);
  }
  *(int *)(param_1 + 0x894) = *(int *)(param_1 + 0x894) + 2;
  FUN_00414560(&local_38,4);
  return;
}

