/* Ghidra address: 01b49cd0 */
/* Ghidra symbol: FUN_01b49cd0 */


ulonglong FUN_01b49cd0(longlong *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffff;
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    uVar3 = 0xffffffff;
    if (param_2 < iVar1) {
      puVar2 = (ushort *)
               FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,(short)param_1[4] + (short)param_2);
      uVar3 = (ulonglong)*puVar2;
    }
  }
  return uVar3;
}

