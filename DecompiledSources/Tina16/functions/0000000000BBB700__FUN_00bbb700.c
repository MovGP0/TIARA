/* Ghidra address: 00bbb700 */
/* Ghidra symbol: FUN_00bbb700 */


void FUN_00bbb700(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18));
  if (cVar2 == '\0') {
    plVar8 = *(longlong **)(param_1 + 0x18);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x20);
  }
  iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
  if (param_5 < iVar3) {
    iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
    FUN_00498350(local_48,param_3,param_4,param_3 + iVar3,param_4 + param_5);
    iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    uVar1 = (longlong)(iVar3 - param_5) / 2;
    uVar4 = (**(code **)(*plVar8 + 0x60))(plVar8,(longlong)(iVar3 - param_5) % 2 & 0xffffffff);
    FUN_00498350(local_38,0,uVar1 & 0xffffffff,uVar4,(int)uVar1 + param_5);
  }
  else {
    uVar4 = (**(code **)(*plVar8 + 0x60))(plVar8);
    uVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
    FUN_00498350(local_38,0,0,uVar4,uVar5);
    iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
    param_4 = param_4 + (param_5 - iVar3) / 2;
    iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8,(longlong)(param_5 - iVar3) % 2 & 0xffffffff);
    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    FUN_00498350(local_48,param_3,param_4,param_3 + iVar3,param_4 + iVar6);
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_48,plVar8,local_38,uVar7);
  return;
}

