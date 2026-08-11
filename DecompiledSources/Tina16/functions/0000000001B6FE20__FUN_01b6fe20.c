/* Ghidra address: 01b6fe20 */
/* Ghidra symbol: FUN_01b6fe20 */


void FUN_01b6fe20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01b6bf50(param_1);
  if (*(int *)(param_1 + 0x7e8) == 2) {
    FUN_004169a0(&local_10,*(longlong *)(param_1 + 0x9d8) + 0x23);
    iVar1 = FUN_0043e210(local_10,L"LabXplorer");
    if (iVar1 == 0) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x950),0);
    }
  }
  FUN_010e2340(param_1,param_2);
  uVar2 = FUN_0065b870(param_1);
  FUN_00f832e0(uVar2,0x530,0,0,1000);
  FUN_00414480(&local_10);
  return;
}

