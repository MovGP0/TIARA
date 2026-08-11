/* Ghidra address: 00cb9930 */
/* Ghidra symbol: FUN_00cb9930 */


void FUN_00cb9930(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  iVar1 = FUN_004413f0(&LAB_00cb9a38,param_2);
  if (0 < iVar1) {
    FUN_00416dc0(&local_20,param_2,1,iVar1 + -1);
    (**(code **)(*param_1 + 0xc0))(param_1,local_20);
    FUN_00416dc0(&local_30,param_2,iVar1 + 1,0xff);
    FUN_0043ea00(&local_28,local_30);
    uVar2 = FUN_00877cc0(local_28,*(undefined2 *)((longlong)param_1 + 0x16e));
    (**(code **)(*param_1 + 200))(param_1,uVar2);
  }
  FUN_00414560(&local_30,3);
  return;
}

