/* Ghidra address: 017808b0 */
/* Ghidra symbol: FUN_017808b0 */


void FUN_017808b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_0040ca20(param_1 + 0x308);
  FUN_00409900();
  iVar5 = (int)*(short *)(param_1 + 0xe);
  local_44 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x630),local_44);
      iVar1 = (**(code **)(*plVar2 + 0x28))();
      iVar4 = 0;
      if (-1 < iVar1 + -1) {
        do {
          (**(code **)(*plVar2 + 0x18))(plVar2,local_40,iVar4);
          uVar3 = FUN_0040f200(param_1 + 0x308,local_40[0]);
          FUN_0040f590(uVar3);
          FUN_00409900();
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_44 = local_44 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0040d150(param_1 + 0x308);
  FUN_00409900();
  FUN_00414480(local_40);
  return;
}

