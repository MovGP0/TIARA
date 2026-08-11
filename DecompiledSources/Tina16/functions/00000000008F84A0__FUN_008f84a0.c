/* Ghidra address: 008f84a0 */
/* Ghidra symbol: FUN_008f84a0 */


undefined4 FUN_008f84a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  if ((char)param_1[4] == '\0') {
    local_c = *(undefined4 *)((longlong)param_1 + 0xc);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xb0))(param_1,local_res10[0],&local_c);
    if (cVar1 != '\0') {
      if ((char)param_1[2] == '\0') goto LAB_008f8550;
      if ((char)param_1[2] == '\x02') {
        FUN_0041ddd0(local_20,PTR_PTR_02002490);
        uVar2 = FUN_0044d490(&PTR_FUN_00472398,1,local_20[0]);
        FUN_004134c0(uVar2);
      }
    }
  }
  FUN_008f9070(param_1,local_c,local_res10[0],param_3);
LAB_008f8550:
  FUN_00414480(local_20);
  FUN_00414520(local_res10);
  return local_c;
}

