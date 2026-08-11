/* Ghidra address: 006ea160 */
/* Ghidra symbol: FUN_006ea160 */


longlong * FUN_006ea160(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_006828b0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x20000;
  lVar3 = FUN_006e6cc0(&PTR_FUN_006bce00,1,local_res8,0);
  local_res8[0x9e] = lVar3;
  lVar3 = FUN_006e6cc0(&PTR_FUN_006bce00,1,local_res8,1);
  local_res8[0x9f] = lVar3;
  lVar3 = FUN_006e7760(&PTR_FUN_006bd2a8,1,local_res8);
  local_res8[0xa0] = lVar3;
  lVar3 = FUN_004b28b0(&PTR_FUN_006e8018,1);
  local_res8[0xa2] = lVar3;
  *(longlong **)(lVar3 + 0x38) = local_res8;
  FUN_0065bce0(local_res8,1);
  FUN_0064cbf0(local_res8,0xb9);
  FUN_0064cc50(local_res8,0x59);
  (**(code **)(*local_res8 + 0x118))(local_res8,0);
  FUN_00659460(local_res8,0);
  (**(code **)(*local_res8 + 0x238))(local_res8,0);
  *(undefined1 *)(local_res8 + 0xa6) = 1;
  FUN_006eacb0(local_res8,1);
  local_20 = thunk_FUN_040ef593(0);
  uVar2 = thunk_FUN_03e5bd07(local_20,0x5a);
  *(undefined4 *)((longlong)local_res8 + 0x50c) = uVar2;
  local_res8[0xa7] = (longlong)&PTR_FUN_006bd9e0;
  thunk_FUN_041a9b5c(0,local_20);
  *(char *)(local_res8 + 0xa1) = (char)local_res8[0x92];
  *(undefined4 *)((longlong)local_res8 + 0x58c) = 100;
  FUN_0064fca0(local_res8,0xb03d,0,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

