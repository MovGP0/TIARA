/* Ghidra address: 00559710 */
/* Ghidra symbol: FUN_00559710 */


longlong FUN_00559710(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  uVar2 = FUN_0053c520(param_5);
  *(undefined1 *)(local_res8 + 0x38) = uVar2;
  FUN_0053c650(&local_28,param_5);
  FUN_00414ad0(local_res8 + 0x30,local_28);
  uVar3 = FUN_0053c6c0(*param_5);
  *param_5 = uVar3;
  uVar3 = FUN_0053c4c0(param_5);
  *(undefined8 *)(local_res8 + 0x40) = uVar3;
  FUN_00545c40(&local_30,param_5);
  FUN_0041b840(local_res8 + 0x28,local_30);
  FUN_0041b800(&local_30);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

