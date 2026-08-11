/* Ghidra address: 01aee490 */
/* Ghidra symbol: FUN_01aee490 */


void FUN_01aee490(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_var;
  undefined8 local_res10 [3];
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined2 local_3a;
  undefined8 local_38;
  int local_2c;
  
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x19) != '\0') {
    local_5c = param_3;
    if (param_3 < 1) {
      local_5c = 100;
    }
    local_3a = 1;
    iVar2 = FUN_01aed1f0(param_1,local_res10,&local_3a,&local_2c);
    if ((local_2c != 2) && (iVar2 == 0x41a)) {
      uVar3 = FUN_01aed1f0(param_1,local_res10,&local_3a,&local_2c);
      iVar2 = FUN_01aed1f0(param_1,local_res10,&local_3a,&local_2c);
      iVar4 = FUN_01aed1f0(param_1,local_res10,&local_3a,&local_2c);
      cVar1 = FUN_01aece00(param_1,uVar3,&local_48);
      if (cVar1 != '\0') {
        thunk_FUN_03cc0d62(local_50);
        local_58 = (**(code **)(*local_48 + 0xd8))(local_48);
        local_58 = local_58 + iVar2;
        (**(code **)(*local_48 + 0xd8))(local_48);
        local_54 = extraout_var + iVar4;
        FUN_01aed730(param_1,local_50,&local_58,local_5c);
      }
    }
    if (param_3 < 1) {
      FUN_013a4f70(*(undefined8 *)PTR_DAT_020032b8);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_res10);
  return;
}

