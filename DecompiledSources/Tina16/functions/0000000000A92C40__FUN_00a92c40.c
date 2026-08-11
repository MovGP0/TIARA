/* Ghidra address: 00a92c40 */
/* Ghidra symbol: FUN_00a92c40 */


longlong *
FUN_00a92c40(longlong *param_1,char param_2,longlong param_3,longlong *param_4,undefined8 *param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *local_res8;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_488;
  undefined1 *local_470;
  undefined1 local_464 [36];
  undefined1 local_440 [128];
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 local_3a8 [920];
  
  local_470 = auStack_4b8;
  FUN_00417600(local_3a8,&DAT_004013d8,0x26);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
  }
  FUN_00a77f10(local_res8,0,param_6);
  local_res8[5] = param_3;
  if (param_3 != 0) {
    local_res8[4] = *(longlong *)(param_3 + 0x28);
    local_res8[3] = *(longlong *)(local_res8[5] + 0x20);
  }
  if (param_4 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_4 + 0x20))(param_4);
    local_res8[6] = lVar4;
  }
  if (param_5 != (undefined8 *)0x0) {
    lVar4 = (**(code **)*param_5)(param_5);
    local_res8[7] = lVar4;
  }
  (**(code **)(*local_res8 + 0x18))(local_res8,(longlong)local_res8 + 0x61);
  if (local_res8[7] == 0) goto code_r0x00a92f36;
  uVar1 = FUN_00a54300(local_res8[7]);
  *(undefined1 *)(local_res8 + 8) = uVar1;
  uVar1 = FUN_00a54760(local_res8[7]);
  *(undefined1 *)((longlong)local_res8 + 0x4c) = uVar1;
  cVar2 = FUN_00a54150(local_res8[7],local_res8 + 0xc);
  if (cVar2 == '\0') {
LAB_00a92e14:
    *(undefined1 *)(local_res8 + 0xc) = 0;
  }
  else {
    if (*(byte *)((longlong)local_res8 + 0x4c) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)local_res8 >> 8),1) <<
               (*(byte *)((longlong)local_res8 + 0x4c) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) goto LAB_00a92e14;
  }
  FUN_00a5c200(local_res8[7],local_3a8);
  uVar3 = FUN_00a54390(local_res8[7]);
  *(undefined4 *)((longlong)local_res8 + 0x44) = uVar3;
  local_498 = FUN_00a543b0(local_res8[7]);
  *(undefined4 *)(local_res8 + 9) = local_498;
  local_490 = 0;
  local_488 = 0;
  FUN_00a55eb0(local_464,100,100,*(undefined4 *)((longlong)local_res8 + 0x44));
  FUN_00a55f70(0x28,local_3a8,local_464,local_440);
  FUN_00a55f70(0x2b,local_3a8,local_464,local_440);
  FUN_00a55f70(0x29,local_3a8,local_464,local_440);
  FUN_00a55f70(0x2a,local_3a8,local_464,local_440);
  *(undefined4 *)((longlong)local_res8 + 0x54) = local_3c0;
  *(undefined4 *)(local_res8 + 10) = local_3b4;
  *(undefined4 *)(local_res8 + 0xb) = local_3bc;
  *(undefined4 *)((longlong)local_res8 + 0x5c) = local_3b8;
code_r0x00a92f36:
  FUN_00417840(local_3a8,&DAT_004013d8,0x26);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

