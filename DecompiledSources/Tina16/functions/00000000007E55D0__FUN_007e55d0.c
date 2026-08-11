/* Ghidra address: 007e55d0 */
/* Ghidra symbol: FUN_007e55d0 */


longlong * FUN_007e55d0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  pcVar3 = (code *)FUN_00411550(local_res8,0xffef);
  lVar4 = (*pcVar3)(local_res8);
  local_res8[0x10] = lVar4;
  *(longlong **)(lVar4 + 0x108) = local_res8;
  uVar1 = *(undefined8 *)(*local_res8 + 0x98);
  *(undefined8 *)(lVar4 + 0x100) = uVar1;
  *(longlong **)(lVar4 + 0xe0) = local_res8;
  lVar4 = FUN_007d88e0(&PTR_FUN_007d3330,CONCAT71((int7)((ulonglong)uVar1 >> 8),1));
  local_res8[0x13] = lVar4;
  *(longlong **)(lVar4 + 0x20) = local_res8;
  *(code **)(lVar4 + 0x18) = FUN_007e6a50;
  *(undefined1 *)((longlong)local_res8 + 0x91) = 1;
  FUN_004d22d0(local_res8,0,param_3);
  lVar4 = local_res8[0x10];
  *(undefined1 *)(lVar4 + 0x83) = 0;
  *(undefined1 *)(lVar4 + 0x84) = 0;
  FUN_007e7070(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

