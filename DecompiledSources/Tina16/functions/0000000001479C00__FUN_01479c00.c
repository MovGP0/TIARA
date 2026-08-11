/* Ghidra address: 01479c00 */
/* Ghidra symbol: FUN_01479c00 */


void FUN_01479c00(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_28 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  *param_4 = 0;
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    FUN_01479b80(param_1);
  }
  else {
    FUN_013c1bf0(&local_28,&local_30,&local_1c);
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    FUN_013bb8d0(lVar1,param_2);
    (**(code **)(**(longlong **)(lVar1 + 200) + 0x90))(*(longlong **)(lVar1 + 200));
    FUN_013bb8f0(lVar1);
    iVar2 = FUN_01054cd0(*(undefined8 *)(lVar1 + 200),local_res18[0],*(undefined8 *)(lVar1 + 0x108),
                         1,local_1c * 1000,local_28,local_30);
    if (iVar2 == 0x102) {
      (**(code **)(**(longlong **)(lVar1 + 200) + 0x78))
                (*(longlong **)(lVar1 + 200),L"Timeout received");
      *param_4 = 1;
    }
    else {
      FUN_013ba1e0(lVar1);
      FUN_013bbba0(lVar1,0,5);
    }
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res18);
  return;
}

