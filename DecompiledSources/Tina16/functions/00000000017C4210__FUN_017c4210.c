/* Ghidra address: 017c4210 */
/* Ghidra symbol: FUN_017c4210 */


bool FUN_017c4210(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  undefined1 local_38 [48];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40 = 0;
  FUN_00417580(local_38,&DAT_017bfca8);
  cVar1 = FUN_017c3740(param_1);
  if (cVar1 == '\0') {
    FUN_004169a0(&local_58,param_1 + 0x2d8);
    iVar2 = FUN_0043e420(param_2,local_58);
    local_59 = iVar2 == 0;
  }
  else {
    FUN_004169a0(local_50,param_1 + 0x2d8);
    FUN_017c3ea0(&local_40,local_50[0],local_38);
    while (local_40 != 0) {
      iVar2 = FUN_0043e420(param_2,local_40);
      local_59 = iVar2 == 0;
      if (local_59) goto LAB_017c42e3;
      FUN_017c39e0(&local_40,local_38);
    }
    local_59 = false;
  }
LAB_017c42e3:
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  FUN_00417740(local_38,&DAT_017bfca8);
  return local_59;
}

