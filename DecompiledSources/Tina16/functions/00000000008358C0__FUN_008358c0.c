/* Ghidra address: 008358c0 */
/* Ghidra symbol: FUN_008358c0 */


void FUN_008358c0(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int local_res10;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined1 *local_270;
  undefined1 *local_260;
  int local_254;
  longlong local_250;
  int local_244;
  longlong local_240;
  ushort local_236;
  int local_234;
  longlong local_230;
  undefined1 local_220 [16];
  undefined1 local_210;
  undefined1 local_120 [256];
  int local_20;
  int local_1c;
  
  local_270 = auStack_2b8;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_res10 = param_2;
  puVar1 = auStack_2b8;
  if (0 < param_2) {
    FUN_008350c0(param_1,&local_278);
    cVar2 = FUN_0044f380(local_278,param_2);
    puVar1 = local_270;
    if (cVar2 == '\x01') {
      local_res10 = param_2 + -1;
    }
  }
  local_270 = puVar1;
  local_1c = local_res10;
  cVar2 = FUN_008355d0(param_1);
  if (cVar2 == '\0') {
    if (local_1c < 0) {
      local_1c = 0;
    }
    FUN_008350c0(param_1,&local_290);
    local_240 = local_290;
    local_244 = 0;
    if (local_290 != 0) {
      local_244 = *(int *)(local_290 + -4);
    }
    if (local_244 <= local_1c) {
      FUN_008350c0(param_1,&local_298);
      local_250 = local_298;
      local_254 = 0;
      if (local_298 != 0) {
        local_254 = *(int *)(local_298 + -4);
      }
      local_1c = local_254;
    }
    FUN_00835890(param_1,local_1c,local_1c);
  }
  else {
    if (local_1c < 0) {
      local_1c = 0;
    }
    local_1c = FUN_00836330(param_1,local_1c);
    local_20 = local_1c + 1;
    FUN_008350c0(param_1,&local_280);
    local_230 = local_280;
    local_234 = 0;
    if (local_280 != 0) {
      local_234 = *(int *)(local_280 + -4);
    }
    if (local_20 < local_234) {
      FUN_008350c0(param_1,&local_288);
      local_236 = *(ushort *)(local_288 + -2 + (longlong)local_20 * 2);
      if ((0xd7ff < local_236) && (local_236 < 0xe000)) {
        local_20 = local_20 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x4e4);
    if (iVar3 <= local_1c) {
      local_20 = iVar3;
      local_1c = iVar3;
    }
    FUN_00835890(param_1,local_20,local_20);
    if (local_1c != local_20) {
      thunk_FUN_041b3841(local_120);
      iVar3 = 0x100;
      local_260 = local_220;
      do {
        *local_260 = 0;
        local_260 = local_260 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_210 = 0x81;
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      uVar5 = (*pcVar4)(param_1);
      local_220[*(ushort *)(&DAT_01e18b30 + (uVar5 & 0xff) * 2)] = 0x81;
      thunk_FUN_0411e360(local_220);
      *(undefined1 *)(param_1 + 0x500) = 1;
      uVar6 = FUN_0065b870(param_1);
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      uVar5 = (*pcVar4)(param_1);
      thunk_FUN_041b2403(uVar6,0x100,*(undefined2 *)(&DAT_01e18b30 + (uVar5 & 0xff) * 2),1);
      uVar6 = FUN_0065b870(param_1);
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      uVar5 = (*pcVar4)(param_1);
      thunk_FUN_041b2403(uVar6,0x101,*(undefined2 *)(&DAT_01e18b30 + (uVar5 & 0xff) * 2),1);
      *(undefined1 *)(param_1 + 0x500) = 0;
      thunk_FUN_0411e360(local_120);
    }
    *(int *)(param_1 + 0x4ec) = local_1c;
  }
  FUN_00414560(&local_298,5);
  return;
}

