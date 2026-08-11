/* Ghidra address: 01a02190 */
/* Ghidra symbol: FUN_01a02190 */


undefined8 FUN_01a02190(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  FUN_00414480(param_2);
  uVar1 = FUN_0172dba0(&PTR_FUN_01729b58,1,*(undefined8 *)(param_1 + 0x58),0,
                       *(undefined8 *)PTR_DAT_02001f18,1);
  iVar2 = 1;
  if (0 < param_3) {
    do {
      dVar3 = (double)FUN_019ed630(param_1,1,iVar2);
      dVar4 = (double)FUN_0172df70(uVar1,iVar2 + -1);
      if (dVar3 != dVar4) {
        FUN_00414ad0(param_2,L" - Default values modified !!!!");
        return param_2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_3);
  }
  FUN_00410f20(uVar1);
  return param_2;
}

