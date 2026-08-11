/* Ghidra address: 01a7cb70 */
/* Ghidra symbol: FUN_01a7cb70 */


void FUN_01a7cb70(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  FUN_01aee720(local_30,0x406,(int)param_1[0xd7],L"PropertiesMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_30[0]);
  if (param_1[0xf3] == 0) goto LAB_01a7cdd9;
  local_20[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(param_1[0xf3],local_20);
  if (cVar1 == '\x01') {
    (**(code **)(*param_1 + 0x368))(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*param_1 + 0x370))(param_1,param_2);
  }
  else {
    if (cVar1 == '\b') {
      uVar3 = FUN_004aeac0(local_20[0],0);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01a5c280);
      if (cVar2 != '\0') {
        FUN_01ae3c10(param_1[0xf3],0);
        param_1[0x200] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0x13;
        FUN_00742eb0(param_1[0x11d],1);
        goto LAB_01a7cdcf;
      }
    }
    if (cVar1 == '\b') {
      uVar3 = FUN_004aeac0(local_20[0],0);
      cVar2 = FUN_004113d0(uVar3,&LAB_00f12330);
      if (cVar2 != '\0') {
        FUN_01ae5040(param_1[0xf3]);
        param_1[0x200] = 0;
        *(undefined1 *)(param_1 + 0xf5) = 0x13;
        FUN_00742eb0(param_1[0x11d],1);
        goto LAB_01a7cdcf;
      }
    }
    if (cVar1 == '\b') {
      uVar3 = FUN_004aeac0(local_20[0],0);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_010ecd58);
      if (cVar2 == '\0') {
        uVar3 = FUN_004aeac0(local_20[0],0);
        cVar2 = FUN_004113d0(uVar3,&LAB_00f10748);
        if (cVar2 == '\0') goto LAB_01a7cd75;
      }
      FUN_01ae4cc0(param_1[0xf3]);
      param_1[0x200] = 0;
      *(undefined1 *)(param_1 + 0xf5) = 0x13;
      FUN_00742eb0(param_1[0x11d],1);
    }
    else {
LAB_01a7cd75:
      if (cVar1 == '\b') {
        uVar3 = FUN_004aeac0(local_20[0],0);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_010ef9a8);
        if (cVar1 != '\0') {
          FUN_01ae7100(param_1[0xf3]);
          param_1[0x200] = 0;
          *(undefined1 *)(param_1 + 0xf5) = 0x13;
          FUN_00742eb0(param_1[0x11d],1);
        }
      }
    }
  }
LAB_01a7cdcf:
  FUN_00410f20(local_20[0]);
LAB_01a7cdd9:
  FUN_00414480(local_30);
  return;
}

