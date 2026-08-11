/* Ghidra address: 00780c70 */
/* Ghidra symbol: FUN_00780c70 */


undefined8 FUN_00780c70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 local_70 [5];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = auStack_c8;
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_00417580(local_70,&DAT_00755ba0);
  local_40 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  uVar2 = (**(code **)*param_2)(param_2);
  FUN_004b8ba0(local_40,param_2,uVar2);
  FUN_004b6dc0(local_40,0);
  cVar1 = FUN_007799a0(local_30,local_40,local_70);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00777750,1,PTR_PTR_02005758);
    FUN_004134c0(uVar2);
  }
  else {
    cVar1 = FUN_00796f50(DAT_02012578,local_70[0]);
    if (cVar1 == '\0') {
      FUN_004b6dc0(local_40,0);
      uVar2 = local_40;
      local_38 = local_40;
      FUN_00796b20(DAT_02012578,local_70[0],&local_38);
      local_48 = uVar2;
    }
    else {
      local_90 = local_70[0];
      local_88 = 0x11;
      local_a8 = 0;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00777890,1,PTR_PTR_02002370,&local_90);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00417740(local_70,&DAT_00755ba0);
  return local_48;
}

