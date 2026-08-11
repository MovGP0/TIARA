/* Ghidra address: 01a26a00 */
/* Ghidra symbol: FUN_01a26a00 */


void FUN_01a26a00(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(short *)(param_1 + 0x372) = (short)(param_2 / 2) + 8;
  *(short *)(param_1 + 0x374) = (short)(param_3 / 2) + 8;
  FUN_0043e130(local_30,local_res20);
  iVar2 = FUN_00416db0(local_30[0],L"OP07.ASY");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_30[0],L"AD549.ASY");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_30[0],L"LT1001.ASY");
      if (iVar2 != 0) goto LAB_01a26ad4;
    }
  }
  *(short *)(param_1 + 0x372) = *(short *)(param_1 + 0x372) + -0x18;
  *(short *)(param_1 + 0x374) = *(short *)(param_1 + 0x374) + 0x60;
LAB_01a26ad4:
  lVar1 = *(longlong *)(param_1 + 0x380);
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_1 + 0x372);
  uVar3 = FUN_00b959a0(0,0);
  *(undefined4 *)(lVar1 + 0x28) = uVar3;
  uVar4 = FUN_00b95b20(0,0,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x14) = uVar4;
  *(undefined8 *)(lVar1 + 0xc) = *(undefined8 *)(lVar1 + 0x14);
  *(short *)(lVar1 + 0xc) = *(short *)(lVar1 + 0xc) + -8;
  *(short *)(lVar1 + 0x10) = *(short *)(lVar1 + 0x10) + 8;
  uVar3 = FUN_00b959a0(*(short *)(lVar1 + 0x14) + 4,*(short *)(lVar1 + 0x16) + -0xf);
  *(undefined4 *)(lVar1 + 0x2c) = uVar3;
  FUN_00414480(local_30);
  FUN_00414480(&local_res20);
  return;
}

