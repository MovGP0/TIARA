/* Ghidra address: 00704a00 */
/* Ghidra symbol: FUN_00704a00 */


void FUN_00704a00(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004167d0(param_1 + 0xb6,*(undefined8 *)(param_2 + 0x10));
  if (((char)param_1[0xb0] == '\x01') && (param_1[0x9f] != 0)) {
    FUN_007058b0(param_1,local_20);
    iVar1 = FUN_00416db0(local_20[0],param_1[0xb6]);
    if (iVar1 != 0) {
      uVar2 = FUN_00416740(param_1[0xb6]);
      thunk_FUN_041b2403(param_1[0x9f],0xc,0,uVar2);
      thunk_FUN_041b2403(param_1[0x9f],0xb012,0,0);
    }
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  FUN_00414480(local_20);
  return;
}

