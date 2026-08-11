/* Ghidra address: 01c7cd90 */
/* Ghidra symbol: FUN_01c7cd90 */


void FUN_01c7cd90(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  if (param_3 < 1) {
    plVar3 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0xa48),1);
    (**(code **)(*plVar3 + 0x30))(plVar3,param_4);
    plVar3 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0xa48),1);
    lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,param_4);
    if (*(char *)(lVar4 + 0x10) != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa48) + 0x490);
      plVar5 = (longlong *)FUN_0084e370(*(longlong *)(param_1 + 0xa48),1);
      lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,param_4);
      if (*(char *)(lVar4 + 0x1d) == '\0') {
        plVar5 = *(longlong **)(param_1 + 0x1b70);
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x1b68);
      }
      (**(code **)(*plVar3 + 0xa8))(plVar3,&local_38);
      uVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
      uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
      FUN_00498370(local_48,(int)local_38 + 2,local_38._4_4_,uVar1,uVar2);
      uVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
      uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
      FUN_00498370(local_58,0,0,uVar1,uVar2);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_48,plVar5,local_58,0x800080);
    }
  }
  return;
}

