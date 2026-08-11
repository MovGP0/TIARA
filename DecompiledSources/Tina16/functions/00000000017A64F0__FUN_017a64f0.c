/* Ghidra address: 017a64f0 */
/* Ghidra symbol: FUN_017a64f0 */


void FUN_017a64f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uVar1 = FUN_007d5ad0(*(undefined8 *)(param_1 + 0x780),param_2,*(undefined4 *)(param_1 + 0x7b4));
  FUN_0043f750(&local_28,uVar1);
  FUN_00416ba0(&local_20,L"Picture #",local_28);
  uVar2 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550),param_3,local_20);
  FUN_006dd070(param_3,0);
  FUN_006dcbd0(uVar2,uVar1);
  FUN_006dc990(uVar2,0x66);
  FUN_00414560(&local_28,2);
  return;
}

