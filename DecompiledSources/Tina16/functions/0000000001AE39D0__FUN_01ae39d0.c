/* Ghidra address: 01ae39d0 */
/* Ghidra symbol: FUN_01ae39d0 */


longlong * FUN_01ae39d0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_40 = (longlong *)0x0;
  local_20 = 0;
  cVar1 = FUN_01ace420(param_1,param_2,param_3,&local_20);
  if (cVar1 == '\x02') {
    local_40 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
    plVar2 = (longlong *)FUN_004aeac0(local_20,0);
    local_40[0x15] = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x100))(plVar2,local_40);
    (**(code **)(*(longlong *)local_40[0x15] + 0xf8))
              ((longlong *)local_40[0x15],param_2,param_3,local_40 + 0x16,local_40 + 0x17);
    lVar3 = local_40[0x12];
    *(undefined1 *)(lVar3 + 0x98) = 1;
    FUN_01ae7d50(param_1,local_30,param_2,param_3);
    plVar2 = *(longlong **)(lVar3 + 0xa0);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_30[0]);
    lVar3 = FUN_01ad08c0(param_1,param_2,param_3);
    FUN_005fce30(*(undefined8 *)(local_40[0x12] + 0x80),*(undefined4 *)(lVar3 + 0x90));
    *(undefined1 *)((longlong)local_40 + 0x99) = 1;
    *(undefined1 *)(local_40 + 0x14) = 1;
    local_38 = FUN_00498310(param_2 + 0xf,param_3 + -0xf);
    (**(code **)(*local_40 + 200))(local_40,&local_38);
    local_40[0x11] = param_1;
    (**(code **)(*local_40 + 0xe8))(local_40);
    FUN_01a5f250(local_40);
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x80))
              (*(longlong **)(param_1 + 0xe0),L"Text",local_40);
  }
  else {
    cVar1 = FUN_01ace420(param_1,param_2,param_3,&local_20);
    if (cVar1 == '\b') {
      uVar4 = FUN_004aeac0(local_20,0);
      cVar1 = FUN_004113d0(uVar4,&LAB_00f12330);
      if (cVar1 != '\0') {
        uVar4 = FUN_004aeac0(local_20,0);
        local_40 = (longlong *)FUN_00f15c70(uVar4);
      }
    }
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_30);
  return local_40;
}

