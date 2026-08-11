/* Ghidra address: 01af0ad0 */
/* Ghidra symbol: FUN_01af0ad0 */


void FUN_01af0ad0(longlong param_1,longlong param_2,char param_3,double *param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined *local_40;
  undefined1 *local_30;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_18 = 0;
  local_10 = 0;
  if (param_3 == '\x01') {
    local_20 = (double)(longlong)*param_4;
  }
  else if (param_3 == '\x02') {
    local_20 = *param_4;
  }
  else if (param_3 == '\x03') {
    local_20 = *param_4;
  }
  else if (param_3 == '\x04') {
    local_20 = *param_4;
  }
  if (param_2 == *(longlong *)(param_1 + 0x708)) {
    *(double *)(param_1 + 0x7e8) = local_20;
    *(char *)(param_1 + 0x818) = param_3;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x710)) {
    *(double *)(param_1 + 0x7f0) = local_20;
    *(char *)(param_1 + 0x819) = param_3;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x718)) {
    *(double *)(param_1 + 0x7f8) = local_20;
    *(char *)(param_1 + 0x81a) = param_3;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x720)) {
    *(double *)(param_1 + 0x800) = local_20;
    *(char *)(param_1 + 0x81b) = param_3;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x728)) {
    *(double *)(param_1 + 0x808) = local_20;
    *(char *)(param_1 + 0x81c) = param_3;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x730)) {
    *(double *)(param_1 + 0x810) = local_20;
    *(char *)(param_1 + 0x81d) = param_3;
  }
  puVar1 = auStack_68;
  if ((*(char *)(param_1 + 0x7e0) == '\0') &&
     (puVar1 = auStack_68, *(char *)(*(longlong *)(param_1 + 0x6b8) + 0xa9) != '\0')) {
    if (param_3 == '\x01') {
      FUN_0043f780(&local_18,*param_4);
    }
    else if (param_3 == '\x02') {
      local_30 = auStack_68;
      FUN_00414480(&local_10);
      local_48 = 0;
      local_40 = PTR_DAT_02004830;
      FUN_00448510(&local_10,*param_4,1,5);
      FUN_00414b50(&local_18,local_10);
      FUN_00414480(&local_10);
    }
    else if (param_3 == '\x03') {
      local_48 = CONCAT31(local_48._1_3_,1);
      local_30 = auStack_68;
      FUN_00b8fd60(&local_18,*param_4,*PTR_DAT_02005310,0);
    }
    else {
      local_30 = auStack_68;
      if (param_3 == '\x04') {
        local_48 = CONCAT31(local_48._1_3_,1);
        local_30 = auStack_68;
        FUN_00b8fd60(&local_18,*param_4,*PTR_DAT_02005310,1);
      }
    }
    FUN_0064de00(param_2,local_18);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414560(&local_18,2);
  return;
}

