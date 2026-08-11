/* Ghidra address: 00836e40 */
/* Ghidra symbol: FUN_00836e40 */


ulonglong FUN_00836e40(longlong param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  bool bVar7;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    uVar6 = 0;
    iVar3 = FUN_00832450(*(undefined8 *)(param_1 + 0x4d8),param_3);
    if (-1 < iVar3) {
      bVar2 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),iVar3);
      uVar1 = *param_2;
      uVar5 = FUN_00837040(param_1,param_2,iVar3);
      uVar6 = uVar5 & 0xffffffff;
      if ((char)uVar6 == '\0') {
        if (bVar2 < 8) {
          bVar7 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar2 & 0x1f) & 0x30U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          iVar3 = FUN_00837d20(param_1,iVar3,uVar1);
          if (0 < iVar3) {
            uVar4 = FUN_008323e0(*(undefined8 *)(param_1 + 0x4d8),iVar3);
            FUN_008358c0(param_1,uVar4);
            goto LAB_00836f21;
          }
        }
      }
    }
  }
  if ((char)uVar6 == '\0') {
    thunk_FUN_03f3ed6d(0);
  }
LAB_00836f21:
  return uVar6 & 0xffffffff;
}

