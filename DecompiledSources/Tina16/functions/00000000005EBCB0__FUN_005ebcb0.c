/* Ghidra address: 005ebcb0 */
/* Ghidra symbol: FUN_005ebcb0 */


int FUN_005ebcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  char local_34 [4];
  int local_30;
  char local_29;
  
  cVar1 = FUN_005eb550(param_1,param_2,local_34);
  if (cVar1 == '\0') {
    local_30 = 0;
  }
  else {
    local_29 = local_34[0];
    if (((local_34[0] == '\x04') || (local_34[0] == '\0')) && (local_30 <= param_4)) {
      FUN_005ebde0(param_1,param_2,param_3,local_30,&local_29);
    }
    else {
      FUN_005ea1b0(param_2);
    }
  }
  return local_30;
}

