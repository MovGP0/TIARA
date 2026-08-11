/* Ghidra address: 01be60b0 */
/* Ghidra symbol: FUN_01be60b0 */


void FUN_01be60b0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (iVar1 != 0) {
    FUN_00655f80(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
    param_1[0xba] = (longlong)param_1;
    lVar2 = FUN_01c01290(param_1);
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x3d8))(param_1,0);
    }
    (**(code **)(*param_1 + 400))
              (param_1,param_2,param_3,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c))
    ;
    (**(code **)(*param_1 + 0x330))(param_1,1);
    uVar3 = FUN_01c03e40(param_1);
    (**(code **)(*param_1 + 0x318))(param_1,uVar3);
    FUN_0064dbe0(param_1,1);
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  return;
}

