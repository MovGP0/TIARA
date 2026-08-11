/* Ghidra address: 013891d0 */
/* Ghidra symbol: FUN_013891d0 */


void FUN_013891d0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 local_40 [2];
  undefined1 local_29;
  
  local_40[0] = 0;
  if ((*(longlong *)PTR_DAT_020027c0 != 0) &&
     (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8) + 0x434) == '\x04')) {
    FUN_01cc6020(*(undefined8 *)PTR_DAT_020027c0);
    if (param_1[0x135] != 0) {
      FUN_01cc6030(param_1[0x135]);
    }
    param_1[0x135] = *(longlong *)PTR_DAT_020027c0;
    while( true ) {
      iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                        (*(longlong **)(param_1[0xfb] + 0x4f0));
      if (iVar1 <= (int)(uint)*(byte *)((longlong)param_1 + 0xe81)) break;
      plVar4 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar1 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
      local_29 = 0;
      FUN_010f6740(param_1,uVar2,0,&local_29,0);
      FUN_00410f20(uVar2);
      plVar4 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      (**(code **)(*plVar4 + 0x98))(plVar4,iVar1 + -1);
    }
    bVar5 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                      (*(longlong **)(param_1[0xfb] + 0x4f0));
    if (iVar1 != 0) {
      plVar4 = *(longlong **)(param_1[0xfb] + 0x4f0);
      iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar1 + -1);
      bVar5 = *(byte *)(lVar3 + 0x80);
    }
    FUN_01cc5c60(*(undefined8 *)PTR_DAT_020027c0);
    do {
      lVar3 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_020027c0);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x3a) == '\x01')) && (*(char *)(lVar3 + 0x18) != '\0')
         ) {
        bVar5 = bVar5 + 1;
        plVar4 = (longlong *)FUN_01106eb0(&PTR_FUN_011051a8,1);
        *(undefined1 *)(plVar4 + 2) = 0;
        *(undefined1 *)((longlong)plVar4 + 0x11) = 1;
        FUN_01cc0ae0(lVar3,local_40);
        FUN_00416ba0(plVar4 + 1,local_40[0],&LAB_01389554);
        *(undefined1 *)(plVar4 + 7) = 1;
        *(uint *)(plVar4 + 0x10) = (uint)bVar5 % 0xf;
        (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,*(undefined8 *)PTR_DAT_020027c0);
        (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
                  (*(longlong **)(param_1[0xfb] + 0x4f0),plVar4[1],plVar4);
      }
    } while (lVar3 != 0);
    FUN_01388950(param_1,(char)param_1[0x132]);
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))
              ((longlong *)param_1[0xfb],*(undefined1 *)((longlong)param_1 + 0xe81));
    (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar1 == 0) {
    plVar4 = (longlong *)FUN_01106eb0(&PTR_FUN_011051a8,1);
    param_1[0x10e] = (longlong)plVar4;
    (**(code **)(*plVar4 + 8))(plVar4,param_1[0x10d]);
    (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
              (*(longlong **)(param_1[0xfb] + 0x4f0),0,param_1[0x10e]);
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
  }
  FUN_00414480(local_40);
  return;
}

