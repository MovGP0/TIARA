/* Ghidra address: 01d2c6a0 */
/* Ghidra symbol: FUN_01d2c6a0 */


longlong * FUN_01d2c6a0(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_30 [16];
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01d2ae00(local_res8,0);
  *(undefined4 *)(local_res8 + 9) = 0;
  *(undefined4 *)(local_res8 + 0xb) = 0x32;
  lVar3 = FUN_004095c0(800);
  local_res8[10] = lVar3;
  lVar3 = FUN_005fd250(&PTR_FUN_005f3290,1);
  local_res8[0xc] = lVar3;
  uVar2 = FUN_01a90ee0(0);
  FUN_005fd4e0(lVar3,uVar2);
  FUN_005fd6d0(local_res8[0xc],0);
  lVar3 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  local_res8[0xd] = lVar3;
  local_48 = 32000;
  FUN_00498350(local_30,0,0,32000);
  (**(code **)(*local_res8 + 0xb0))(local_res8,local_30);
  local_48 = 0;
  FUN_01d2b170(local_res8,0,0,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

