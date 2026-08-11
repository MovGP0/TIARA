/* Ghidra address: 00ce0fa0 */
/* Ghidra symbol: FUN_00ce0fa0 */


void FUN_00ce0fa0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_d8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_38,L"Cache-control");
  FUN_00414ad0(param_1 + 0x10,local_38);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_40,L"Connection");
  FUN_00414ad0(param_1 + 0x28,local_40);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_48,L"Content-Version");
  FUN_00414ad0(param_1 + 0x78,local_48);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_50,L"Content-Disposition");
  FUN_00414ad0(param_1 + 0x30,local_50);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_58,L"Content-Encoding");
  FUN_00414ad0(param_1 + 0x38,local_58);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_60,L"Content-Language");
  FUN_00414ad0(param_1 + 0x40,local_60);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_68,L"Content-Type");
  FUN_00ce1e60(param_1,local_68);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_70,L"Content-Length");
  uVar2 = FUN_00877d30(local_70,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(bool *)(param_1 + 0xb0) = -1 < *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  FUN_00414480(param_1 + 0x68);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_18,L"Content-Range");
  if (local_18 != 0) {
    local_b8 = 1;
    FUN_00874ee0(&local_78,&local_18,&DAT_00ce1758,1);
    FUN_00414ad0(param_1 + 0x68,local_78);
    local_b8 = 1;
    FUN_00874ee0(&local_20,&local_18,&DAT_00ce1768,1);
    local_b8 = 1;
    FUN_00874ee0(&local_28,&local_18,&DAT_00ce1758,1);
    local_b8 = 1;
    FUN_00874ee0(&local_80,&local_20,&DAT_00ce1778,1);
    uVar2 = FUN_00877d30(local_80,0xffffffffffffffff);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    uVar2 = FUN_00877d30(local_20,0xffffffffffffffff);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    uVar2 = FUN_00877d30(local_28,0xffffffffffffffff);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_18,L"Date");
  if (local_18 == 0) {
    uVar2 = FUN_00448ed0();
    *(undefined8 *)(param_1 + 0x88) = uVar2;
  }
  else {
    uVar2 = FUN_008a1e60(local_18);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
  }
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_88,L"Last-Modified");
  uVar2 = FUN_008a1e60(local_88);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_18,L"Expires");
  cVar1 = FUN_008752c0(local_18);
  if (cVar1 == '\0') {
    uVar2 = FUN_008a1e60(local_18);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
  }
  else {
    local_10 = FUN_00877da0(local_18);
    if (local_10 < 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      dVar3 = (double)FUN_00448ed0();
      *(double *)(param_1 + 0x90) = dVar3 + (double)local_10 / 86400.0;
    }
  }
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_90,L"ETag");
  FUN_00414ad0(param_1 + 0x98,local_90);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_98,L"Pragma");
  FUN_00414ad0(param_1 + 0xa8,local_98);
  FUN_00cd9270(*(undefined8 *)(param_1 + 0x18),&local_a0,L"Transfer-Encoding");
  FUN_00414ad0(param_1 + 0xb8,local_a0);
  FUN_00414560(&local_a0,0xe);
  FUN_00414560(&local_28,3);
  return;
}

