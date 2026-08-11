/* Ghidra address: 01a1ea10 */
/* Ghidra symbol: FUN_01a1ea10 */


void FUN_01a1ea10(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_268 = 0;
  local_50[0] = 0;
  local_260 = 0;
  local_158 = 0;
  local_38 = 0;
  local_40 = 0;
  for (iVar8 = 0;
      (*(char *)(param_1 + 0xc2) == '\0' &&
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))(*(longlong **)(param_1 + 0x98))
      , iVar8 < iVar2)); iVar8 = iVar8 + 1) {
    if (*(char *)(param_1 + 0x88) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),L".ENDS");
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
    plVar3 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                       (*(longlong **)(param_1 + 0x98),iVar8);
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
              (*(longlong **)(param_1 + 0x98),&local_158,iVar8);
    FUN_00416910(local_258,local_158,0xff);
    FUN_01a0cc10(param_1,local_150,local_258);
    FUN_004154b0(&local_260,local_150,0);
    FUN_004156b0(local_50,".SUBCKT ",local_260);
    FUN_00416880(&local_38,local_50[0]);
    iVar2 = (**(code **)(*plVar3 + 0x1c8))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_019ef990(param_1,&local_268,plVar3,iVar7);
        FUN_00416cd0(&local_38,3,local_38,&DAT_01a1ee4c,local_268);
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00414b50(&local_40,&DAT_01a1ee5c);
    iVar2 = FUN_01cfd2d0();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = (**(code **)(*plVar3 + 0x2d0))(plVar3,iVar7,&local_30);
        if (cVar1 == '\t') {
          if (-1 < *(short *)(local_30 + 0x1f)) {
            FUN_00416cd0(&local_38,3,local_38,&DAT_01a1ee4c,local_40);
          }
          FUN_00414b50(&local_40,&LAB_01a1ee70);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_019ee8e0(param_1,local_38,0x50);
    plVar4 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
    *(undefined2 *)((longlong)plVar3 + 0xec) = 1;
    plVar5 = (longlong *)FUN_01d013c0(plVar3,0);
    while (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
      (**(code **)(*plVar4 + 0x20))(plVar4,uVar6);
      FUN_01d018f0(plVar3);
      plVar5 = (longlong *)FUN_01d013c0(plVar3,0);
    }
    FUN_01995400(plVar4);
    FUN_01995490(plVar4,(int)plVar4[2]);
    FUN_01a10d70(param_1,plVar4,0,plVar3,0);
    uVar6 = (**(code **)*plVar4)(plVar4);
    FUN_00418590(uVar6,&DAT_01984da0);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20));
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20));
  }
  FUN_00414480(&local_268);
  FUN_004144d0(&local_260);
  FUN_00414480(&local_158);
  FUN_004144d0(local_50);
  FUN_00414560(&local_40,2);
  return;
}

