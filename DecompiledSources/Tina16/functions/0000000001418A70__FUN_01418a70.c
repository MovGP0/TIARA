/* Ghidra address: 01418a70 */
/* Ghidra symbol: FUN_01418a70 */


void FUN_01418a70(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  
  uVar1 = FUN_007fc180(&PTR_FUN_014120d8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001b60 = uVar1;
  if (param_2 == '\0') {
    FUN_01412dd0(*(undefined8 *)PTR_DAT_02001b60,*(undefined8 *)(param_1 + 0x740));
  }
  else {
    unaff_RDI = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01412ed0(*(undefined8 *)PTR_DAT_02001b60,unaff_RDI);
  }
  *(undefined4 *)(*(longlong *)PTR_DAT_02001b60 + 0x754) = *(undefined4 *)(param_1 + 0xfc0);
  FUN_00414ad0(*(longlong *)PTR_DAT_02001b60 + 0x758,*(undefined8 *)(param_1 + 4000));
  (**(code **)(**(longlong **)PTR_DAT_02001b60 + 0x2d0))(*(longlong **)PTR_DAT_02001b60);
  if (*(char *)(*(longlong *)PTR_DAT_02001b60 + 0x760) == '\0') {
    FUN_01418bb0(param_1,*(undefined8 *)(param_1 + 0xf80));
  }
  else {
    if (param_2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x10))
                (*(longlong **)(param_1 + 0x740),unaff_RDI);
    }
    FUN_01419960(param_1);
  }
  if (param_2 != '\0') {
    FUN_00410f20(unaff_RDI);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001b60);
  return;
}

