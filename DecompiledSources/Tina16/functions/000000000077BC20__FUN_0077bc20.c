/* Ghidra address: 0077bc20 */
/* Ghidra symbol: FUN_0077bc20 */


undefined1
FUN_0077bc20(longlong *param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar10;
  char local_34;
  undefined4 local_30;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_34 = (char)uVar1;
  if ((byte)(local_34 - 0x20U) < 0x10) {
    bVar9 = ((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) << (local_34 - 0x20U & 0x1f) &
            0x3ffU) != 0;
  }
  else {
    bVar9 = false;
  }
  local_30 = (undefined4)(uVar1 >> 0x20);
  if (bVar9) {
    uVar3 = (**(code **)(param_1[(uVar1 & 0xff) - 0x1d] + 0x48))
                      (param_1[(uVar1 & 0xff) - 0x1d],param_1,param_2,local_30,(int)uVar2,param_4,
                       param_5,param_6,param_7,param_8);
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0xb0))(param_1,uVar1 & 0xff,param_8);
    uVar8 = 0;
    if (param_4 != 0) {
      uVar8 = *(undefined4 *)(param_4 + -4);
    }
    uVar7 = FUN_00416740(param_4);
    uVar4 = FUN_0060f550(param_5);
    uVar4 = FUN_0060f500(uVar4);
    iVar5 = (**(code **)PTR_DAT_020020f0)
                      (uVar6,param_2,local_30,(int)uVar2,uVar7,CONCAT44(uVar10,uVar8),uVar4,param_6,
                       param_7);
    uVar3 = iVar5 == 0;
  }
  return uVar3;
}

