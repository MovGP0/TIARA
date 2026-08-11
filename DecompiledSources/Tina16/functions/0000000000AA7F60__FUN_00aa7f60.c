/* Ghidra address: 00aa7f60 */
/* Ghidra symbol: FUN_00aa7f60 */


void FUN_00aa7f60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_40 = auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0xb8);
  (**(code **)(*plVar1 + 0x448))(plVar1,&local_48,local_res10[0],0);
  FUN_00414b50(local_res10,local_48);
  uVar4 = FUN_00414480(&local_28);
  uVar5 = FUN_00414480(&local_30);
  FUN_00a28910(local_res10[0],uVar4,uVar5);
  iVar3 = FUN_00416db0(local_28,&DAT_00aa81a8);
  if (iVar3 == 0) {
    uVar4 = FUN_00414480(&local_38);
    FUN_00a29560(&local_30,local_res10[0],uVar4);
    FUN_009ec440(&local_50,local_30);
    local_68 = FUN_00416740(local_38);
    local_20 = FUN_004baae0(&PTR_FUN_0047d7f8,1,PTR_IMAGE_DOS_HEADER_0200c280,local_50);
  }
  else {
    cVar2 = FUN_00440a20(local_res10[0],1);
    if (cVar2 == '\0') {
      local_20 = 0;
    }
    else {
      FUN_009ec440(&local_58,local_res10[0]);
      local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0x20);
    }
  }
  if (local_20 != 0) {
    uVar4 = FUN_00a448a0(local_20,**(undefined1 **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_38,3);
  FUN_00414480(local_res10);
  return;
}

