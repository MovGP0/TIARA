/* Ghidra address: 007d5cb0 */
/* Ghidra symbol: FUN_007d5cb0 */


undefined4 FUN_007d5cb0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  
  if (((param_3 != (longlong *)0x0) && (param_1[0x14] != 0)) && (-1 < param_2)) {
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    if (param_2 < iVar1) {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_007d5cf9;
    }
  }
  uVar3 = 0;
LAB_007d5cf9:
  if ((char)uVar3 != '\0') {
    (**(code **)(*param_3 + 0x70))(param_3,(int)param_1[0x12]);
    (**(code **)(*param_3 + 0x88))(param_3,*(undefined4 *)((longlong)param_1 + 0x94));
    uVar2 = FUN_00609e10(param_3);
    FUN_007d6c70(param_1,uVar2,0,0,param_2,1);
  }
  return uVar3;
}

