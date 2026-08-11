/* Ghidra address: 01ca41e0 */
/* Ghidra symbol: FUN_01ca41e0 */


void FUN_01ca41e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  uVar2 = FUN_014c0b50();
  plVar3 = (longlong *)FUN_014c4a00(uVar2);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar4);
      FUN_00415dd0(param_1 + 0x1928,local_30,0);
      FUN_004155b0(param_1 + 0x1928,&LAB_01ca4304);
      FUN_004425e0(param_1 + 0x1930,*(undefined8 *)(param_1 + 0x1928));
      uVar2 = FUN_014cdce0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x2788) + 0x488) + 0xe8));
      _TC_SendCommand(uVar2,param_1 + 0x1930);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(&local_30);
  return;
}

