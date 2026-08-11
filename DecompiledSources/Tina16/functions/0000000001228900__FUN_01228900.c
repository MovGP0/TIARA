/* Ghidra address: 01228900 */
/* Ghidra symbol: FUN_01228900 */


void FUN_01228900(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50 [2];
  undefined8 local_40 [4];
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50[0] = (undefined *)0x0;
  local_40[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x8c8) + 0x260))
                    (*(longlong **)(DAT_021076a0 + 0x8c8));
  if (cVar2 == '\x01') {
    FUN_00414ad0(*(longlong *)(DAT_021076a0 + 0x730) + 0xe0,
                 L"Spice analysis file (*.CIR)|*.CIR|All files (*.*)|*.*");
    lVar1 = *(longlong *)(DAT_021076a0 + 0x730);
    *(undefined4 *)(lVar1 + 0xe8) = 1;
    FUN_00416ba0(local_50,*(undefined8 *)PTR_DAT_02004ff0,L".CIR");
    FUN_00724380(lVar1,local_50[0]);
    cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x730) + 0xa8))
                      (*(longlong **)(DAT_021076a0 + 0x730));
    if (cVar2 != '\0') {
      uVar5 = *(undefined8 *)(DAT_021076a0 + 0x730);
      FUN_00724270(*(undefined8 *)(DAT_021076a0 + 0x730),local_40);
      FUN_00724270(*(undefined8 *)(DAT_021076a0 + 0x730),&local_58);
      cVar2 = FUN_00440a20(local_58,1);
      if (cVar2 == '\0') {
        FUN_01186930(PTR_DAT_020019a0,PTR_DAT_02005030,local_40[0],*(undefined8 *)PTR_DAT_02005aa0,
                     *(undefined8 *)PTR_DAT_02002798,*(undefined8 *)PTR_DAT_02001510);
      }
      else {
        FUN_00724270(uVar5,&local_70);
        FUN_00441920(&local_68,local_70);
        FUN_00416cd0(&local_60,3,L"Do you really want to delete ",local_68,&DAT_0122904c);
        iVar3 = FUN_0072d440(local_60,2,3,0);
        if (iVar3 == 6) {
          FUN_01186930(PTR_DAT_020019a0,PTR_DAT_02005030,local_40[0],*(undefined8 *)PTR_DAT_02005aa0
                       ,*(undefined8 *)PTR_DAT_02002798,*(undefined8 *)PTR_DAT_02001510);
        }
      }
    }
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x8b8) + 0x260))
                      (*(longlong **)(DAT_021076a0 + 0x8b8));
    if (cVar2 == '\x01') {
      *PTR_DAT_02001a98 = 0;
      FUN_01c77470(*(undefined8 *)PTR_DAT_02004e40,1);
      FUN_008059a0(*(undefined8 *)PTR_DAT_02001700);
      FUN_00805990(*(undefined8 *)PTR_DAT_02001700);
      plVar4 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
      FUN_0149eb90(plVar4,*(undefined8 *)PTR_DAT_02005aa0);
      (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
                (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar4);
      uVar5 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*plVar4 + 0xe8))(plVar4,uVar5,0x10,8);
      *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
      *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
      *(undefined4 *)PTR_DAT_02005b20 = 0;
      cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x9c0) + 0x260))
                        (*(longlong **)(DAT_021076a0 + 0x9c0));
      if (cVar2 == '\x01') {
        FUN_01160b70(PTR_DAT_020019a0,PTR_DAT_02005030,*(undefined8 *)PTR_DAT_02004ff0,
                     *(undefined8 *)PTR_DAT_02005aa0,*(undefined8 *)PTR_DAT_02002798,
                     *(undefined8 *)PTR_DAT_02001510);
      }
      else {
        FUN_01160f60(PTR_DAT_020019a0,PTR_DAT_02001390,*(undefined8 *)PTR_DAT_02004ff0,
                     *(undefined8 *)PTR_DAT_02005aa0,*(undefined8 *)PTR_DAT_02002798,
                     *(undefined8 *)PTR_DAT_02001510);
      }
      FUN_00800700(DAT_021076a0,1);
      FUN_00800700(DAT_021076a0,1);
    }
  }
  cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x8c0) + 0x260))
                    (*(longlong **)(DAT_021076a0 + 0x8c0));
  if (cVar2 == '\x01') {
    *PTR_DAT_02001a98 = 1;
    FUN_01c77470(*(undefined8 *)PTR_DAT_02004e40,1);
    FUN_008059a0(*(undefined8 *)PTR_DAT_02001700);
    FUN_00805990(*(undefined8 *)PTR_DAT_02001700);
    plVar4 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
    FUN_0149eb90(plVar4,*(undefined8 *)PTR_DAT_02005aa0);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar4);
    uVar5 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar4 + 0xe8))(plVar4,uVar5,0x10,8);
    *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
    *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
    *(undefined4 *)PTR_DAT_02005b20 = 0;
    cVar2 = (**(code **)(**(longlong **)(DAT_021076a0 + 0x9c0) + 0x260))
                      (*(longlong **)(DAT_021076a0 + 0x9c0));
    if (cVar2 == '\x01') {
      FUN_01160b70(PTR_DAT_020019a0,PTR_DAT_02005030,*(undefined8 *)PTR_DAT_02004ff0,
                   *(undefined8 *)PTR_DAT_02005aa0,*(undefined8 *)PTR_DAT_02002798,
                   *(undefined8 *)PTR_DAT_02001510);
    }
    else {
      FUN_01160f60(PTR_DAT_020019a0,PTR_DAT_02001390,*(undefined8 *)PTR_DAT_02004ff0,
                   *(undefined8 *)PTR_DAT_02005aa0,*(undefined8 *)PTR_DAT_02002798,
                   *(undefined8 *)PTR_DAT_02001510);
    }
    FUN_00800700(DAT_021076a0,1);
    FUN_00800700(DAT_021076a0,1);
    *PTR_DAT_020028e0 = 1;
    FUN_01c89c60(*(undefined8 *)PTR_DAT_02004e40,param_1);
    *PTR_DAT_020028e0 = 0;
  }
  FUN_00414480(&local_70);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_58);
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

