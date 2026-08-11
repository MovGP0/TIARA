/* Ghidra address: 01d2b190 */
/* Ghidra symbol: FUN_01d2b190 */


longlong * FUN_01d2b190(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  *(undefined1 *)((longlong)local_res8 + 0x5d) = 0;
  *(undefined4 *)(local_res8 + 9) = 0;
  *(undefined4 *)(local_res8 + 0xb) = 0x32;
  local_res8[10] = 0;
  FUN_00409620(local_res8 + 10,(longlong)((int)local_res8[0xb] * 8));
  lVar2 = FUN_005fd250(&PTR_FUN_005f3290,1);
  local_res8[0xc] = lVar2;
  FUN_005fd4e0(lVar2,0);
  FUN_005fd6d0(local_res8[0xc],0);
  local_48 = 32000;
  FUN_00498350(local_30,0,0,32000);
  (**(code **)(*local_res8 + 0xb0))(local_res8,local_30);
  local_48 = 0;
  FUN_01d2b170(local_res8,0,0,0);
  FUN_01d2c680(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

