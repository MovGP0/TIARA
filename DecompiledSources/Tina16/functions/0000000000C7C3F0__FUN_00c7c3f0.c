/* Ghidra address: 00c7c3f0 */
/* Ghidra symbol: FUN_00c7c3f0 */


bool FUN_00c7c3f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong *local_res8;
  undefined8 local_res10 [3];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30 [2];
  longlong *local_20 [2];
  
  local_48 = 0;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10[0]);
  cVar1 = FUN_00c7bbd0(local_res8);
  if ((cVar1 != '\0') && (FUN_00c7bd10(local_30,local_res8), local_30[0] != 0)) {
    FUN_00c7bd10(&local_38,local_res8);
    FUN_0041b840(&local_res8,local_38);
  }
  (**(code **)(*local_res8 + 0x18))(local_res8,&local_40);
  (**(code **)(*local_40 + 0x60))(local_40,local_20,local_res10[0]);
  bVar2 = local_20[0] != (longlong *)0x0;
  if (bVar2) {
    (**(code **)(*local_20[0] + 0x50))(local_20[0],&local_48);
    FUN_00414ad0(param_3,local_48);
  }
  FUN_00414480(&local_48);
  FUN_0041b800(&local_40);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res8);
  FUN_00414480(local_res10);
  return bVar2;
}

