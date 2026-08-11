/* Ghidra address: 017b0220 */
/* Ghidra symbol: FUN_017b0220 */


undefined4 FUN_017b0220(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  
  iVar1 = FUN_00611650(param_1[6]);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    local_30[0] = FUN_00498310(0,0);
    uVar3 = (**(code **)(*param_1 + 0xb8))(param_1,local_30);
    uVar4 = (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6]);
    uVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    uVar2 = FUN_0043e2c0(uVar3,uVar4,uVar2);
    FUN_004095f0(uVar3);
  }
  return uVar2;
}

