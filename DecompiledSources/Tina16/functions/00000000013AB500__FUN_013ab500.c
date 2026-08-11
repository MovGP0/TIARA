/* Ghidra address: 013ab500 */
/* Ghidra symbol: FUN_013ab500 */


void FUN_013ab500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  ulonglong uVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  uVar4 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x6b8),local_30);
  local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = uVar4;
  sVar3 = FUN_006e2230(*(undefined8 *)(param_1 + 0x6b8),uVar4 & 0xffffffff,uVar1);
  if ((*(char *)(param_1 + 0x6d0) == '\0') && (sVar3 != 0x10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  return;
}

