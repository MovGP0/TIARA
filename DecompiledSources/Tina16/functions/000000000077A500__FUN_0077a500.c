/* Ghidra address: 0077a500 */
/* Ghidra symbol: FUN_0077a500 */


undefined1 FUN_0077a500(longlong *param_1,ulonglong *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  char local_34;
  undefined4 local_30;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_34 = (char)uVar1;
  if ((byte)(local_34 - 0x20U) < 0x10) {
    bVar6 = ((int)CONCAT62((int6)(param_3 >> 0x10),1) << (local_34 - 0x20U & 0x1f) & 0x3ffU) != 0;
  }
  else {
    bVar6 = false;
  }
  local_30 = (undefined4)(uVar1 >> 0x20);
  if (bVar6) {
    uVar3 = (**(code **)(param_1[(uVar1 & 0xff) - 0x1d] + 0x28))
                      (param_1[(uVar1 & 0xff) - 0x1d],param_1,local_30,(int)uVar2,param_3 & 0xff,
                       param_4);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0xa8))(param_1);
    iVar4 = (**(code **)PTR_DAT_02004920)
                      (uVar5,local_30,(int)uVar2,((uint)param_3 & 0xff) + 0xed9,param_4);
    uVar3 = iVar4 == 0;
  }
  return uVar3;
}

