/* Ghidra address: 01245950 */
/* Ghidra symbol: FUN_01245950 */


undefined1 FUN_01245950(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_0041b910(local_res10[0]);
  local_41 = 0;
  iVar1 = (**(code **)(*param_3 + 0x60))(param_3);
  if (0 < iVar1) {
    iVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    if (0 < iVar1) {
      FUN_01245720(local_20,local_res10[0]);
      if (local_20[0] != (longlong *)0x0) {
        (**(code **)(*local_20[0] + 0xd8))(local_20[0],&local_30,L"shape[@type=\"image\"]");
        FUN_0041b890(&local_28,local_30,&DAT_01245b4e);
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 0x28))(local_28,&local_40);
          (**(code **)(*local_28 + 0x90))(local_28,&local_38,local_40);
          FUN_01b23e30(param_3,local_res8,local_28);
          local_41 = 1;
        }
      }
    }
  }
  FUN_00417840(&local_40,&DAT_00b9f8e0,3);
  FUN_00417840(&local_28,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res8);
  FUN_0041b800(local_res10);
  return local_41;
}

