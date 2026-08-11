/* Ghidra address: 015f5740 */
/* Ghidra symbol: FUN_015f5740 */


undefined4
FUN_015f5740(undefined8 param_1,longlong param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res8 [4];
  undefined1 local_2d;
  undefined4 local_2c [3];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_2c[0] = 0;
  *param_3 = 0;
  *param_5 = 0;
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d3f230(param_2);
    if (cVar1 != '\0') {
      uVar5 = FUN_015f2d20(local_res8[0],*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xb0),
                           &local_2d);
      FUN_00e0ed40(uVar5,local_2c,param_3);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x1a8);
    lVar3 = FUN_015f3320(local_res8[0],param_2);
    FUN_00e0ed40(lVar3,local_2c,param_3);
    if (*param_3 != 0) {
      local_2c[0] = 0x10;
    }
    cVar1 = FUN_01609a70(*(undefined8 *)(lVar3 + 0x20));
    if (cVar1 != '\0') {
      uVar4 = FUN_004113f0(uVar5,&PTR_FUN_01763148);
      uVar2 = FUN_01600580(uVar4);
      *param_4 = uVar2;
    }
    cVar1 = FUN_0160e240(uVar5,1,L"MQTT");
    if (cVar1 != '\0') {
      *param_5 = *param_5 | 0x20;
    }
  }
  uVar2 = local_2c[0];
  FUN_00414480(local_res8);
  return uVar2;
}

