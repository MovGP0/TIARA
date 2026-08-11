/* Ghidra address: 00d30730 */
/* Ghidra symbol: FUN_00d30730 */


undefined8 FUN_00d30730(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_2 == 1) {
    if (DAT_0201a160 != 0) {
      uVar3 = FUN_00414df0(&DAT_0201a160);
      thunk_FUN_041b2403(param_1,0x467,1,uVar3);
    }
    thunk_FUN_03e49910(param_1,&local_38);
    iVar1 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
    iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
    thunk_FUN_041cc6e2(param_1,0,(longlong)(iVar1 - (local_30 - local_38)) / 2 & 0xffffffff,
                       (longlong)(iVar2 - (local_2c - local_34)) / 2 & 0xffffffff,
                       local_30 - local_38,local_2c - local_34,0);
  }
  return 0;
}

