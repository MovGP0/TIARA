/* Ghidra address: 012be420 */
/* Ghidra symbol: FUN_012be420 */


void FUN_012be420(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  short local_38;
  undefined2 local_36;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_res10[0] = param_2;
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(local_res10[0],param_1 + 8,2);
    FUN_01d31720(local_res10[0],param_1 + 0xc);
    if ((ushort)param_3 < 0x17) {
      FUN_01d32040(local_res10[0],*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_01d32430(local_res10[0],*(undefined8 *)(param_1 + 0x10));
    }
    FUN_01d31720(local_res10[0],&local_2c);
    iVar1 = local_2c;
    if (-1 < local_2c + -1) {
      do {
        uVar2 = FUN_012bdec0(&DAT_012bcee8,1);
        FUN_012bdfd0(uVar2,local_res10[0],param_3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01d31720(local_res10[0],&local_2c);
    iVar1 = local_2c;
    if (-1 < local_2c + -1) {
      do {
        lVar3 = FUN_00410e60(&DAT_012bd240,1);
        FUN_01d31720(local_res10[0],&local_30);
        *(longlong *)(lVar3 + 0x10) = (longlong)local_30;
        FUN_01d30f00(local_res10[0],&local_38,8);
        if (local_38 == 0x100) {
          uVar2 = FUN_01cf0560(0,&PTR_FUN_017c0190,local_res10,0x100,local_36,local_34);
          *(undefined8 *)(lVar3 + 0x18) = uVar2;
        }
        else {
          uVar2 = FUN_01cf5a00(0,&PTR_FUN_01cf10a8,local_res10,local_38,local_36,local_34);
          *(undefined8 *)(lVar3 + 0x18) = uVar2;
        }
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),lVar3);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

