/* Ghidra address: 00cd7080 */
/* Ghidra symbol: FUN_00cd7080 */


ulonglong FUN_00cd7080(longlong param_1,undefined1 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,param_4 == '\0');
  if (param_4 != '\0') {
    uVar4 = (**(code **)(param_1 + 0x28))(param_1);
    uVar1 = FUN_00414ce0(uVar4);
    iVar3 = 0;
    while (0 < param_3) {
      iVar2 = FUN_00cd63a0(*param_2,uVar4,uVar1);
      if (iVar2 < 0) goto LAB_00cd711a;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      if (iVar3 == 0) {
        if (0x2d < iVar2) goto LAB_00cd711a;
        iVar3 = (iVar2 * 4 + 2) / 3;
      }
      else if (iVar2 < 0x40) {
        iVar3 = iVar3 + -1;
      }
    }
    if (iVar3 != 0) goto LAB_00cd711a;
  }
  uVar5 = CONCAT71(uVar6,1);
LAB_00cd711a:
  return uVar5 & 0xffffffff;
}

