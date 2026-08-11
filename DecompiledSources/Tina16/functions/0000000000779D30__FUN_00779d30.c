/* Ghidra address: 00779d30 */
/* Ghidra symbol: FUN_00779d30 */


undefined1
FUN_00779d30(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  char local_34;
  undefined4 local_30;
  
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
    uVar3 = (**(code **)(param_1[(uVar1 & 0xff) - 0x1d] + 8))
                      (param_1[(uVar1 & 0xff) - 0x1d],param_1,param_2,local_30,(int)uVar2,param_4,
                       param_5,param_6);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0xb0))(param_1,uVar1 & 0xff,param_6);
    iVar4 = (**(code **)PTR_DAT_02003490)(uVar5,param_2,local_30,(int)uVar2,param_4,param_5);
    uVar3 = iVar4 == 0;
  }
  return uVar3;
}

