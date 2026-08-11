/* Ghidra address: 0044e5d0 */
/* Ghidra symbol: FUN_0044e5d0 */


undefined8 FUN_0044e5d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270 [2];
  undefined1 local_25a [522];
  undefined1 local_50 [8];
  undefined8 local_48;
  int local_30;
  undefined8 local_20 [2];
  
  local_2c8 = 0;
  local_270[0] = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_20[0] = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x20);
  if (iVar2 == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02005be8);
  }
  else if (iVar2 == 1) {
    FUN_0041ddd0(local_20,PTR_PTR_020040b0);
  }
  else if (iVar2 == 8) {
    FUN_0041ddd0(local_20,PTR_PTR_02001be0);
  }
  else {
    FUN_0041ddd0(local_20,PTR_PTR_020034a8);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x28);
  thunk_FUN_0413c1ac(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10),local_50,0x30);
  if ((local_30 == 0x1000) || (local_30 == 0x10000)) {
    iVar2 = thunk_FUN_041b94f3(local_48,local_25a,0x105);
    if (iVar2 != 0) {
      FUN_0041ddd0(local_270,PTR_PTR_02004990);
      local_2b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10);
      local_2a8 = 5;
      FUN_00416830(&local_2c0,local_25a,0x105);
      FUN_00441920(&local_2b8,local_2c0);
      local_2a0 = local_2b8;
      local_298 = 0x11;
      local_290 = local_20[0];
      local_288 = 0x11;
      local_278 = 5;
      local_280 = uVar1;
      local_300 = FUN_0044d530(&PTR_FUN_004361b8,1,local_270[0],&local_2b0,3);
      goto code_r0x0044e7fc;
    }
  }
  FUN_0041ddd0(&local_2c8,PTR_PTR_020041c0);
  local_2f8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10);
  local_2f0 = 5;
  local_2e8 = local_20[0];
  local_2e0 = 0x11;
  local_2d0 = 5;
  local_2d8 = uVar1;
  local_300 = FUN_0044d530(&PTR_FUN_004361b8,1,local_2c8,&local_2f8,2);
code_r0x0044e7fc:
  FUN_00414560(&local_2c8,3);
  FUN_00414480(local_270);
  FUN_00414480(local_20);
  return local_300;
}

