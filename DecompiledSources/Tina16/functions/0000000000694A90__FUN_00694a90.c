/* Ghidra address: 00694a90 */
/* Ghidra symbol: FUN_00694a90 */


void FUN_00694a90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_b8 = (int)*(short *)(param_2 + 0x10);
  iStack_b4 = (int)*(short *)(param_2 + 0x12);
  local_40 = CONCAT44(iStack_b4,local_b8);
  FUN_00693a30(*(undefined8 *)(param_1 + 0x70),local_50);
  cVar2 = FUN_00423210(local_50,&local_40);
  if (cVar2 != '\0') {
    FUN_006939a0(*(undefined8 *)(param_1 + 0x70),&local_60);
    local_d0 = local_60;
    uStack_c8 = uStack_58;
    local_c0 = (int)*(short *)(param_2 + 0x10);
    local_bc = (int)*(short *)(param_2 + 0x12);
    cVar2 = FUN_00423210(&local_d0,&local_c0);
    if (cVar2 != '\0') {
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
      lVar5 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
      thunk_FUN_041b2403(uVar1,0x197,lVar5 + -1,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_70);
      uVar3 = FUN_004230a0(local_70);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_80);
      uVar4 = FUN_004230c0(local_80);
      FUN_004238d0(local_38,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_38,0,5);
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      return;
    }
    FUN_00693910(*(undefined8 *)(param_1 + 0x70),&local_90);
    local_e8 = local_90;
    uStack_e0 = uStack_88;
    local_d8 = (int)*(short *)(param_2 + 0x10);
    local_d4 = (int)*(short *)(param_2 + 0x12);
    cVar2 = FUN_00423210(&local_e8,&local_d8);
    if (cVar2 != '\0') {
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
      lVar5 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
      thunk_FUN_041b2403(uVar1,0x197,lVar5 + 1,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_a0);
      uVar3 = FUN_004230a0(local_a0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_b0);
      uVar4 = FUN_004230c0(local_b0);
      FUN_004238d0(local_38,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_38,0,5);
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4f) = 1;
  return;
}

