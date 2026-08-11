/* Ghidra address: 0138bc80 */
/* Ghidra symbol: FUN_0138bc80 */


void FUN_0138bc80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 local_29;
  
  iVar5 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]);
  if (iVar5 != -1) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]);
    (**(code **)(*(longlong *)param_1[0x1d1] + 0x150))((longlong *)param_1[0x1d1],cVar3);
    (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
              (*(longlong **)(param_1[0xfb] + 0x4f0));
    uVar7 = (*(code *)**(undefined8 **)param_1[0x1d1])((undefined8 *)param_1[0x1d1]);
    (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
              (*(longlong **)(param_1[0xfb] + 0x4f0),uVar7);
    uVar4 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                      (*(longlong **)(param_1[0xfb] + 0x4f0));
    *(undefined1 *)((longlong)param_1 + 0xe81) = uVar4;
    (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
    (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
    (**(code **)(*(longlong *)param_1[0x1d1] + 0x128))
              ((longlong *)param_1[0x1d1],param_1 + 0x1ce,(longlong)param_1 + 0xe74);
    FUN_00f04fa0(param_1[0x187],(int)param_1[0x1ce]);
    FUN_01387140(param_1);
    lVar1 = param_1[0x136];
    plVar2 = (longlong *)param_1[0x17e];
    uVar6 = (**(code **)(*plVar2 + 0x260))(plVar2);
    uVar7 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar6);
    uVar7 = FUN_004113f0(uVar7,&DAT_01106a78);
    *(undefined8 *)(lVar1 + 0x110) = uVar7;
    if ((*(char *)((longlong)param_1 + 0x7fa) == '\b') && ((cVar3 == '\0' || (cVar3 == '\x01')))) {
      FUN_00415020(*(longlong *)(lVar1 + 0x110) + 8,param_1[0x1cf] + 0x11,0x28);
    }
    cVar3 = *(char *)(*(longlong *)(lVar1 + 0x110) + 0x31);
    if ((cVar3 == '\x04') || (cVar3 == '\x05')) {
      local_29 = 1;
      uVar7 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
                        ((longlong *)param_1[0x1d1],&local_29,0);
      *(undefined8 *)(lVar1 + 0x118) = uVar7;
      *(undefined1 *)(lVar1 + 0x120) = 1;
    }
    else {
      local_29 = 0;
      uVar7 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
                        ((longlong *)param_1[0x1d1],&local_29,0);
      *(undefined8 *)(lVar1 + 0x118) = uVar7;
      *(undefined1 *)(lVar1 + 0x120) = 0;
    }
    FUN_010f6af0(param_1,2,0,0);
    FUN_01388950(param_1,(char)param_1[0x132]);
  }
  return;
}

