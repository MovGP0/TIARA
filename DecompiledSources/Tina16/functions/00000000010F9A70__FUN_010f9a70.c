/* Ghidra address: 010f9a70 */
/* Ghidra symbol: FUN_010f9a70 */


void FUN_010f9a70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined8 local_30;
  
  lVar1 = param_1[0x136];
  if (*(longlong *)(lVar1 + 0x50) == 0) {
    return;
  }
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar3 = FUN_01acff30(*(undefined8 *)(lVar1 + 0x50),&local_30);
  if (cVar3 == '\x01') {
    (**(code **)(*param_1 + 0x368))(param_1,param_2);
    goto LAB_010f9c5d;
  }
  if (cVar3 == '\x02') {
    (**(code **)(*param_1 + 0x370))(param_1,param_2);
    goto LAB_010f9c5d;
  }
  if (cVar3 == '\b') {
    uVar2 = FUN_004aeac0(local_30,0);
    cVar4 = FUN_004113d0(uVar2,&PTR_FUN_01a5c280);
    if (cVar4 != '\0') {
      FUN_01ae3c10(*(undefined8 *)(lVar1 + 0x50),0);
      param_1[0x159] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0x13;
      FUN_00742eb0(param_1[0x154],1);
      goto LAB_010f9c5d;
    }
  }
  if (cVar3 == '\b') {
    uVar2 = FUN_004aeac0(local_30,0);
    cVar4 = FUN_004113d0(uVar2,&LAB_00f12330);
    if (cVar4 != '\0') {
      FUN_01ae5040(*(undefined8 *)(lVar1 + 0x50));
      param_1[0x159] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0x13;
      FUN_00742eb0(param_1[0x154],1);
      goto LAB_010f9c5d;
    }
  }
  if (cVar3 == '\b') {
    uVar2 = FUN_004aeac0(local_30,0);
    cVar4 = FUN_004113d0(uVar2,&PTR_FUN_010ecd58);
    if (cVar4 == '\0') {
      uVar2 = FUN_004aeac0(local_30,0);
      cVar4 = FUN_004113d0(uVar2,&LAB_00f10748);
      if (cVar4 == '\0') goto LAB_010f9c0d;
    }
    FUN_01ae4cc0(*(undefined8 *)(lVar1 + 0x50));
    param_1[0x159] = 0;
    *(undefined1 *)(param_1 + 0xf5) = 0x13;
    FUN_00742eb0(param_1[0x154],1);
  }
  else {
LAB_010f9c0d:
    if (cVar3 == '\b') {
      uVar2 = FUN_004aeac0(local_30,0);
      cVar3 = FUN_004113d0(uVar2,&PTR_FUN_010ef9a8);
      if (cVar3 != '\0') {
        FUN_01ae7100(*(undefined8 *)(lVar1 + 0x50));
        param_1[0x159] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0x13;
        FUN_00742eb0(param_1[0x154],1);
      }
    }
  }
LAB_010f9c5d:
  FUN_00410f20(local_30);
  return;
}

