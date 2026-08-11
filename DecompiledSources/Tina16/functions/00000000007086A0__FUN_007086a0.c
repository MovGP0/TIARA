/* Ghidra address: 007086a0 */
/* Ghidra symbol: FUN_007086a0 */


void FUN_007086a0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  int local_40;
  undefined1 local_38 [24];
  
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0xb,0,0);
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar6 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),*param_2,
                             *(undefined8 *)(param_2 + 2),uVar7);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined8 *)(param_2 + 6) = uVar6;
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0xb,1,0);
  thunk_FUN_03e49910(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),local_38);
  uVar2 = FUN_004230a0(local_38);
  uVar3 = FUN_004230c0(local_38);
  uVar7 = CONCAT44(uVar5,uVar3);
  FUN_004238d0(local_48,0,0,uVar2,uVar7);
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar4 = FUN_004230a0(local_48);
  local_40 = local_48[0] + iVar4 / 2;
  local_50 = (int)*(short *)(param_2 + 4);
  local_4c = (int)*(short *)((longlong)param_2 + 0x12);
  cVar1 = FUN_00423210(local_48,&local_50);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x60) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x60) = 1;
  }
  uVar3 = FUN_004230a0(local_38);
  uVar5 = FUN_004230c0(local_38);
  FUN_004238d0(local_48,0,0,uVar3,CONCAT44(uVar2,uVar5));
  iVar4 = FUN_004230a0(local_48);
  local_48[0] = local_40 - iVar4 / 2;
  local_58 = (int)*(short *)(param_2 + 4);
  local_54 = (int)*(short *)((longlong)param_2 + 0x12);
  cVar1 = FUN_00423210(local_48,&local_58);
  if (cVar1 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x61) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x61) = 1;
  }
  thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0,0,1);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}

