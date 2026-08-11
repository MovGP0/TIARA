/* Ghidra address: 011421b0 */
/* Ghidra symbol: FUN_011421b0 */


void FUN_011421b0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [200];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_120[0] = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_108 = 0;
  local_110 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 0x750);
  FUN_011418c0(param_3,&local_38,param_4,*PTR_DAT_02005310,&local_108,&local_110);
  FUN_0084e3e0(uVar1,1,param_4,local_108);
  FUN_0084e3e0(uVar1,2,param_4,local_110);
  FUN_0084e320(uVar1,&local_128,0,param_4);
  FUN_0084e320(uVar1,&local_130,1,param_4);
  FUN_0084e320(uVar1,&local_138,2,param_4);
  FUN_00416cd0(local_120,5,local_128,local_130,L"     ",local_138,&LAB_01142394);
  FUN_00442620(local_100,local_120[0]);
  FUN_00442690(param_1 + 0x1007b4,local_100);
  FUN_00414560(&local_138,4);
  FUN_00414560(&local_110,2);
  return;
}

