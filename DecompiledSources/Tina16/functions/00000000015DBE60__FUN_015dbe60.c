/* Ghidra address: 015dbe60 */
/* Ghidra symbol: FUN_015dbe60 */


void FUN_015dbe60(longlong param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  bool local_21;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,*param_2);
  FUN_015d9080(param_1,param_2,0xffffffff,1);
  *param_3 = '\0';
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    if (*(char *)(param_1 + 0x103) == '\x01') {
      local_21 = false;
      do {
        if (local_21 == false) {
          FUN_0041ddd0(&local_30,PTR_PTR_020055c8);
          iVar2 = FUN_0072d440(local_30,3,0xc);
          *param_3 = iVar2 != 1;
        }
        else {
          FUN_0041ddd0(&local_40,PTR_PTR_02004420);
          local_50 = *param_2;
          local_48 = 0x11;
          FUN_00442f70(&local_38,local_40,&local_50,0);
          iVar2 = FUN_0072d440(local_38,3,0xc);
          *param_3 = iVar2 != 1;
        }
        cVar1 = FUN_015bf1b0(*param_2);
        local_21 = cVar1 == '\0';
      } while ((*param_3 == '\0') && (local_21));
    }
    else {
      cVar1 = FUN_015bf1b0(*param_2);
      *param_3 = cVar1 == '\0';
    }
  }
  else {
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),param_1,param_2,param_3);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

