/* Ghidra address: 00cd7480 */
/* Ghidra symbol: FUN_00cd7480 */


undefined8 FUN_00cd7480(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_38 = 0;
  FUN_004144d0(param_1);
  if ((param_2 != 0) && (param_4 != 0)) {
    local_48 = param_3;
    if (param_3 < 0) {
      local_48 = FUN_00414ce0(param_2);
    }
    if (0 < local_48) {
      lVar2 = FUN_00cd73f0(param_4);
      if (lVar2 == 0) {
        FUN_0041ddd0(&local_40,PTR_PTR_02003670);
        local_30 = CONCAT44(local_30._4_4_,param_4);
        local_28 = 0;
        uVar3 = FUN_0044d530(&PTR_FUN_00cd3e20,1,local_40,&local_30,0);
        FUN_004134c0(uVar3);
      }
      else {
        cVar1 = (**(code **)(lVar2 + 0x20))(lVar2,param_2,local_48,0);
        if (cVar1 == '\0') {
          FUN_0041ddd0(local_20,PTR_PTR_020045f8);
          (**(code **)(lVar2 + 0x10))(lVar2,&local_38);
          local_30 = local_38;
          local_28 = 0xb;
          uVar3 = FUN_0044d530(&PTR_FUN_00cd3e20,1,local_20[0],&local_30,0);
          FUN_004134c0(uVar3);
        }
        else {
          (**(code **)(lVar2 + 8))(lVar2,param_1,param_2,local_48);
        }
      }
    }
  }
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(local_20);
  return param_1;
}

