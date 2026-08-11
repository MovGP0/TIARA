/* Ghidra address: 01b26450 */
/* Ghidra symbol: FUN_01b26450 */


void FUN_01b26450(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_01b263a0(param_1,param_2);
  iVar2 = FUN_01b262e0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_00414b50(local_20,*(undefined8 *)(param_1[1] + 0x10 + (longlong)iVar2 * 0x18));
  FUN_00414ad0(param_1[1] + 0x10 + (longlong)iVar2 * 0x18,param_3);
  (**(code **)(*param_1 + 0x18))(param_1,local_20[0],5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00414480(local_20);
  return;
}

