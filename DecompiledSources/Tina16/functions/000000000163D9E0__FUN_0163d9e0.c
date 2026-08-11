/* Ghidra address: 0163d9e0 */
/* Ghidra symbol: FUN_0163d9e0 */


void FUN_0163d9e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0161dc40(&local_18,param_4,param_5,&local_19);
  FUN_0043f750(local_30,*(undefined4 *)(param_2 + 0x84));
  FUN_00b8fd60(&local_38,param_6,*PTR_DAT_02005310,0,1);
  FUN_0043f750(&local_40,*(undefined4 *)(param_2 + 0x7c));
  FUN_00416cd0(&local_10,9,local_30[0],&DAT_0163dbbc,local_res18[0],L"Nodes: ",local_18,L", Value: "
               ,local_38,L", Lineno: ",local_40);
  if (local_19 != '\0') {
    FUN_0163d050(param_2,local_10);
  }
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return;
}

