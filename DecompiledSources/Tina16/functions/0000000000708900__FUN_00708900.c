/* Ghidra address: 00708900 */
/* Ghidra symbol: FUN_00708900 */


void FUN_00708900(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  int local_40;
  undefined1 local_38 [16];
  
  uVar9 = *(undefined8 *)(param_2 + 4);
  uVar8 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),*param_2,
                             *(undefined8 *)(param_2 + 2),uVar9);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined8 *)(param_2 + 6) = uVar8;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x60) + 0x62);
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x60) + 99);
  thunk_FUN_03e49910(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),local_38);
  uVar4 = FUN_004230a0(local_38);
  uVar5 = FUN_004230c0(local_38);
  uVar9 = CONCAT44(uVar7,uVar5);
  FUN_004238d0(local_48,0,0,uVar4,uVar9);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  iVar6 = FUN_004230a0(local_48);
  local_40 = local_48[0] + iVar6 / 2;
  local_50 = (int)*(short *)(param_2 + 4);
  local_4c = (int)*(short *)((longlong)param_2 + 0x12);
  cVar3 = FUN_00423210(local_48,&local_50);
  if (cVar3 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x62) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x62) = 1;
  }
  uVar5 = FUN_004230a0(local_38);
  uVar7 = FUN_004230c0(local_38);
  FUN_004238d0(local_48,0,0,uVar5,CONCAT44(uVar4,uVar7));
  iVar6 = FUN_004230a0(local_48);
  local_48[0] = local_40 - iVar6 / 2;
  local_58 = (int)*(short *)(param_2 + 4);
  local_54 = (int)*(short *)((longlong)param_2 + 0x12);
  cVar3 = FUN_00423210(local_48,&local_58);
  if (cVar3 == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 99) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 99) = 1;
  }
  if ((cVar1 != *(char *)(*(longlong *)(param_1 + 0x60) + 0x62)) ||
     (cVar2 != *(char *)(*(longlong *)(param_1 + 0x60) + 99))) {
    thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0,0,1);
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}

