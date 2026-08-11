/* Ghidra address: 01454690 */
/* Ghidra symbol: FUN_01454690 */


void FUN_01454690(double param_1,double param_2,wchar_t *param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,wchar_t *param_9,wchar_t *param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulonglong *puVar5;
  wchar_t *pwVar6;
  undefined1 local_3648 [32];
  wchar_t *local_3628;
  wchar_t *local_3620;
  wchar_t *local_3618;
  wchar_t *local_3610;
  wchar_t *local_3608;
  wchar_t *local_3600;
  undefined8 local_35f8;
  undefined8 local_35f0;
  wchar_t *local_35e8;
  undefined *local_35d0;
  undefined8 local_35c8;
  undefined8 local_35c0;
  undefined8 local_35b8;
  undefined8 local_35b0;
  undefined8 local_35a8;
  undefined8 local_35a0;
  undefined8 local_3598;
  undefined8 local_3590;
  undefined8 local_3588;
  undefined8 local_3580;
  undefined8 local_3578;
  undefined8 local_3570;
  undefined8 local_3568;
  undefined8 local_3560;
  undefined8 local_3558;
  undefined8 local_3550;
  undefined8 local_3548;
  undefined8 local_3540;
  undefined8 local_3538;
  undefined8 local_3530;
  undefined8 local_3528;
  undefined8 local_3520;
  undefined8 local_3518;
  undefined8 local_3510;
  undefined8 local_3508;
  undefined8 local_3500;
  undefined8 local_34f8;
  undefined8 local_34f0 [4];
  double local_34d0 [2];
  undefined8 local_34c0;
  undefined local_34b8 [16];
  undefined1 local_34a8 [16];
  undefined1 local_3498 [16];
  undefined1 local_3488 [16];
  undefined1 local_3478 [16];
  undefined1 local_3468 [3616];
  undefined1 local_2648;
  ulonglong local_16b8 [14];
  undefined1 local_1648;
  undefined1 local_648;
  
  local_648 = 0;
  local_1648 = 0;
  local_2648 = 0;
  local_3648[0] = 0;
  local_35c8 = 0;
  local_35c0 = 0;
  local_35b8 = 0;
  local_35b0 = 0;
  local_35a8 = 0;
  local_35a0 = 0;
  local_3590 = 0;
  local_3598 = 0;
  local_3588 = 0;
  local_3580 = 0;
  local_3578 = 0;
  local_3570 = 0;
  local_3568 = 0;
  local_3560 = 0;
  local_3550 = 0;
  local_3558 = 0;
  local_3540 = 0;
  local_3548 = 0;
  local_3538 = 0;
  local_3530 = 0;
  local_3528 = 0;
  local_3520 = 0;
  local_3518 = 0;
  local_3510 = 0;
  local_3508 = 0;
  local_3500 = 0;
  local_34f8 = 0;
  local_34f0[0] = 0;
  local_34c0 = 0;
  FUN_019b7940(param_10);
  if ((char)param_10[0x49] == '\0') {
    FUN_0144a8f0(param_10);
    pwVar6 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6 + param_7 + param_8);
    FUN_0144bb40(param_10);
    FUN_01453610(local_3648,param_10);
    FUN_01453730(local_3648,param_10);
    FUN_01453850(local_3648,param_10);
    FUN_01454080(local_3648,param_10);
    if ((char)param_10[0x5a] == '\x04') {
      if ((double)param_3 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)0x0;
        local_3610 = (wchar_t *)((param_1 * local_34d0[0]) / (double)param_3);
        local_3608 = (wchar_t *)0x3ff0000000000000;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,0,param_3);
        FUN_0144bab0(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)0x0;
        local_3610 = (wchar_t *)((param_1 * local_34d0[0]) / (double)param_3);
        local_3608 = (wchar_t *)0x0;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,0,param_3);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        local_35d0 = local_34b8;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = (wchar_t *)0x0;
          local_3618 = param_9;
          local_3608 = (wchar_t *)0x0;
          local_3600 = param_10;
          local_3620 = param_3;
          local_3610 = pwVar6;
          FUN_0144aa90(local_35d0,puVar2,1,1);
          local_35d0 = local_35d0 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_0144b910(local_34d0,param_10);
      local_3628 = param_9;
      local_3618 = (wchar_t *)0x0;
      local_3610 = (wchar_t *)(param_1 * local_34d0[0]);
      local_3608 = (wchar_t *)0x0;
      local_3600 = (wchar_t *)0x0;
      local_35f8 = 0;
      local_35f0 = 0;
      local_35e8 = param_10;
      local_3620 = pwVar6;
      FUN_014496a0(1,1,param_3,(double)param_3 + param_4);
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_34a8;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3620 = (wchar_t *)((double)param_3 + param_4);
          local_3618 = param_9;
          local_3600 = param_10;
          local_3628 = param_3;
          local_3610 = pwVar6;
          local_3608 = param_3;
          FUN_0144aa90(puVar3,puVar2,1,1);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (param_5 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)((double)param_3 + param_4 + param_5);
        local_3610 = (wchar_t *)((-param_1 * local_34d0[0]) / param_5);
        local_3608 = (wchar_t *)0x3ff0000000000000;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4,(double)param_3 + param_4 + param_5);
        FUN_0144bab0(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)0x0;
        local_3610 = (wchar_t *)((-param_1 * local_34d0[0]) / param_5);
        local_3608 = (wchar_t *)0x0;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4,(double)param_3 + param_4 + param_5);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3498;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = (wchar_t *)((double)param_3 + param_4);
          local_3620 = (wchar_t *)((double)param_3 + param_4 + param_5);
          local_3618 = param_9;
          local_3608 = (wchar_t *)((double)param_3 + param_4);
          local_3600 = param_10;
          local_3610 = pwVar6;
          FUN_0144aa90(puVar3,puVar2,1,1);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (param_6 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)((double)param_3 + param_4 + param_5);
        local_3610 = (wchar_t *)((param_2 * local_34d0[0]) / param_6);
        local_3608 = (wchar_t *)0x3ff0000000000000;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4 + param_5,
                     (double)param_3 + param_4 + param_5 + param_6);
        FUN_0144bab0(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)0x0;
        local_3610 = (wchar_t *)((param_2 * local_34d0[0]) / param_6);
        local_3608 = (wchar_t *)0x0;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4 + param_5,
                     (double)param_3 + param_4 + param_5 + param_6);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3488;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = (wchar_t *)((double)param_3 + param_4 + param_5);
          local_3620 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6);
          local_3618 = param_9;
          local_3608 = (wchar_t *)((double)param_3 + param_4 + param_5);
          local_3600 = param_10;
          local_3610 = pwVar6;
          FUN_0144aa90(puVar3,puVar2,1,1);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_0144b910(local_34d0,param_10);
      local_3628 = param_9;
      local_3618 = (wchar_t *)0x0;
      local_3610 = (wchar_t *)(param_2 * local_34d0[0]);
      local_3608 = (wchar_t *)0x0;
      local_3600 = (wchar_t *)0x0;
      local_35f8 = 0;
      local_35f0 = 0;
      local_35e8 = param_10;
      local_3620 = pwVar6;
      FUN_014496a0(1,1,(double)param_3 + param_4 + param_5 + param_6,
                   (double)param_3 + param_4 + param_5 + param_6 + param_7);
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3478;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6);
          local_3620 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6 + param_7);
          local_3618 = param_9;
          local_3608 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6);
          local_3600 = param_10;
          local_3610 = pwVar6;
          FUN_0144aa90(puVar3,puVar2,1,1);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (param_8 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        local_3628 = param_9;
        local_3610 = (wchar_t *)((-param_2 * local_34d0[0]) / param_8);
        local_3608 = (wchar_t *)0x3ff0000000000000;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        local_3618 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4 + param_5 + param_6 + param_7,pwVar6);
        FUN_0144bab0(local_34d0,param_10);
        local_3628 = param_9;
        local_3618 = (wchar_t *)0x0;
        local_3610 = (wchar_t *)((-param_2 * local_34d0[0]) / param_8);
        local_3608 = (wchar_t *)0x0;
        local_3600 = (wchar_t *)0x0;
        local_35f8 = 0;
        local_35f0 = 0;
        local_35e8 = param_10;
        local_3620 = pwVar6;
        FUN_014496a0(1,1,(double)param_3 + param_4 + param_5 + param_6 + param_7,pwVar6);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3468;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6 + param_7);
          local_3618 = param_9;
          local_3608 = (wchar_t *)((double)param_3 + param_4 + param_5 + param_6 + param_7);
          local_3600 = param_10;
          local_3620 = pwVar6;
          local_3610 = pwVar6;
          FUN_0144aa90(puVar3,puVar2,1,1);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if ((double)param_3 == 0.0) {
        iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
        if (0 < iVar1) {
          puVar5 = local_16b8;
          puVar3 = local_34a8;
          local_35d0 = PTR_DAT_020053f0 + 0x10;
          puVar2 = PTR_DAT_02005970;
          do {
            FUN_01449400(local_34d0,*puVar5 ^ 0x8000000000000000,puVar5[1] ^ 0x8000000000000000);
            FUN_01449560(local_34d0,puVar2,local_34d0,param_10);
            FUN_00c44500(local_34d0,puVar3,local_34d0);
            local_3628 = (wchar_t *)0x0;
            local_3618 = param_9;
            local_3608 = (wchar_t *)0x0;
            local_3600 = param_10;
            local_3620 = pwVar6;
            local_3610 = pwVar6;
            FUN_0144aa90(local_34d0,local_35d0,0,0);
            local_35d0 = local_35d0 + 0x10;
            puVar3 = puVar3 + 0x60;
            puVar2 = puVar2 + 0x10;
            puVar5 = puVar5 + 2;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
        if (0 < iVar1) {
          local_35d0 = PTR_DAT_02005970;
          puVar2 = local_34b8;
          puVar4 = PTR_DAT_020053f0;
          do {
            puVar4 = puVar4 + 0x10;
            FUN_01449400(local_34d0,param_1 / (double)param_3,0);
            FUN_01449560(local_34d0,local_35d0,local_34d0,param_10);
            FUN_00c44500(local_34d0,puVar2,local_34d0);
            local_3628 = (wchar_t *)0x0;
            local_3618 = param_9;
            local_3608 = (wchar_t *)0x0;
            local_3600 = param_10;
            local_3620 = pwVar6;
            local_3610 = pwVar6;
            FUN_0144aa90(local_34d0,puVar4,0,0);
            puVar2 = puVar2 + 0x60;
            local_35d0 = local_35d0 + 0x10;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
    else {
      FUN_019b6320(&local_34c0);
      local_3628 = L"T1 + ";
      local_3620 = DAT_0210ea10;
      local_3618 = L"T2";
      FUN_00416cd0(local_34f0,5,L"T2 = ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_34f0[0],param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T3";
      FUN_00416cd0(&local_34f8,3,L"T3 = T2 + ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_34f8,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T4";
      FUN_00416cd0(&local_3500,3,L"T4 = T3 + ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_3500,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T5";
      FUN_00416cd0(&local_3508,3,L"T5 = T4 + ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_3508,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T6";
      FUN_00416cd0(&local_3510,3,L"T = T5 + ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_3510,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"\\d(<abegin> Beginning of the assignment)",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      if ((char)param_10[0x32] == '\x01') {
        FUN_019b6e50(&local_34c0,L"vst(t)=",param_10);
      }
      else {
        FUN_019b6e50(&local_34c0,L"ist(t)=",param_10);
      }
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T1) =>";
      FUN_00416cd0(&local_3518,3,L"(0 <= t) and (t < ",DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_3518,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,&DAT_01456c54,param_10);
      if ((double)param_3 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        FUN_00efac60(&local_3520,(param_1 * local_34d0[0]) / (double)param_3,&DAT_01456c64,
                     param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3520,param_10);
        FUN_0144bab0(local_34d0,param_10);
        FUN_00efab80(&local_3528,(param_1 * local_34d0[0]) / (double)param_3,param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3528,param_10);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar2 = local_34b8;
        puVar4 = PTR_DAT_020053f0;
        do {
          puVar4 = puVar4 + 0x10;
          local_3628 = param_10;
          FUN_0144ac50(&local_3530,puVar2,puVar4,&DAT_01456c64);
          FUN_019b6e50(&local_34c0,local_3530,param_10);
          puVar2 = puVar2 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      local_3628 = L"T1 <= t) and (t < T2) =>";
      FUN_00416cd0(&local_3538,3,&DAT_01456c74,DAT_0210ea10);
      FUN_019b6e50(&local_34c0,local_3538,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_0144b910(local_34d0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_00efab30(&local_3548,param_1 * local_34d0[0],param_10[0x74c]);
      FUN_00416ba0(&local_3540,&DAT_01456c54,local_3548);
      FUN_019b6e50(&local_34c0,local_3540,param_10);
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_34a8;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = L"T1)";
          FUN_00416cd0(&local_3558,3,&DAT_01456cc4,DAT_0210ea10);
          local_3628 = param_10;
          FUN_0144ac50(&local_3550,puVar3,puVar2,local_3558);
          FUN_019b6e50(&local_34c0,local_3550,param_10);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"(T2 <= t) and (t < T3) =>",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,&DAT_01456c54,param_10);
      if (param_5 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        FUN_00efac60(&local_3560,(-param_1 * local_34d0[0]) / param_5,L"(t-T3)",param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3560,param_10);
        FUN_0144bab0(local_34d0,param_10);
        FUN_00efab80(&local_3568,(-param_1 * local_34d0[0]) / param_5,param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3568,param_10);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3498;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = param_10;
          FUN_0144ac50(&local_3570,puVar3,puVar2,L"(t-T2)");
          FUN_019b6e50(&local_34c0,local_3570,param_10);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"(T3 <= t) and (t < T4) =>",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,&DAT_01456c54,param_10);
      if (param_6 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        FUN_00efac60(&local_3578,(param_2 * local_34d0[0]) / param_6,L"(t-T3)",param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3578,param_10);
        FUN_0144bab0(local_34d0,param_10);
        FUN_00efab80(&local_3580,(param_2 * local_34d0[0]) / param_6,param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_3580,param_10);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3488;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = param_10;
          FUN_0144ac50(&local_3588,puVar3,puVar2,L"(t-T3)");
          FUN_019b6e50(&local_34c0,local_3588,param_10);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"(T4 <= t) and (t < T5) =>",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_0144b910(local_34d0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_00efab30(&local_3598,param_2 * local_34d0[0],param_10[0x74c]);
      FUN_00416ba0(&local_3590,&DAT_01456c54,local_3598);
      FUN_019b6e50(&local_34c0,local_3590,param_10);
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3478;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = param_10;
          FUN_0144ac50(&local_35a0,puVar3,puVar2,L"(t-T4)");
          FUN_019b6e50(&local_34c0,local_35a0,param_10);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"(T5 <= t) and (t < T) =>",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,&DAT_01456c54,param_10);
      if (param_8 != 0.0) {
        FUN_0144b910(local_34d0,param_10);
        FUN_00efac60(&local_35a8,(-param_2 * local_34d0[0]) / param_8,L"(t-T)",param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_35a8,param_10);
        FUN_0144bab0(local_34d0,param_10);
        FUN_00efab80(&local_35b0,(-param_2 * local_34d0[0]) / param_8,param_10[0x74c]);
        FUN_019b6e50(&local_34c0,local_35b0,param_10);
      }
      iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
      if (0 < iVar1) {
        puVar3 = local_3468;
        puVar2 = PTR_DAT_020053f0;
        do {
          puVar2 = puVar2 + 0x10;
          local_3628 = param_10;
          FUN_0144ac50(&local_35b8,puVar3,puVar2,L"(t-T5)");
          FUN_019b6e50(&local_34c0,local_35b8,param_10);
          puVar3 = puVar3 + 0x60;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,L"\\d(<aend> End of the assignment)",param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      if ((char)param_10[0x32] == '\x01') {
        FUN_019b6e50(&local_34c0,L"vtr(t)=",param_10);
      }
      else {
        FUN_019b6e50(&local_34c0,L"itr(t)=",param_10);
      }
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
      FUN_019b6e50(&local_34c0,&DAT_01456c54,param_10);
      if ((double)param_3 == 0.0) {
        iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
        if (0 < iVar1) {
          puVar5 = local_16b8;
          local_35d0 = local_34a8;
          puVar4 = PTR_DAT_02005970;
          puVar2 = PTR_DAT_020053f0;
          do {
            puVar2 = puVar2 + 0x10;
            FUN_01449400(local_34d0,*puVar5 ^ 0x8000000000000000,puVar5[1] ^ 0x8000000000000000);
            FUN_01449560(local_34d0,puVar4,local_34d0,param_10);
            FUN_00c44500(local_34d0,local_35d0,local_34d0);
            local_3628 = param_10;
            FUN_0144ac50(&local_35c0,local_34d0,puVar2,&DAT_01456c64);
            FUN_019b6e50(&local_34c0,local_35c0,param_10);
            local_35d0 = local_35d0 + 0x60;
            puVar4 = puVar4 + 0x10;
            puVar5 = puVar5 + 2;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        iVar1 = FUN_0040c770(*(undefined8 *)(param_10 + 0x6c));
        if (0 < iVar1) {
          local_35d0 = local_34b8;
          puVar4 = PTR_DAT_02005970;
          puVar2 = PTR_DAT_020053f0;
          do {
            puVar2 = puVar2 + 0x10;
            FUN_01449400(local_34d0,param_1 / (double)param_3,0);
            FUN_01449560(local_34d0,puVar4,local_34d0,param_10);
            FUN_00c44500(local_34d0,local_35d0,local_34d0);
            local_3628 = param_10;
            FUN_0144ac50(&local_35c8,local_34d0,puVar2,&DAT_01456c64);
            FUN_019b6e50(&local_34c0,local_35c8,param_10);
            local_35d0 = local_35d0 + 0x60;
            puVar4 = puVar4 + 0x10;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      FUN_019b9d20(&local_34c0,param_10);
      FUN_019b7970(&local_34c0,2,param_10);
      FUN_019b9050(local_34c0,param_10);
      FUN_019b6320(&local_34c0);
    }
  }
  FUN_00414560(&local_35c8,0x1c);
  return;
}

