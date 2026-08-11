/* Ghidra address: 00779c00 */
/* Ghidra symbol: FUN_00779c00 */


undefined1
FUN_00779c00(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
            undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  char local_34;
  undefined4 local_30;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_34 = (char)uVar1;
  if ((byte)(local_34 - 0x20U) < 0x10) {
    bVar8 = ((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) << (local_34 - 0x20U & 0x1f) &
            0x3ffU) != 0;
  }
  else {
    bVar8 = false;
  }
  local_30 = (undefined4)(uVar1 >> 0x20);
  if (bVar8) {
    uVar3 = (**(code **)param_1[(uVar1 & 0xff) - 0x1d])
                      ((undefined8 *)param_1[(uVar1 & 0xff) - 0x1d],param_1,param_2,local_30,
                       (int)uVar2,param_4,param_5,param_6,param_7,0);
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0xb0))(param_1,uVar1 & 0xff,param_8);
    uVar4 = FUN_007854f0(param_5);
    uVar4 = FUN_00785510(uVar4);
    uVar5 = FUN_00785600(param_6);
    uVar5 = FUN_00785620(uVar5);
    iVar6 = (**(code **)PTR_DAT_020037f8)
                      (uVar7,param_2,local_30,(int)uVar2,param_4,CONCAT44(uVar9,uVar4),uVar5,param_7
                      );
    uVar3 = iVar6 == 0;
  }
  return uVar3;
}

