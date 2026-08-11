/* Ghidra address: 00432460 */
/* Ghidra symbol: FUN_00432460 */


longlong * FUN_00432460(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414ad0(param_1,param_2);
  if (*param_1 != 0) {
    FUN_00414e00(param_1);
    cVar1 = FUN_0045cdf0(5,1);
    if (cVar1 == '\0') {
      uVar7 = 0x800;
    }
    else {
      uVar7 = 0x7f;
    }
    uVar5 = FUN_00416740(local_res10[0]);
    uVar2 = FUN_0043e120(local_res10);
    uVar6 = FUN_00416740(*param_1);
    uVar3 = FUN_0043e120(param_1);
    iVar4 = thunk_FUN_04015c37(uVar7,0x200,uVar5,uVar2,uVar6,uVar3);
    if (iVar4 == 0) {
      FUN_00451a00();
    }
  }
  return param_1;
}

