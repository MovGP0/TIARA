/* Ghidra address: 01b9aef0 */
/* Ghidra symbol: FUN_01b9aef0 */


void FUN_01b9aef0(longlong param_1,undefined8 param_2,char *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  lVar1 = *(longlong *)(param_1 + 0x7e0);
  if (*param_4 == lVar1) {
    uVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    uVar4 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    local_30[0] = FUN_00498310(uVar2,uVar4 >> 0x20);
    uVar4 = FUN_0064d3a0(lVar1,local_30);
    local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
    uVar2 = local_20._4_4_;
    local_20 = uVar4;
    uVar3 = FUN_006d5fd0(*(undefined8 *)(param_1 + 0x7e0),uVar4 & 0xffffffff,uVar2);
    *param_3 = uVar3 < 0x80000000;
    if (*param_3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x18))
                (*(longlong **)(param_1 + 0x880),&local_38,uVar3);
      FUN_00414ad0(param_2,local_38);
      *(undefined4 *)(param_4 + 7) = 100;
    }
  }
  FUN_00414480(&local_38);
  return;
}

