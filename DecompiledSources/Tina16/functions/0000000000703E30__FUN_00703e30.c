/* Ghidra address: 00703e30 */
/* Ghidra symbol: FUN_00703e30 */


void FUN_00703e30(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  
  FUN_0040d200(local_60,0x38,0);
  local_58 = (longlong)param_2;
  local_48 = 0;
  uVar2 = FUN_004b2640(param_1);
  uVar2 = FUN_0065b870(uVar2);
  lVar3 = FUN_004701b0(uVar2,0x40d,0,local_60,1);
  lVar4 = FUN_00703d10(param_1,param_2);
  local_60[0] = 0x37;
  local_50 = FUN_00416740(*(undefined8 *)(lVar4 + 0x20));
  iVar1 = FUN_004b1870();
  local_58 = (longlong)iVar1;
  local_48 = 0;
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    local_48 = *(undefined4 *)(*(longlong *)(lVar4 + 0x20) + -4);
  }
  local_44 = *(undefined4 *)(lVar4 + 0x30);
  local_40 = *(undefined4 *)(lVar4 + 0x38);
  local_3c = *(undefined4 *)(lVar4 + 0x3c);
  local_38 = *(undefined4 *)(lVar4 + 0x40);
  local_30 = *(undefined8 *)(lVar4 + 0x28);
  if (lVar3 == 0) {
    uVar2 = FUN_004b2640(param_1);
    uVar2 = FUN_0065b870(uVar2);
    FUN_004701a0(uVar2,0x40b,(longlong)param_2,local_60);
  }
  else {
    uVar2 = FUN_004b2640(param_1);
    uVar2 = FUN_0065b870(uVar2);
    FUN_004701a0(uVar2,0x40c,(longlong)param_2,local_60);
  }
  return;
}

