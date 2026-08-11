/* Ghidra address: 00d26b10 */
/* Ghidra symbol: FUN_00d26b10 */


void FUN_00d26b10(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined4 local_68 [8];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  
  FUN_0040d200(local_68,0x20,0);
  FUN_00409a70(*(undefined8 *)(param_1 + 0x68),local_68,(longlong)*(int *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x70) < 0x11) {
    *(undefined4 *)(param_1 + 0x70) = 0x10;
  }
  else if (*(int *)(param_1 + 0x70) < 0x19) {
    *(undefined4 *)(param_1 + 0x70) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0x20;
  }
  uVar4 = *(uint *)(param_1 + 0x70) >> 3;
  iVar5 = uVar4 - 1;
  local_6c = 0;
  if (-1 < iVar5) {
    puVar6 = local_38;
    puVar7 = local_48;
    do {
      *puVar6 = local_48[(longlong)(local_6c * 2) + -8];
      uVar2 = local_48[(longlong)(local_6c * 2 + 1) + -8];
      *puVar7 = uVar2;
      uVar2 = FUN_00d26790(auStack_98,*puVar6,uVar2);
      *(undefined4 *)(param_1 + 0x30 + (longlong)iVar5 * 4) = uVar2;
      iVar5 = iVar5 + -1;
      local_6c = local_6c + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar5 = 0;
  local_6c = 0;
  do {
    iVar3 = FUN_00d26850(auStack_98,iVar5,local_38,3);
    uVar2 = FUN_00d26850(auStack_98,iVar5 + 0x1010101,local_48,3);
    uVar4 = FUN_00cd7270(uVar2,8);
    iVar1 = local_6c * 2;
    *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 4) = iVar3 + uVar4;
    uVar2 = FUN_00cd7270(iVar3 + (uVar4 >> 1),9);
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar1 + 1) * 4) = uVar2;
    iVar5 = iVar5 + 0x2020202;
    local_6c = local_6c + 1;
  } while (local_6c != 0x14);
  return;
}

