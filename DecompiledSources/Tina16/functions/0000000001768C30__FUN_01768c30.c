/* Ghidra address: 01768c30 */
/* Ghidra symbol: FUN_01768c30 */


void FUN_01768c30(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined4 local_1c [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x40,local_res10[0]);
  sVar1 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_res10[0]);
  if (-1 < sVar1) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
    uVar3 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,(int)sVar1);
    uVar3 = FUN_00c3f320(uVar3);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    uVar2 = FUN_00c41060(uVar3,local_1c);
    FUN_01d01990(*(undefined8 *)(param_1 + 0x10),uVar2);
    FUN_01d01aa0(*(undefined8 *)(param_1 + 0x10),local_1c[0]);
  }
  FUN_00414480(local_res10);
  return;
}

