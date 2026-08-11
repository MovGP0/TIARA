/* Ghidra address: 01823700 */
/* Ghidra symbol: FUN_01823700 */


undefined8 FUN_01823700(undefined8 param_1,short *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *local_res10 [3];
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0046f180(param_1);
  if (local_res10[0] != (short *)0x0) {
    if (*local_res10[0] == 0x27) {
      iVar1 = FUN_00414cb0(local_res10[0]);
      FUN_00416dc0(local_30,local_res10[0],2,iVar1 + -2);
      FUN_00468a10(param_1,local_30[0]);
    }
    else {
      uVar2 = FUN_00418870(local_res10[0],local_1c);
      if (local_1c[0] == 0) {
        if ((longlong)uVar2 < 0x80000000) {
          FUN_00468530(param_1,uVar2 & 0xffffffff,0xfffffffffffffffc);
        }
        else {
          FUN_00468700(param_1,uVar2);
        }
      }
      else {
        if (*(short *)(PTR_DAT_02004830 + 0x17a) != 0x2e) {
          iVar1 = FUN_004170c0(&LAB_01823874,local_res10[0],1);
          if (0 < iVar1) {
            lVar3 = FUN_00414de0(local_res10);
            *(undefined2 *)(lVar3 + -2 + (longlong)iVar1 * 2) =
                 *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
          }
        }
        uVar4 = FUN_00448630(local_res10[0]);
        FUN_00468860(param_1,uVar4);
      }
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return param_1;
}

