/* Ghidra address: 01d84800 */
/* Ghidra symbol: FUN_01d84800 */


longlong * FUN_01d84800(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res10 [3];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268 [44];
  undefined1 local_23c [556];
  
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (DAT_02000ae8 == (code *)0x0) {
    FUN_00414480(param_1);
    do {
      uVar3 = FUN_00416740(local_res10[0]);
      lVar5 = thunk_FUN_041460a9(uVar3,local_268);
      if (lVar5 == -1) {
        FUN_00414480(param_1);
        break;
      }
      FUN_00416830(&local_270,local_23c,0x104);
      FUN_00416cd0(param_1,3,&DAT_01d849dc,local_270,*param_1);
      FUN_00441710(&local_278,local_res10[0]);
      FUN_00414b50(local_res10,local_278);
      thunk_FUN_03b19720(lVar5);
      iVar2 = 0;
      if (local_res10[0] != 0) {
        iVar2 = *(int *)(local_res10[0] + -4);
      }
    } while (2 < iVar2);
    if (*param_1 != 0) {
      FUN_00441820(&local_280,local_res10[0]);
      FUN_00416ba0(param_1,local_280,*param_1);
    }
  }
  else {
    FUN_004169f0(param_1,0x105);
    uVar3 = FUN_00416740(local_res10[0]);
    uVar4 = FUN_00414de0(param_1);
    uVar1 = (*DAT_02000ae8)(uVar3,uVar4,0x104);
    FUN_004169f0(param_1,uVar1);
  }
  FUN_00414560(&local_280,3);
  FUN_00414480(local_res10);
  return param_1;
}

