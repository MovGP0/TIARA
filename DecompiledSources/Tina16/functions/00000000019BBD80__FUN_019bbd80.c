/* Ghidra address: 019bbd80 */
/* Ghidra symbol: FUN_019bbd80 */


void FUN_019bbd80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = FUN_00f30cb0(param_1,L"position");
  FUN_0147cd40(uVar1,&DAT_019bbe88,&local_40);
  FUN_0147cd40(uVar1,&DAT_019bbe98,&local_48);
  uVar2 = FUN_0043fc00(local_40);
  *(undefined4 *)param_3 = uVar2;
  uVar2 = FUN_0043fc00(local_48);
  *(undefined4 *)((longlong)param_3 + 4) = uVar2;
  uVar1 = FUN_0147fe90(param_3,&local_38);
  *param_3 = uVar1;
  uVar1 = FUN_0147d030();
  *param_3 = uVar1;
  FUN_00414560(&local_48,2);
  return;
}

