/* Ghidra address: 017cc0e0 */
/* Ghidra symbol: FUN_017cc0e0 */


void FUN_017cc0e0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 local_res20;
  
  bVar2 = (byte)param_2;
  uVar3 = param_2;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  if (bVar2 == 0xf) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),3);
    FUN_017cc020(param_1 + 0xb0,uVar3,param_3,local_res20,param_5,param_6);
  }
  else {
    uVar3 = param_2 & 0xff;
    FUN_017cc020(param_1 + 0xb0,uVar3,param_3,local_res20,param_5,param_6);
  }
  if (bVar2 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)(uVar3 >> 0x10),1) << (bVar2 & 0x1f) & 0x41fU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(longlong *)PTR_DAT_020037b0 != 0) {
      FUN_01cc6030(*(undefined8 *)PTR_DAT_020037b0);
    }
    if (*(longlong *)PTR_DAT_02005118 != 0) {
      FUN_01cc6030(*(undefined8 *)PTR_DAT_02005118);
    }
    if (*(longlong *)PTR_DAT_02001630 != 0) {
      FUN_01cc6030(*(undefined8 *)PTR_DAT_02001630);
    }
    *(undefined8 *)PTR_DAT_020037b0 = 0;
    *(undefined8 *)PTR_DAT_02005118 = 0;
    *(undefined8 *)PTR_DAT_02001630 = 0;
    FUN_017cc020(param_1 + 0xb8,param_2 & 0xff,param_3,local_res20,param_5,param_6);
    FUN_01cc6020(*(undefined8 *)(param_1 + 0xb8));
    FUN_017cc020(param_1 + 0xc0,10,param_3,local_res20,param_5,0);
    FUN_01cc6020(*(undefined8 *)(param_1 + 0xc0));
    FUN_017cc020(param_1 + 200,10,param_3,local_res20,param_5,0);
    FUN_01cc6020(*(undefined8 *)(param_1 + 200));
  }
  if (bVar2 == 0xf) {
    FUN_017cc020(param_1 + 0xd0,param_2 & 0xff,param_3,local_res20,param_5,param_6);
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xe00) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0xe08) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar1 + 0xe10) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(lVar1 + 0xe18) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(lVar1 + 0xe20) = *(undefined8 *)(param_1 + 0xd0);
  FUN_00414560(&local_res20,2);
  return;
}

