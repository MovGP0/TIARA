/* Ghidra address: 00f76cc0 */
/* Ghidra symbol: FUN_00f76cc0 */


void FUN_00f76cc0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0xc0),&PTR_FUN_00f6a950);
  *(undefined8 *)(param_1 + 200) = uVar3;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xe8);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_20 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                           (*(longlong **)(param_1 + 0xc0),iVar4);
      if ((iVar4 == 0) && (cVar2 = FUN_00f606d0(param_1 + 0xb8,&local_20), cVar2 != '\0')) {
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xc0),0,
                     *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c),
                     *(undefined4 *)(param_1 + 0xb4));
        *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x138) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c);
        local_28 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                             (*(longlong **)(param_1 + 0xc0),1);
        uVar3 = FUN_00f75340(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x20),&local_28,
                             param_1 + 0xdc);
        *(undefined8 *)(param_1 + 0xa8) = uVar3;
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x3c),0);
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xdc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x3c),1);
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3c);
          FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xc0),1,*(undefined4 *)(param_1 + 0xa4),0);
          *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x140) = *(undefined4 *)(param_1 + 0xa4);
          FUN_00f6f400(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),
                       *(undefined4 *)(param_1 + 0xa4),0);
          FUN_0043f750(&local_38,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c));
          FUN_00f6f640(*(undefined8 *)(param_1 + 0xd0),&local_40);
          FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0xa4));
          FUN_00416cd0(&local_30,6,L"SetNextObject: obj_idx: ",local_38,&DAT_00f770d8,local_40,
                       L", next_object is: ",local_48);
          FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),local_30);
          piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x94);
          *piVar1 = *piVar1 + 1;
        }
      }
      else if ((iVar4 == 1) &&
              ((cVar2 = FUN_00f606d0(param_1 + 0xb8,&local_20), cVar2 != '\0' &&
               (cVar2 = FUN_00f6f3b0(*(undefined8 *)(param_1 + 0xc0)), cVar2 == '\0')))) {
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xc0),1,
                     *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c),
                     *(undefined4 *)(param_1 + 0xb4));
        *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x140) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c);
        FUN_00f6f1a0(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb4),
                     *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x3c),1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

