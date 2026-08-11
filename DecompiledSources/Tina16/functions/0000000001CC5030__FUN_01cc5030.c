/* Ghidra address: 01cc5030 */
/* Ghidra symbol: FUN_01cc5030 */


void FUN_01cc5030(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  double local_20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar1 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  FUN_01cc4120(param_1,&local_res18,8);
  FUN_01cc4120(param_1,&local_res20,8);
  FUN_01cc1510(lVar1,0,local_res18);
  FUN_01cc1510(lVar1,1,local_res20);
  if (*(int *)(lVar1 + 0x2c) == 1) {
    *(undefined8 *)(lVar1 + 0x178) = local_res18;
    local_20 = 0.0;
    FUN_01cc4120(param_1,&local_20,8);
    FUN_01cc1510(lVar1,2,0);
  }
  else {
    FUN_00c43c00(*(undefined8 *)(lVar1 + 0x178),local_res18,*(undefined8 *)(lVar1 + 0x170),
                 lVar1 + 400);
    local_20 = (double)FUN_0040c760();
    *(undefined8 *)(lVar1 + 0x178) = local_res18;
    FUN_01cc4120(param_1,&local_20,8);
    FUN_01cc1510(lVar1,2,local_20);
    if (local_20 <= 0.0) {
      uVar2 = FUN_00c44470(0xc059000000000000,0xc059000000000000);
    }
    else {
      uVar2 = FUN_00c44470(*(double *)(param_1 + 0x30) / local_20,0x4059000000000000);
    }
    FUN_01cc1510(lVar1,3,uVar2);
  }
  return;
}

