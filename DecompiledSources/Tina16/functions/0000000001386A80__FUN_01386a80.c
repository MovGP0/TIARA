/* Ghidra address: 01386a80 */
/* Ghidra symbol: FUN_01386a80 */


void FUN_01386a80(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_res8 [4];
  
  lVar3 = param_1[0x1d1];
  local_res8[0] = param_1;
  cVar2 = FUN_004113d0(lVar3,&PTR_FUN_01377a50);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FUN_004113f0(lVar3,&PTR_FUN_01377a50);
  cVar2 = (**(code **)(*local_res8[0] + 0x498))(local_res8[0],param_2);
  if (cVar2 != '\0') {
    return;
  }
  if (*(char *)((longlong)local_res8[0] + 0x7ed) == '\0') {
    return;
  }
  cVar2 = FUN_010e1d20(local_res8[0],param_2);
  if (cVar2 != '\0') {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if (*(char *)((longlong)local_res8[0] + 0x839) == '\0') {
      *(undefined1 *)((longlong)local_res8[0] + 0x839) = 1;
      if ((uVar1 & 2) == 0) {
        (**(code **)(*local_res8[0] + 0x480))(local_res8[0]);
        *(undefined1 *)(local_res8[0] + 0x107) = 1;
        (**(code **)(*local_res8[0] + 0x488))(local_res8[0]);
      }
      else if (((*(char *)((longlong)local_res8[0] + 0x7fa) == '\x0f') ||
               ((*(char *)((longlong)local_res8[0] + 0x7fa) == '\x04' &&
                (cVar2 = (**(code **)(*(longlong *)local_res8[0][0x17e] + 0x260))
                                   ((longlong *)local_res8[0][0x17e]), cVar2 != '\0')))) &&
              (cVar2 = FUN_010e1c50(local_res8[0],param_2), cVar2 == '\0')) {
        FUN_013410e0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x408) + 0x488));
      }
      *(undefined1 *)((longlong)local_res8[0] + 0x839) = 0;
      if (*(char *)((longlong)local_res8[0] + 0x83a) != '\0') {
        uVar4 = FUN_0065b870(local_res8[0]);
        thunk_FUN_0413e052(uVar4,0x1234,local_res8[0][0x109],local_res8);
      }
      local_res8[0][0x109] = 0;
      *(undefined1 *)((longlong)local_res8[0] + 0x83a) = 0;
      return;
    }
    local_res8[0][0x109] = local_res8[0][0x109] | uVar1;
    *(undefined1 *)((longlong)local_res8[0] + 0x83a) = 1;
    return;
  }
  return;
}

