/* Ghidra address: 00d014a0 */
/* Ghidra symbol: FUN_00d014a0 */


undefined8 FUN_00d014a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else if ((*(ushort *)(param_1 + 0x205) & 4) == 0) {
    FUN_00d013a0(auStack_b8,&local_80,param_3);
    FUN_00414ad0(param_2,local_80);
  }
  else {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_20 + 0x10))(local_20,param_3);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_30,local_24);
        local_28 = (**(code **)PTR_PTR_020018b0)(&LAB_00d017e8,local_30);
        if (local_28 < 1) {
          FUN_00d01060(&local_70,local_30,local_res20);
          (**(code **)(*local_20 + 0x40))(local_20,local_24,local_70);
        }
        else {
          FUN_004b3cf0(local_20,&local_58,local_24);
          FUN_00d01060(&local_50,local_58,local_res20);
          FUN_00879940(&local_68,local_20,local_24);
          FUN_00d01060(&local_60,local_68,local_res20);
          local_98 = local_60;
          FUN_00416cd0(&local_48,3,local_50,&LAB_00d017e8);
          (**(code **)(*local_20 + 0x40))(local_20,local_24,local_48);
        }
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00d013a0(auStack_b8,&local_78,local_20);
    FUN_00414ad0(param_2,local_78);
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_80,8);
  FUN_00414480(&local_30);
  FUN_0041b800(&local_res20);
  return param_2;
}

