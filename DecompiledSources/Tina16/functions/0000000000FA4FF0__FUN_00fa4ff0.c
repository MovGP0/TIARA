/* Ghidra address: 00fa4ff0 */
/* Ghidra symbol: FUN_00fa4ff0 */


void FUN_00fa4ff0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  double local_20;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_10 = 0;
  local_14 = *(int *)(param_1 + 0x850);
  local_18 = 0x10000;
  puVar1 = auStack_78;
  if (*(int *)(param_1 + 0x870) == 8) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    puVar1 = local_30;
    if (cVar2 == '\0') {
      local_18 = 0x100;
    }
  }
  local_30 = puVar1;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770));
  if (cVar2 == '\x01') {
    FUN_00414480(&local_10);
    local_28 = *(undefined8 *)(param_1 + 0x868);
    FUN_00448450(&local_10,local_28,PTR_DAT_02004830);
    FUN_00416ba0(&local_38,local_10,L"Hz (external)");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),local_38);
    FUN_00414480(&local_10);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x788),1);
    local_20 = ((double)(local_18 * local_14) / *(double *)(param_1 + 0x868)) * 4.0;
    local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
    FUN_00b8fd60(&local_48,local_20,*PTR_DAT_02005310,0);
    local_58 = &DAT_00fa5284;
    FUN_00416cd0(&local_40,3,L"Time max: ",local_48);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),local_40);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x788),0);
  }
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_10);
  return;
}

