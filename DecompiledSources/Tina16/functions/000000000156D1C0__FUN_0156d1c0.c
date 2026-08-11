/* Ghidra address: 0156d1c0 */
/* Ghidra symbol: FUN_0156d1c0 */


void FUN_0156d1c0(undefined8 param_1,longlong *param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int local_4c;
  int local_44;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_44 = param_3;
  if (0x1ff < param_3) {
    local_44 = param_3 + -0x200;
  }
  iVar4 = local_44 % 0x40;
  if (0x1ff < param_3) {
    iVar4 = iVar4 + 0x40;
  }
  iVar4 = iVar4 * 2;
  local_4c = 0;
  do {
    iVar1 = ((local_44 / 0x40) * 8 + local_4c) * 2;
    if ((param_4 >> ((byte)local_4c & 0x1f) & 1) == 0) {
      uVar3 = 0xffffff;
    }
    else {
      uVar3 = 0;
    }
    if ((iVar4 < 0xff) && (iVar1 < 0x7f)) {
      plVar2 = (longlong *)FUN_00609e10(param_2);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar4,iVar1,uVar3);
      plVar2 = (longlong *)FUN_00609e10(param_2);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar4 + 1,iVar1,uVar3);
      plVar2 = (longlong *)FUN_00609e10(param_2);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar4,iVar1 + 1,uVar3);
      plVar2 = (longlong *)FUN_00609e10(param_2);
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar4 + 1,iVar1 + 1,uVar3);
    }
    local_4c = local_4c + 1;
  } while (local_4c != 8);
  FUN_00416ba0(local_40,*(undefined8 *)PTR_DAT_02005010,L"\\a1.bmp");
  (**(code **)(*param_2 + 0xb0))(param_2,local_40[0]);
  FUN_00414480(local_40);
  return;
}

