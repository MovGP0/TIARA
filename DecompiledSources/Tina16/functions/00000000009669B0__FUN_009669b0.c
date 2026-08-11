/* Ghidra address: 009669b0 */
/* Ghidra symbol: FUN_009669b0 */


longlong * FUN_009669b0(longlong *param_1,char param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (param_3 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar4);
  }
  if (param_4 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar4);
  }
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 2) = 1;
  lVar5 = FUN_00410e60(&PTR_FUN_008f5158,1);
  local_res8[5] = lVar5;
  *(undefined1 *)(lVar5 + 0x10) = 1;
  FUN_008f9470(lVar5,0);
  lVar5 = FUN_00410e60(&PTR_FUN_008f5158,1);
  local_res8[6] = lVar5;
  *(undefined1 *)(lVar5 + 0x10) = 1;
  FUN_008f9470(lVar5,0);
  lVar5 = FUN_00410e60(&PTR_FUN_008f5158,1);
  local_res8[0x10] = lVar5;
  *(undefined1 *)(lVar5 + 0x10) = 1;
  FUN_008f9470(lVar5,0);
  local_res8[7] = 0;
  local_res8[10] = param_4;
  lVar5 = FUN_00965a20(&PTR_FUN_00916b08,1,param_3,0);
  local_res8[0x12] = lVar5;
  *(longlong **)(lVar5 + 0x48) = local_res8;
  *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(*local_res8 + 0x38);
  cVar2 = FUN_00966380(lVar5);
  if (cVar2 == '\x11') {
    *(undefined1 *)(local_res8 + 0xb) = 0xc;
  }
  else {
    *(undefined1 *)(local_res8 + 0xb) = 4;
  }
  uVar3 = FUN_00966200(local_res8[0x12]);
  *(undefined1 *)(local_res8 + 9) = uVar3;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

