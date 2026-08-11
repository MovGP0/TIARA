/* Ghidra address: 012b5de0 */
/* Ghidra symbol: FUN_012b5de0 */


void FUN_012b5de0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_490;
  undefined1 local_488 [256];
  undefined8 local_388;
  undefined1 local_380 [96];
  undefined1 local_320 [760];
  
  local_490 = 0;
  local_388 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0040cf10(local_320,local_res10[0],0);
  FUN_00409900();
  FUN_0040ca00(local_320);
  FUN_00409900();
  uVar2 = FUN_0040f200(local_320,L"     Nodes                Values");
  FUN_0040f590(uVar2);
  FUN_00409900();
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  iVar4 = *(int *)(lVar1 + 0x4e0);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_0084e320(lVar1,&local_388,0,iVar3);
      FUN_00416910(local_488,local_388,0xff);
      FUN_00b91b30(local_380,local_488,0x50);
      uVar2 = FUN_0040ef50(local_320,local_380);
      FUN_0084e320(lVar1,&local_490,1,iVar3);
      FUN_00416910(local_488,local_490,0xff);
      FUN_00b91ba0(local_380,local_488);
      uVar2 = FUN_0040ef50(uVar2,local_380);
      FUN_0040f590(uVar2);
      FUN_00409900();
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0040d150(local_320);
  FUN_00409900();
  FUN_00414480(&local_490);
  FUN_00414480(&local_388);
  FUN_00414480(local_res10);
  return;
}

