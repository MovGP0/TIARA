/* Ghidra address: 01cc5550 */
/* Ghidra symbol: FUN_01cc5550 */


void FUN_01cc5550(longlong param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  double local_res10;
  double local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  uVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x450));
  FUN_01cc4120(param_1,&local_res10,8);
  FUN_01cc4120(param_1,local_res18,8);
  FUN_01cc1510(uVar1,0,local_res10);
  FUN_01cc1510(uVar1,1,local_res18[0]);
  FUN_00c43b50(&local_res10,local_res18);
  FUN_01cc1510(uVar1,2,local_res10 * 2.0);
  FUN_01cc1510(uVar1,3,local_res18[0] * -2.0);
  return;
}

