/* Ghidra address: 00779e20 */
/* Ghidra symbol: FUN_00779e20 */


undefined1
FUN_00779e20(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  char local_34;
  undefined4 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_34 = (char)uVar1;
  if ((byte)(local_34 - 0x20U) < 0x10) {
    bVar6 = ((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) << (local_34 - 0x20U & 0x1f) &
            0x3ffU) != 0;
  }
  else {
    bVar6 = false;
  }
  local_30 = (undefined4)(uVar1 >> 0x20);
  if (bVar6) {
    uVar3 = (**(code **)(param_1[(uVar1 & 0xff) - 0x1d] + 0x10))
                      (param_1[(uVar1 & 0xff) - 0x1d],param_1,param_2,local_30,(int)uVar2,param_4,
                       param_5,param_6,param_7);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0xa8))(param_1);
    iVar4 = (**(code **)PTR_DAT_02005068)
                      (uVar5,param_2,local_30,(int)uVar2,param_4,param_5,CONCAT44(uVar7,param_6));
    uVar3 = iVar4 == 0;
  }
  return uVar3;
}

