/* Ghidra address: 01521090 */
/* Ghidra symbol: FUN_01521090 */


void FUN_01521090(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined8 local_160;
  undefined1 local_158 [264];
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  local_160 = 0;
  local_40 = 0;
  local_48 = (undefined2 *)0x0;
  local_50 = 0;
  plVar1 = *(longlong **)(param_1 + 0xd70);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
    if (iVar2 < iVar3 + -1) {
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x98))((longlong *)plVar1[0x9e],uVar4);
      iVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))();
      iVar3 = 0;
      if (-1 < iVar2 + -2) {
        iVar2 = iVar2 + -1;
        do {
          FUN_0040e840(local_158,iVar3 + 1);
          FUN_004169a0(&local_48,local_158);
          (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_50,iVar3);
          puVar5 = (undefined2 *)FUN_00414de0(&local_50);
          *puVar5 = *local_48;
          (**(code **)(*(longlong *)plVar1[0x9e] + 0x40))((longlong *)plVar1[0x9e],iVar3,local_50);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_160,uVar4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0xe38),local_160);
    }
  }
  FUN_00414480(&local_160);
  FUN_00414560(&local_50,3);
  return;
}

