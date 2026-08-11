/* Ghidra address: 0145dec0 */
/* Ghidra symbol: FUN_0145dec0 */


void FUN_0145dec0(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [19];
  
  local_b0 = 0;
  local_b8 = 0;
  if (*(char *)(param_1 + 0x92) == '\0') {
    local_a8[0] = 0;
    if (((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_1 + 0xe32) == '\0')) &&
       (*(int *)(param_1 + 0xe70) == 0)) {
      FUN_00ef4260(0x13,param_1);
    }
    FUN_00efccb0(param_1);
    uVar3 = FUN_019b97c0(0,param_1);
    *(undefined4 *)(param_1 + 0xb38) = uVar3;
    iVar4 = FUN_019b9990(0,param_1);
    piVar1 = (int *)(param_1 + 0xb38);
    *piVar1 = *piVar1 * iVar4;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    uVar2 = *(undefined1 *)(param_1 + 0xb0);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    if (*(longlong *)(param_1 + 8) == 0) {
      FUN_00ef4260(CONCAT71((int7)((ulonglong)piVar1 >> 8),8),param_1);
      FUN_019b9b60(param_1);
    }
    FUN_019b6320(local_a8);
    FUN_019b6e50(local_a8,L"\\d(<fbegin> Beginning of the function)",param_1);
    FUN_019b9050(local_a8[0],param_1);
    FUN_0145d050(auStack_128);
    *(undefined1 *)(param_1 + 0xb0) = uVar2;
    if (*(char *)(param_1 + 0xb4) == '\x04') {
      dVar5 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xa8));
      if (1e-100 < dVar5) {
        local_108 = 0;
        local_100 = 0x4049000000000000;
        local_f8 = 0;
        local_f0 = *(undefined8 *)(param_1 + 0xa8);
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = param_1;
        FUN_014496a0(0,0,0,0);
      }
      if (*(char *)(param_1 + 0x94) != '\0') {
        FUN_00ef4280(param_1);
        *(undefined1 *)(param_1 + 0x92) = 0;
      }
    }
    else {
      dVar5 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xa8));
      if (1e-100 < dVar5) {
        FUN_019b6320(local_a8);
        FUN_00efa6e0(&local_b8,*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xe98));
        FUN_00416ba0(&local_b0,L"Additive DC level:",local_b8);
        FUN_019b6e50(local_a8,local_b0,param_1);
        FUN_019b9050(local_a8[0],param_1);
      }
      FUN_019b6320(local_a8);
      FUN_019b6e50(local_a8,L"\\d(<fend> End of the function)",param_1);
      FUN_019b9050(local_a8[0],param_1);
      FUN_00ef81f0(param_1 + 0x30);
      FUN_00ef81f0(param_1 + 0x38);
      FUN_00efa3b0(param_1 + 0x18);
      FUN_00efa3b0(param_1 + 0x20);
      if (*(char *)(param_1 + 0x92) != '\0') {
        FUN_00ef4280(param_1);
      }
    }
    FUN_019b6320(local_a8);
  }
  FUN_00414560(&local_b8,2);
  return;
}

