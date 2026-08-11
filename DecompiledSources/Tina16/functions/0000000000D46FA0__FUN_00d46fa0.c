/* Ghidra address: 00d46fa0 */
/* Ghidra symbol: FUN_00d46fa0 */


void FUN_00d46fa0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [512];
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_0040d200(local_288,0xff,0);
  iVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x38),0x1200,0,0);
  FUN_00419260(local_30,&DAT_00d46f28,1,(longlong)iVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  iVar2 = thunk_FUN_041b2403(uVar3,0x1200,0,0);
  thunk_FUN_041b2403(uVar3,0x1211,(longlong)iVar2,local_30[0]);
  iVar2 = *(int *)(local_30[0] + (longlong)*(int *)(param_1 + 8) * 4);
  *(int *)(param_1 + 0xc) = iVar2;
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x38),0x1207,(longlong)iVar2,&local_40);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  *(undefined8 *)(param_1 + 0x30) = uStack_38;
  FUN_0040d200(local_88,0x48,0);
  local_88[0] = 0x26;
  local_80 = local_288;
  local_70 = 0x100;
  iVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x38),0x120b,
                             (longlong)*(int *)(param_1 + 0xc),local_88);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = local_60;
    FUN_004167d0(param_1 + 0x20,local_80);
    *(bool *)(param_1 + 0x40) = (local_6c & 0x1000000) == 0x1000000;
    *(undefined4 *)(param_1 + 0x41) = 0;
    *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 0x100;
    if ((local_6c & 4) == 4) {
      *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 0x2000;
    }
    *(bool *)(param_1 + 0x45) = (local_6c & 0x1000) == 0x1000;
    if ((*(int *)(param_1 + 0x10) < 0) || ((local_6c & 0x2000) != 0x2000)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x46) = uVar1;
  }
  FUN_00423010(&local_298,0,0,0,0);
  local_40 = local_298;
  uStack_38 = uStack_290;
  iVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x38),0x1219,(longlong)*(int *)(param_1 + 8),
                             &local_40);
  if (iVar2 != 0) {
    *(undefined8 *)(param_1 + 0x48) = local_40;
    *(undefined8 *)(param_1 + 0x50) = uStack_38;
  }
  uVar3 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x38),0x1209,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_00419430(local_30,&DAT_00d46f28);
  return;
}

