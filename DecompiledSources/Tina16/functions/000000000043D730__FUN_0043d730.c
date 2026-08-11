/* Ghidra address: 0043d730 */
/* Ghidra symbol: FUN_0043d730 */


char FUN_0043d730(undefined8 param_1,HANDLE param_2,longlong *param_3)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  WCHAR local_230 [262];
  int local_24;
  int local_20;
  char local_19;
  longlong local_18;
  longlong local_10;
  
  local_240 = auStack_2a8;
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  local_19 = '\0';
  FUN_00414480(param_3);
  local_20 = 0;
  local_24 = thunk_FUN_0414a8e7(param_2,&local_20);
  if ((local_24 == 0) && (local_20 == 0)) {
    cVar1 = FUN_0044f0c0(6,0);
    if (cVar1 != '\0') {
      DVar2 = GetFinalPathNameByHandleW(param_2,local_230,0x104,2);
      if (DVar2 != 0) {
        FUN_00416830(&local_250,local_230,0x106);
        FUN_0043d4a0(auStack_2a8,&local_248,local_250);
        FUN_00414ad0(param_3,local_248);
        local_19 = '\x01';
        goto LAB_0043d9a9;
      }
    }
  }
  if ((local_24 != 0) || (local_20 != 0)) {
    local_288 = CONCAT44(local_288._4_4_,1);
    local_280 = 0;
    local_18 = thunk_FUN_0416eccf(param_2,0,2,0);
    if (local_18 != 0x3ee) {
      local_288 = 1;
      local_10 = thunk_FUN_03c0fec3(local_18,4,0,0);
      if (local_10 != 0) {
        uVar4 = thunk_FUN_04149b47();
        iVar3 = FUN_0042b5b0(uVar4,local_10,local_230,0x104);
        if (iVar3 != 0) {
          FUN_00416830(&local_260,local_230,0x106);
          FUN_0043d4a0(auStack_2a8,&local_258,local_260);
          FUN_00414ad0(param_3,local_258);
          local_19 = '\x01';
        }
        thunk_FUN_041652c2(local_10);
      }
      thunk_FUN_041d2921(local_18);
    }
  }
  if (local_19 == '\0') {
    FUN_0043d5f0(auStack_2a8,&local_268,param_2);
    FUN_00414ad0(param_3,local_268);
    if (*param_3 != 0) {
      FUN_0043d4a0(auStack_2a8,&local_270,*param_3);
      FUN_00414ad0(param_3,local_270);
      local_19 = '\x01';
    }
  }
LAB_0043d9a9:
  FUN_00414560(&local_270,6);
  return local_19;
}

