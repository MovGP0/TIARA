/* Ghidra address: 014ce7a0 */
/* Ghidra symbol: FUN_014ce7a0 */


void FUN_014ce7a0(longlong param_1,undefined8 param_2,byte param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  char local_9;
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_4 == 0) {
    FUN_00416ba0(local_20,local_res10[0],&DAT_014ce8e8);
    FUN_01b24510(local_20[0],*(undefined8 *)(param_1 + 0x30),&local_9);
    if (local_9 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))
                (*(longlong **)(param_1 + 0x48),local_res10[0]);
    }
  }
  else {
    FUN_00416ba0(&local_28,local_res10[0],&DAT_014ce8e8);
    FUN_01b24510(local_28,*(undefined8 *)(param_1 + 0x30),&local_9);
    if (local_9 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))
                (*(longlong **)(param_1 + 0x48),local_res10[0]);
    }
  }
  if ((param_3 & local_9 == '\0') != 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"JSSim: SendMsg failed");
    FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

