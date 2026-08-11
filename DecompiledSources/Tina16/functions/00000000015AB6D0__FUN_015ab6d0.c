/* Ghidra address: 015ab6d0 */
/* Ghidra symbol: FUN_015ab6d0 */


undefined8 FUN_015ab6d0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_res18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_50 = 0;
  local_30[0] = 0;
  local_48 = 0;
  FUN_004144d0(param_1);
  if ((param_2 != 0) && (param_4 != 0)) {
    local_res18 = param_3;
    if (param_3 < 0) {
      local_res18 = FUN_00414ce0(param_2);
    }
    if (0 < local_res18) {
      local_20 = FUN_015ab640(param_4);
      if (local_20 == 0) {
        FUN_0041ddd0(&local_50,PTR_PTR_02003658);
        local_40 = CONCAT44(local_40._4_4_,param_4);
        local_38 = 0;
        uVar2 = FUN_0044d530(&PTR_FUN_015a7a48,1,local_50,&local_40,0);
        FUN_004134c0(uVar2);
      }
      else {
        cVar1 = (**(code **)(local_20 + 0x20))(local_20,param_2,local_res18,0);
        if (cVar1 == '\0') {
          FUN_0041ddd0(local_30,PTR_PTR_020045d8);
          (**(code **)(local_20 + 0x10))(local_20,&local_48);
          local_40 = local_48;
          local_38 = 0xb;
          uVar2 = FUN_0044d530(&PTR_FUN_015a7a48,1,local_30[0],&local_40,0);
          FUN_004134c0(uVar2);
        }
        else {
          (**(code **)(local_20 + 8))(local_20,param_1,param_2,local_res18);
        }
      }
    }
  }
  FUN_00414480(&local_50);
  FUN_004144d0(&local_48);
  FUN_00414480(local_30);
  return param_1;
}

