/* Ghidra address: 01637710 */
/* Ghidra symbol: FUN_01637710 */


undefined8 FUN_01637710(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_50 [4];
  undefined8 local_48;
  undefined8 local_40 [5];
  
  local_40[0] = 0;
  local_48 = 0;
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 8);
  dVar2 = *(double *)(*(longlong *)(param_1 + 0x48) + (longlong)(param_2 + 1) * 8);
  if ((dVar1 == 0.0) && (dVar2 == 0.0)) {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_48,PTR_PTR_020032b0);
    FUN_00b8e650(uVar3,local_40,L"HDLStrings.Msg_DivByZero",local_48);
    FUN_01613110(local_40[0]);
  }
  if (dVar1 == 0.0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01698550(dVar1);
  }
  if (dVar2 == 0.0) {
    uVar4 = 0;
  }
  else {
    local_50[0] = 0x4901;
    uVar4 = FUN_016261e0(local_50);
    uVar5 = FUN_01698550(dVar2);
    uVar4 = FUN_01698500(uVar4,uVar5,0x110);
  }
  if ((dVar1 == 0.0) || (dVar2 == 0.0)) {
    if ((dVar1 == 0.0) && (dVar2 != 0.0)) {
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = FUN_01698500(uVar3,uVar4,0x10e);
  }
  local_50[0] = 0x5301;
  uVar4 = FUN_016261e0(local_50);
  uVar3 = FUN_01698500(uVar4,uVar3,0x111);
  uVar4 = FUN_01698550(0x3ff0000000000000);
  uVar3 = FUN_01698500(uVar4,uVar3,0x10f);
  FUN_00414560(&local_48,2);
  return uVar3;
}

