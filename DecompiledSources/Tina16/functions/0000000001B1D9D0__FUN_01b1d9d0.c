/* Ghidra address: 01b1d9d0 */
/* Ghidra symbol: FUN_01b1d9d0 */


bool FUN_01b1d9d0(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_res8 [4];
  bool local_a99;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  longlong local_a80;
  undefined8 local_a78;
  longlong local_a70;
  int local_a64;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined1 local_a50 [2048];
  undefined4 local_250 [2];
  int local_248;
  undefined1 local_224 [524];
  
  local_a98 = 0;
  local_a90 = 0;
  local_a80 = 0;
  local_a88 = 0;
  local_a70 = 0;
  local_a78 = 0;
  local_a58 = 0;
  local_a60 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_a99 = false;
  if (param_2 != (ulonglong *)0x0) {
    thunk_FUN_039b6ab1(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),&local_a64);
    *param_2 = 0;
  }
  uVar5 = FUN_00c36aa0(2,0);
  local_250[0] = 0x238;
  iVar2 = FUN_00c36ad0(uVar5,local_250);
  while ((iVar2 != 0 && (local_a99 == false))) {
    if (param_2 == (ulonglong *)0x0) {
      FUN_00416830(&local_a78,local_224,0x104);
      FUN_00441920(&local_a70,local_a78);
      if (local_a70 == local_res8[0]) {
        bVar7 = true;
      }
      else if ((local_a70 == 0) || (local_res8[0] == 0)) {
        bVar7 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_a70,local_res8[0]);
        bVar7 = iVar2 == 0;
      }
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      bVar7 = true;
    }
    else {
      if (param_2 == (ulonglong *)0x0) {
        bVar7 = false;
      }
      else {
        FUN_00416830(&local_a88,local_224,0x104);
        FUN_00441920(&local_a80,local_a88);
        if (local_a80 == local_res8[0]) {
          bVar7 = true;
        }
        else if ((local_a80 == 0) || (local_res8[0] == 0)) {
          bVar7 = false;
        }
        else {
          iVar2 = FUN_0043e420(local_a80,local_res8[0]);
          bVar7 = iVar2 == 0;
        }
      }
      if ((bVar7) && (local_248 != local_a64)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
    }
    if (bVar7) {
      if (param_2 != (ulonglong *)0x0) {
        uVar3 = FUN_01b1d9a0(local_248);
        *param_2 = (ulonglong)uVar3;
      }
      lVar6 = thunk_FUN_039fb2f7(0x1000,0,local_248);
      if (lVar6 != 0) {
        FUN_00414480(&local_a58);
        iVar2 = thunk_FUN_03976b01(lVar6,local_a50,0x800);
        if (iVar2 != 0) {
          FUN_00416830(&local_a90,local_a50,0x400);
          FUN_00441640(&local_a58,local_a90);
        }
        thunk_FUN_041d2921(lVar6);
      }
      FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_a98);
      FUN_00441640(&local_a60,local_a98);
      iVar2 = FUN_004170c0(&LAB_01b1dd48,local_a60,1);
      if (0 < iVar2) {
        uVar4 = FUN_004170c0(&LAB_01b1dd48,local_a60,1);
        FUN_00416e20(&local_a60,1,uVar4);
      }
      cVar1 = FUN_004563b0(local_a60,local_a58);
      local_a99 = cVar1 != '\0';
    }
    iVar2 = FUN_00c36b00(uVar5);
  }
  thunk_FUN_041d2921(uVar5);
  FUN_00414560(&local_a98,6);
  FUN_00414560(&local_a60,2);
  FUN_00414480(local_res8);
  return local_a99;
}

