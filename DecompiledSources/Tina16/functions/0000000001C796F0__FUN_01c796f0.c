/* Ghidra address: 01c796f0 */
/* Ghidra symbol: FUN_01c796f0 */


undefined1
FUN_01c796f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_119;
  undefined1 local_118 [264];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  local_119 = 0;
  lVar3 = FUN_01c7acf0(param_1);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x1d) = 1;
    FUN_00416910(local_118,local_res10,0xff);
    FUN_00415020(lVar3 + 0x47,local_118,0x28);
    FUN_00416910(local_118,local_res18,0xff);
    FUN_00415020(lVar3 + 0x70,local_118,0x28);
    FUN_00416910(local_118,local_res20,0xff);
    FUN_00415020(lVar3 + 0x99,local_118,0x28);
    FUN_00416910(local_118,param_5,0xff);
    FUN_00415020(lVar3 + 0xc2,local_118,0x28);
    FUN_00414ad0(lVar3 + 0x108,param_6);
    FUN_00414ad0(lVar3 + 0x110,param_7);
    local_119 = 1;
    *(undefined1 *)(lVar3 + 0x10) = 1;
    iVar1 = FUN_01b1d2f0();
    iVar1 = iVar1 - *(int *)(param_1 + 0x17e8);
    *(int *)(lVar3 + 0x18) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
    }
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x17f8);
    *(undefined4 *)(lVar3 + 0xf8) = *(undefined4 *)(param_1 + 0x17fc);
    uVar4 = FUN_01c7d9d0(param_1);
    uVar2 = FUN_012bec10(uVar4,*(undefined4 *)(param_1 + 0x17fc));
    *(undefined4 *)(lVar3 + 0xfc) = uVar2;
    FUN_01c79150(param_1);
    uVar2 = FUN_01b1d2f0();
    *(undefined4 *)(param_1 + 0x17e8) = uVar2;
  }
  FUN_00414560(&local_res10,6);
  return local_119;
}

