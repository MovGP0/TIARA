/* Ghidra address: 005b3e60 */
/* Ghidra symbol: FUN_005b3e60 */


char FUN_005b3e60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_64;
  longlong local_60 [2];
  longlong *local_50;
  longlong local_48;
  char local_39;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_90 = auStack_b8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  local_39 = '\0';
  if (local_res10 != (longlong *)0x0) {
    local_38 = FUN_005b5280(&PTR_FUN_005b0e78,1);
    local_20 = (longlong *)FUN_005b4700(param_1);
    while( true ) {
      local_50 = local_20;
      iVar3 = FUN_005b4540(local_20[2]);
      if (iVar3 + -1 <= (int)local_50[1]) break;
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      local_48 = FUN_005b4350(local_20[2],(int)local_20[1]);
      cVar2 = FUN_005b39f0(param_1,local_res18,*(undefined8 *)(local_48 + 0xb8),local_res20);
      if (cVar2 != '\0') {
        local_60[0] = local_48;
        local_64 = FUN_00597e50(local_38 + 8,local_60);
      }
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
    local_28 = (longlong *)FUN_005b6060(&PTR_FUN_005b0be8,1,local_38);
    do {
      local_80 = local_28;
      *(int *)(local_28 + 2) = (int)local_28[2] + 1;
      if (*(int *)(local_28[1] + 0x10) <= (int)local_28[2]) break;
      local_88 = local_28[1];
      local_48 = *(longlong *)(*(longlong *)(local_88 + 8) + (longlong)(int)local_28[2] * 8);
      (**(code **)(*local_res10 + 0x18))(local_res10,local_48,&local_39);
    } while (local_39 == '\0');
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + -0x20))(local_28,1);
    }
    lVar1 = local_38;
    local_30 = local_38;
    local_38 = 0;
    FUN_00410f20(lVar1);
  }
  FUN_0041b800(&local_res10);
  return local_39;
}

