/* Ghidra address: 01972b60 */
/* Ghidra symbol: FUN_01972b60 */


char FUN_01972b60(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  char local_48;
  char local_31;
  undefined1 *local_30;
  char local_22;
  char local_21;
  undefined8 local_20;
  
  local_30 = auStack_68;
  cVar1 = FUN_01977c80(param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_00416740(param_2);
    lVar3 = FUN_00414de0(param_1 + 0x38);
    local_22 = lVar2 == lVar3;
    (**(code **)(*param_1 + 0x1b8))(param_1);
    local_31 = local_22 == '\0';
    if ((bool)local_31) {
      FUN_00414480(param_1 + 0x38);
    }
    local_21 = FUN_00440a20(param_2,1);
    if (local_21 != '\0' || param_3 != '\0') {
      local_20 = FUN_01979e40(&PTR_FUN_01942c90,1);
      if (local_31 != '\0') {
        FUN_00414ad0(param_1 + 0x38,param_2);
      }
      FUN_01977180(param_1,local_20,param_2,0);
      FUN_00410f20(local_20);
    }
  }
  else {
    local_48 = param_3;
    lVar2 = FUN_01980fe0(&PTR_FUN_0193f400,1,param_1,param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_01980800(param_1[0x57],lVar2);
    local_21 = '\0';
  }
  return local_21;
}

