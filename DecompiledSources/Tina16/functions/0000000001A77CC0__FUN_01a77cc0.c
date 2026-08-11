/* Ghidra address: 01a77cc0 */
/* Ghidra symbol: FUN_01a77cc0 */


void FUN_01a77cc0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  if ((char)param_1[0xf5] != '\0') {
    return;
  }
  if (param_1[0xf3] == 0) {
    return;
  }
  if (*(char *)(param_1[0xf3] + 0xb0) != '\0') {
    return;
  }
  local_30[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(param_1[0xf3],local_30);
  if (cVar1 == '\x01') {
    (**(code **)(*param_1 + 0x368))(param_1,param_2);
    goto LAB_01a77ed7;
  }
  if (cVar1 == '\x02') {
    (**(code **)(*param_1 + 0x370))(param_1,param_2);
    goto LAB_01a77ed7;
  }
  if (cVar1 == '\b') {
    uVar3 = FUN_004aeac0(local_30[0],0);
    cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01a5c280);
    if (cVar2 != '\0') {
      FUN_01ae3c10(param_1[0xf3],1);
      param_1[0x200] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0x13;
      FUN_00742eb0(param_1[0x11d],1);
      goto LAB_01a77ed7;
    }
  }
  if (cVar1 == '\b') {
    uVar3 = FUN_004aeac0(local_30[0],0);
    cVar2 = FUN_004113d0(uVar3,&LAB_00f12330);
    if (cVar2 != '\0') {
      FUN_01ae5040(param_1[0xf3]);
      param_1[0x200] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0x13;
      FUN_00742eb0(param_1[0x11d],1);
      goto LAB_01a77ed7;
    }
  }
  if (cVar1 == '\b') {
    uVar3 = FUN_004aeac0(local_30[0],0);
    cVar2 = FUN_004113d0(uVar3,&PTR_FUN_010ecd58);
    if (cVar2 == '\0') {
      uVar3 = FUN_004aeac0(local_30[0],0);
      cVar2 = FUN_004113d0(uVar3,&LAB_00f10748);
      if (cVar2 == '\0') goto LAB_01a77e84;
    }
    FUN_01ae4cc0(param_1[0xf3]);
    param_1[0x200] = 0;
    *(undefined1 *)(param_1 + 0xf5) = 0x13;
    FUN_00742eb0(param_1[0x11d],1);
  }
  else {
LAB_01a77e84:
    if (cVar1 == '\b') {
      uVar3 = FUN_004aeac0(local_30[0],0);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_010ef9a8);
      if (cVar1 != '\0') {
        FUN_01ae7100(param_1[0xf3]);
        param_1[0x200] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0x13;
        FUN_00742eb0(param_1[0x11d],1);
      }
    }
  }
LAB_01a77ed7:
  FUN_00410f20(local_30[0]);
  return;
}

