/* Ghidra address: 012b0230 */
/* Ghidra symbol: FUN_012b0230 */


void FUN_012b0230(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  bool bVar8;
  undefined1 local_29 [9];
  
  bVar7 = (byte)param_2;
  if (bVar7 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar7 & 0x1f) & 6U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    while (iVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                             (*(longlong **)(param_1[0xfb] + 0x4f0)),
          (int)(uint)*(byte *)((longlong)param_1 + 0xd8a) < iVar3) {
      plVar6 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar3 + -1);
      local_29[0] = 0;
      FUN_010f6740(param_1,uVar5,0,local_29,0);
      FUN_00410f20(uVar5);
      plVar6 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x98))(plVar6,iVar3 + -1);
    }
    if (param_1[0x135] != 0) {
      FUN_01cc6030(param_1[0x135]);
    }
    param_1[0x135] = 0;
    iVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
    if (((int)(uint)*(byte *)((longlong)param_1 + 0xd8a) <= iVar3) ||
       (iVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]),
       iVar3 < 0)) {
      uVar4 = (**(code **)(*(longlong *)param_1[0x1b7] + 0x60))((longlong *)param_1[0x1b7]);
      (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],uVar4);
      (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
    }
  }
  FUN_010f6af0(param_1,param_2,0,0);
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
  uVar5 = FUN_010f67e0(param_1,1,1);
  if (bVar7 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (bVar7 & 0x1f) & 5U) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((bVar8) && (*(char *)((longlong)param_1 + 0x7ed) != '\0')) {
    lVar1 = param_1[0x1b7];
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_012a1d38);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)FUN_004113f0(lVar1,&PTR_FUN_012a1d38);
      iVar3 = (**(code **)(*(longlong *)param_1[0x173] + 0x260))((longlong *)param_1[0x173]);
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x168))(plVar6);
      }
      else {
        *(undefined1 *)((longlong)plVar6 + 0x12e) = 0;
        *(undefined1 *)((longlong)plVar6 + 300) = 0;
        *(undefined1 *)((longlong)plVar6 + 0x12d) = 1;
        if (plVar6[0x29] != 0) {
          FUN_01cc60b0(plVar6[0x29],0);
        }
      }
      plVar6[0x26] = 0;
      *(undefined4 *)(plVar6 + 0x25) = 0;
    }
  }
  return;
}

