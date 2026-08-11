/* Ghidra address: 01126820 */
/* Ghidra symbol: FUN_01126820 */


char FUN_01126820(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  char local_22;
  char local_21;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_38 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_2 == 0) {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\DEFAULT.EXC");
  }
  else {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\default_py.exc");
  }
  (**(code **)(*local_20 + 0xd8))(local_20,local_30);
  local_22 = '\x01';
  FUN_00414b50(&local_38,L"Copy the code to the Edit field?");
  local_3c = FUN_0072d440(local_38,3,0xb,0);
  if (local_3c == 2) {
    local_22 = '\0';
  }
  else if (local_3c == 6) {
    local_22 = '\x01';
  }
  else if (local_3c == 7) {
    local_22 = '\0';
  }
  if (local_22 != '\0') {
    FUN_01126790(param_1,param_2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_20);
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x808),0);
  }
  local_21 = local_22;
  FUN_00410f20(local_20);
  FUN_00414560(&local_38,2);
  return local_21;
}

