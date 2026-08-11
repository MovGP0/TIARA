/* Ghidra address: 012b86e0 */
/* Ghidra symbol: FUN_012b86e0 */


void FUN_012b86e0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*PTR_DAT_020023b0 == '\0') {
    if (DAT_02107770 == 0) {
      DAT_02107770 = FUN_007fc180(&PTR_FUN_012b50d8,1,*(undefined8 *)PTR_DAT_02004030);
    }
    if ((char)param_2 == '\0') {
      FUN_0064cf60(DAT_02107770,0x44c);
    }
    else {
      FUN_0064cf60(DAT_02107770,0x447);
    }
    puVar1 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_00414ad0(DAT_02107770 + 0x730,*puVar1);
    FUN_012b6b60(param_2,param_1,*(undefined8 *)(DAT_02107770 + 0x740),
                 *(undefined8 *)(DAT_02107770 + 0x748),*PTR_DAT_02005310,0);
    *(undefined8 *)(DAT_02107770 + 0x750) = *(undefined8 *)(param_1 + 0xa8);
    FUN_012b6470(DAT_02107770);
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
    uVar2 = FUN_0136c070(&PTR_FUN_013637a0,1,*(undefined8 *)PTR_DAT_02004e40);
    FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar2);
    FUN_008059a0(DAT_02107770);
  }
  return;
}

