/* Ghidra address: 008364a0 */
/* Ghidra symbol: FUN_008364a0 */


void FUN_008364a0(undefined8 param_1,short param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_28;
  int local_20;
  int local_1c [3];
  
  local_28 = 0;
  cVar2 = FUN_00680640(param_1);
  if (cVar2 == '\0') {
    FUN_00835860(param_1,local_1c,&local_20);
    iVar1 = local_1c[0];
    if ((local_20 - local_1c[0] < 2) && (param_2 == 8)) {
      FUN_00836300(param_1,local_1c[0]);
      FUN_00835860(param_1,local_1c,&local_20);
      if (local_1c[0] == iVar1) goto LAB_008365d3;
    }
    if (0 < local_20 - local_1c[0]) {
      FUN_008350c0(param_1,&local_28);
      FUN_00837570(param_1,&local_28,local_1c[0],local_20 - local_1c[0]);
      FUN_00416dc0(&local_28,local_28,local_1c[0] + 1,local_20 - local_1c[0]);
      uVar3 = FUN_0065b870(param_1);
      FUN_00470120(uVar3,0xc2,0,local_28);
      if (local_20 - local_1c[0] == 1) {
        FUN_00835860(param_1,local_1c,&local_20);
        FUN_008358c0(param_1,local_1c[0] + -1);
      }
      else {
        local_1c[0] = FUN_00836330(param_1,local_1c[0]);
        FUN_008358c0(param_1,local_1c[0]);
      }
    }
  }
LAB_008365d3:
  FUN_00414480(&local_28);
  return;
}

