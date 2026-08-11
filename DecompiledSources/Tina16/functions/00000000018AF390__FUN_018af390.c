/* Ghidra address: 018af390 */
/* Ghidra symbol: FUN_018af390 */


void FUN_018af390(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x848) + 600))(*(longlong **)(param_1 + 0x848));
  *(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x52c) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x528);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (iVar1 == 6) {
    FUN_018a8d80(*(undefined8 *)(param_1 + 0x848),2);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    if (iVar1 == 7) {
      FUN_018a8d80(*(undefined8 *)(param_1 + 0x848),1);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),local_20);
      iVar1 = FUN_004170c0(&DAT_018af594,local_20[0],1);
      if (iVar1 != 0) {
        lVar3 = FUN_00414de0(local_20);
        iVar1 = FUN_004170c0(&DAT_018af594,local_20[0],1);
        *(undefined2 *)(lVar3 + -2 + (longlong)iVar1 * 2) = 0x20;
      }
      while( true ) {
        iVar1 = FUN_004170c0(&LAB_018af5a4,local_20[0],1);
        if (iVar1 == 0) break;
        uVar2 = FUN_004170c0(&LAB_018af5a4,local_20[0],1);
        FUN_00416e20(local_20,uVar2,1);
      }
      if (local_20[0] != 0) {
        dVar5 = (double)FUN_0180d800(local_20[0]);
        FUN_018a8d30(*(undefined8 *)(param_1 + 0x848),dVar5 / 100.0);
      }
    }
  }
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_0413e052(uVar4,0x401,0,0);
  FUN_018a9020(*(longlong *)(param_1 + 0x848),
               *(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x52c));
  *(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x52c) = 0xffffffff;
  FUN_00414480(local_20);
  return;
}

