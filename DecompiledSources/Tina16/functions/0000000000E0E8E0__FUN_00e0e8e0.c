/* Ghidra address: 00e0e8e0 */
/* Ghidra symbol: FUN_00e0e8e0 */


void FUN_00e0e8e0(longlong param_1,uint *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020038b0);
  uVar3 = (uint)(iVar2 == 0);
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003ba8);
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020021c8);
  if (iVar2 == 0) {
    uVar3 = 4;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003248);
  if (iVar2 == 0) {
    uVar3 = 8;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003b58);
  if (iVar2 == 0) {
    uVar3 = 0x200;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02004d88);
  if (iVar2 == 0) {
    uVar3 = 0x400;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02001da8);
  if (iVar2 == 0) {
    uVar3 = 0x100;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003c10);
  if (iVar2 == 0) {
    uVar3 = 0x800;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020030f8);
  if (iVar2 == 0) {
    uVar3 = 0x10;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02001550);
  if (iVar2 == 0) {
    uVar3 = 0x20;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003ee0);
  if (iVar2 == 0) {
    uVar3 = 0x40;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020039a0);
  if (iVar2 == 0) {
    uVar3 = 0x2000;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02005740);
  if (iVar2 == 0) {
    uVar3 = 0x4000;
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02001638);
  if (iVar2 == 0) {
    uVar3 = 0x80;
  }
  *param_2 = uVar3;
  if ((uVar3 == 0x20) || (uVar3 == 0x80)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  return;
}

