/* Ghidra address: 00be0570 */
/* Ghidra symbol: FUN_00be0570 */


longlong FUN_00be0570(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = FUN_00410e60(&DAT_00be04d0,1);
  if (local_20 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_20 + 0x10;
  }
  FUN_0041b840(&local_28,lVar3);
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 8) = 0;
  if (local_20 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_20 + 0x20;
  }
  FUN_00be4930(&LAB_00bdfd90,&local_38,lVar3);
  uVar2 = FUN_00be25b0(&PTR_FUN_00bdcb40,1,local_38);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_0082ccd0(&PTR_FUN_00825200,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  if (local_20 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_20 + 0x18;
  }
  FUN_00be49a0(&LAB_00be0128,&local_40,lVar3);
  uVar2 = FUN_00be39c0(&PTR_FUN_00bde870,1,local_40);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

