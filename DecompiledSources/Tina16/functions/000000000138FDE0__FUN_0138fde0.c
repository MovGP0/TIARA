/* Ghidra address: 0138fde0 */
/* Ghidra symbol: FUN_0138fde0 */


void FUN_0138fde0(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*PTR_DAT_02003720 == '\0') {
    uVar1 = FUN_019a45d0();
    FUN_0138fd60(uVar1,*param_1);
    uVar1 = FUN_019a45d0();
    FUN_019af4e0(uVar1);
    if ((param_2 == '\0') &&
       ((*PTR_DAT_020023b0 == '\0' || ((*PTR_DAT_02003b28 != '\0' && (*PTR_DAT_02001098 == '\0')))))
       ) {
      uVar1 = FUN_00f4cc90(&PTR_FUN_00f4c278,1,*(undefined8 *)PTR_DAT_02004030,*param_1);
      *(undefined8 *)PTR_DAT_02002fa8 = uVar1;
      *(undefined1 *)(*(longlong *)PTR_DAT_02002fa8 + 0x6d8) = 1;
      FUN_008059a0(*(undefined8 *)PTR_DAT_02002fa8);
      FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
      uVar1 = FUN_0136aba0(&PTR_FUN_01362bd8,1,*(undefined8 *)PTR_DAT_02004e40);
      FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar1);
    }
    else {
      if (param_2 != '\0') {
        FUN_012b86e0(*param_1,0);
      }
      FUN_01b07d50(*param_1);
      FUN_00f513f0(*param_1,1);
      *param_1 = 0;
    }
  }
  if (*PTR_DAT_02002b78 != '\0') {
    uVar1 = FUN_019a45d0();
    FUN_0138fd60(uVar1,*param_1);
    uVar1 = FUN_019a45d0();
    FUN_019af4e0(uVar1);
    FUN_017d3250(*param_1);
    FUN_017d3e50(*param_1);
    FUN_017d4030(*param_1);
  }
  return;
}

