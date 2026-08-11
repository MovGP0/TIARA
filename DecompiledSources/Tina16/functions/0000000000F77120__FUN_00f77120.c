/* Ghidra address: 00f77120 */
/* Ghidra symbol: FUN_00f77120 */


void FUN_00f77120(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xe8);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_20 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                           (*(longlong **)(param_1 + 0xc0),iVar3);
      cVar2 = FUN_00f606d0(param_1 + 0xb8,&local_20);
      if (cVar2 != '\0') {
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xc0),iVar3,
                     *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c),
                     *(undefined4 *)(param_1 + 0xb4));
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x3c);
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(param_1 + 0xa4),iVar3);
        FUN_00f6f400(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(param_1 + 0xa4),0);
        FUN_0043f750(&local_38,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c));
        FUN_00f6f640(*(undefined8 *)(param_1 + 0xd0),&local_40);
        FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0xa4));
        FUN_00416cd0(local_30,6,L"SetNextObject: obj_idx: ",local_38,&DAT_00f77378,local_40,
                     L", next_object is: ",local_48);
        FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),local_30[0]);
        piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x94);
        *piVar1 = *piVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

