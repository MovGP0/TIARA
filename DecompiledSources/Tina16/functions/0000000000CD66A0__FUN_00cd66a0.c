/* Ghidra address: 00cd66a0 */
/* Ghidra symbol: FUN_00cd66a0 */


ulonglong FUN_00cd66a0(longlong param_1,undefined1 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  bool bVar4;
  
  bVar4 = param_4 == '\0';
  if (!bVar4) {
    uVar3 = (**(code **)(param_1 + 0x28))(param_1);
    uVar1 = FUN_00414ce0(uVar3);
    for (; 0 < param_3; param_3 = param_3 + -1) {
      iVar2 = FUN_00cd63a0(*param_2,uVar3,uVar1);
      if (iVar2 < 0) goto LAB_00cd66fa;
      param_2 = param_2 + 1;
    }
  }
  bVar4 = true;
LAB_00cd66fa:
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar4) & 0xffffffff;
}

