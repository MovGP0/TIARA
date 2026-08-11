/* Ghidra address: 00410be0 */
/* Ghidra symbol: FUN_00410be0 */


bool FUN_00410be0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00410ae0(param_1,local_30);
  uVar4 = FUN_00416740(local_30[0]);
  uVar1 = FUN_00414cb0(local_30[0]);
  uVar5 = FUN_00416740(param_2);
  uVar2 = FUN_00414cb0(param_2);
  iVar3 = FUN_00407000(DAT_02006a30,1,uVar4,uVar1,uVar5,uVar2);
  FUN_00414480(local_30);
  return iVar3 == 2;
}

