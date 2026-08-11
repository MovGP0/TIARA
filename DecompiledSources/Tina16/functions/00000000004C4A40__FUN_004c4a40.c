/* Ghidra address: 004c4a40 */
/* Ghidra symbol: FUN_004c4a40 */


void FUN_004c4a40(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_20 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(undefined8 *)(param_1 + 0x50);
  *(ushort *)((longlong)param_2 + 0x34) = *(ushort *)((longlong)param_2 + 0x34) | 4;
  iVar2 = FUN_004d3e30();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_004d3de0(param_2,local_34);
      if ((*(byte *)(lVar3 + 0x58) & 4) != 0) {
        lVar3 = FUN_004d3de0(param_2,local_34);
        *(ushort *)(lVar3 + 0x34) = *(ushort *)(lVar3 + 0x34) | 4;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar4 = FUN_004c4990(auStack_78,param_2[2]);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     ((*(longlong *)(param_1 + 0x40) == 0 ||
      (cVar1 = FUN_004113d0(*(longlong *)(param_1 + 0x40),&PTR_FUN_00486f38), cVar1 != '\0')))) {
    local_30 = *(undefined8 *)(param_1 + 0x40);
    local_58 = &local_30;
    local_50 = param_1 + 0x50;
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),param_1,param_2,param_2[2]);
    *(undefined8 *)(param_1 + 0x40) = local_30;
  }
  (**(code **)(*param_2 + 0x68))(param_2,param_1);
  *(ushort *)((longlong)param_2 + 0x34) = *(ushort *)((longlong)param_2 + 0x34) & 0xfffb;
  iVar2 = FUN_004d3e30();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_004d3de0(param_2,local_34);
      if ((*(byte *)(lVar3 + 0x58) & 4) != 0) {
        lVar3 = FUN_004d3de0(param_2,local_34);
        *(ushort *)(lVar3 + 0x34) = *(ushort *)(lVar3 + 0x34) & 0xfffb;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x40) = local_20;
  *(undefined8 *)(param_1 + 0x50) = local_28;
  return;
}

