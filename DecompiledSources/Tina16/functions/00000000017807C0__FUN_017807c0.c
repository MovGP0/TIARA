/* Ghidra address: 017807c0 */
/* Ghidra symbol: FUN_017807c0 */


void FUN_017807c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar4 = (int)*(short *)(param_1 + 0xc);
  local_44 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_44);
      iVar1 = (**(code **)(*plVar2 + 0x28))();
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          (**(code **)(*plVar2 + 0x18))(plVar2,local_40,iVar3);
          FUN_01780680(param_1,local_40[0]);
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_44 = local_44 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_40);
  return;
}

