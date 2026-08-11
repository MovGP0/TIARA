/* Ghidra address: 01c90510 */
/* Ghidra symbol: FUN_01c90510 */


void FUN_01c90510(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_950 [2360];
  
  FUN_00417580(local_950,&DAT_01d0d0b8);
  FUN_00417c40(local_950,PTR_DAT_02004010,&DAT_01d0d0b8);
  plVar2 = (longlong *)
           FUN_014723c0(&PTR_FUN_014715f8,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0x440));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  FUN_00410f20(plVar2);
  if (iVar1 == 6) {
    FUN_01c92e80(param_1);
  }
  FUN_00417c40(PTR_DAT_02004010,local_950,&DAT_01d0d0b8);
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return;
}

