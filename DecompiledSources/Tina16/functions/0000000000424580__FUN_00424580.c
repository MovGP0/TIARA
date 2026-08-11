/* Ghidra address: 00424580 */
/* Ghidra symbol: FUN_00424580 */


void FUN_00424580(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_28;
  int local_1c;
  
  local_50 = auStack_78;
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x28))(param_1,1);
  iVar3 = (**(code **)(*param_1 + 0x50))();
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_28 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,local_1c);
      local_38 = *local_28;
      if (*(longlong *)PTR_PTR_02002ff8 == 0) {
        FUN_004098e0(0x1a);
      }
      uVar4 = FUN_004121f0(local_38);
      FUN_00411f00(uVar4,0xffffffff);
      if ((*(byte *)(*local_28 + 0x14) & 1) == 0) {
        piVar1 = (int *)(*local_28 + 0x10);
        *piVar1 = *piVar1 + -1;
        lVar2 = *local_28;
        if (*(int *)(lVar2 + 0x10) == 0) {
          FUN_00412130(lVar2);
          local_40 = local_28;
          local_48 = *local_28;
          *local_28 = 0;
          FUN_00410f20(local_48);
        }
        else {
          FUN_00412130(lVar2);
        }
      }
      else {
        lVar2 = *local_28;
        if ((*(byte *)(lVar2 + 0x14) & 2) == 0) {
          *(int *)(lVar2 + 0x18) = (int)local_28[1];
          *(byte *)(lVar2 + 0x14) = *(byte *)(lVar2 + 0x14) & 0xfe;
        }
        else {
          *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        }
        FUN_00412130(*local_28);
        FUN_004122a0(*(undefined8 *)(*local_28 + 8));
      }
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

