/* Ghidra address: 0144dfd0 */
/* Ghidra symbol: FUN_0144dfd0 */


void FUN_0144dfd0(undefined8 param_1,double param_2,undefined *param_3)

{
  double *pdVar1;
  int iVar2;
  undefined *puVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [32];
  undefined *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  undefined8 local_50 [2];
  double local_40 [2];
  double local_30;
  double local_28;
  undefined8 local_20;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_b8 = param_3;
  FUN_019b7940(param_3);
  if (local_b8[0x92] == '\0') {
    FUN_0144a8f0(local_b8);
    FUN_0144df30(auStack_128,local_b8);
    if (local_b8[0xb4] == '\x04') {
      local_f0 = (double)FUN_0144dde0(auStack_128,local_b8);
      local_108 = (undefined *)0x0;
      local_f8 = 0.0;
      local_e8 = 1.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      FUN_014496a0(1,1,0,param_2 / 4.0);
      FUN_0144bab0(&local_30,local_b8);
      local_108 = (undefined *)0x0;
      local_f8 = 0.0;
      local_f0 = local_30;
      local_e8 = 0.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      FUN_014496a0(1,1,0,param_2 / 4.0);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_108 = (undefined *)0x0;
          local_100 = param_2 / 4.0;
          local_f8 = 0.0;
          local_e8 = -param_2 / 4.0;
          local_e0 = local_b8;
          local_f0 = param_2;
          FUN_0144aa90(&local_30,puVar3,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      uVar5 = FUN_0144dde0(auStack_128,local_b8);
      local_108 = (undefined *)0x0;
      local_f8 = param_2 / 2.0;
      local_f0 = (double)(uVar5 ^ 0x8000000000000000);
      local_e8 = 1.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      FUN_014496a0(1,1,param_2 / 4.0,(param_2 * 3.0) / 4.0);
      FUN_0144bab0(&local_30,local_b8);
      local_108 = (undefined *)0x0;
      local_f8 = 0.0;
      local_f0 = -local_30;
      local_e8 = 0.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      FUN_014496a0(1,1,param_2 / 4.0,(param_2 * 3.0) / 4.0);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = -local_30 * 2.0;
          local_28 = -local_28 * 2.0;
          local_108 = (undefined *)(param_2 / 4.0);
          local_100 = (param_2 * 3.0) / 4.0;
          local_f8 = 0.0;
          local_e8 = param_2 / 4.0;
          local_e0 = local_b8;
          local_f0 = param_2;
          FUN_0144aa90(&local_30,puVar3,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_f0 = (double)FUN_0144dde0(auStack_128,local_b8);
      local_108 = (undefined *)0x0;
      local_e8 = 1.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      local_f8 = param_2;
      FUN_014496a0(1,1,(param_2 * 3.0) / 4.0,param_2);
      FUN_0144bab0(&local_30,local_b8);
      local_108 = (undefined *)0x0;
      local_f8 = 0.0;
      local_f0 = local_30;
      local_e8 = 0.0;
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = local_b8;
      local_100 = param_2;
      FUN_014496a0(1,1,(param_2 * 3.0) / 4.0,param_2);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_108 = (undefined *)((param_2 * 3.0) / 4.0);
          local_f8 = 0.0;
          local_e8 = (param_2 * 3.0) / 4.0;
          local_e0 = local_b8;
          local_100 = param_2;
          local_f0 = param_2;
          FUN_0144aa90(&local_30,puVar3,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar4 = pdVar1 + 2;
          local_30 = (*pdVar4 * param_2) / 4.0;
          local_28 = (pdVar1[3] * param_2) / 4.0;
          FUN_014494b0(&local_30,local_40,local_b8);
          local_40[0] = local_40[0] - 1.0;
          FUN_01449560(local_40,local_40,local_40,local_b8);
          FUN_0144de60(auStack_128,pdVar4,&local_30,local_b8);
          FUN_01449560(&local_30,local_40,&local_30,local_b8);
          local_108 = (undefined *)0x0;
          local_100 = 0.0;
          local_f8 = 0.0;
          local_f0 = 50.0;
          local_e8 = 0.0;
          local_e0 = local_b8;
          FUN_0144aa90(&local_30,pdVar4,0,0);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar4;
        } while (iVar2 != 0);
      }
    }
    else {
      FUN_019b6320(&local_20);
      local_108 = &DAT_0144f2c4;
      FUN_00416cd0(local_50,3,L"T = 1/",DAT_0210ea10);
      FUN_019b6e50(&local_20,local_50[0],local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      if (local_b8[100] == '\x01') {
        FUN_019b6e50(&local_20,L"vst(t)=",local_b8);
      }
      else {
        FUN_019b6e50(&local_20,L"ist(t)=",local_b8);
      }
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(0 <= t) and (t < T/4) =>",local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      uVar6 = FUN_0144dde0(auStack_128,local_b8);
      FUN_00efac60(&local_58,uVar6,&DAT_0144f3ac,*(undefined2 *)(local_b8 + 0xe98));
      FUN_019b6e50(&local_20,local_58,local_b8);
      FUN_0144bab0(&local_30,local_b8);
      FUN_00efab80(&local_60,local_30,*(undefined2 *)(local_b8 + 0xe98));
      FUN_019b6e50(&local_20,local_60,local_b8);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_108 = local_b8;
          FUN_0144ac50(&local_68,&local_30,puVar3,L"(t+T/4)");
          FUN_019b6e50(&local_20,local_68,local_b8);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(T/4 <= t) and (t < 3*T/4) =>",local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      uVar5 = FUN_0144dde0(auStack_128,local_b8);
      FUN_00efac60(&local_78,uVar5 ^ 0x8000000000000000,L"(t-T/2)",*(undefined2 *)(local_b8 + 0xe98)
                  );
      FUN_00416ba0(&local_70,&DAT_0144f420,local_78);
      FUN_019b6e50(&local_20,local_70,local_b8);
      FUN_0144bab0(&local_30,local_b8);
      FUN_00efab80(&local_80,-local_30,*(undefined2 *)(local_b8 + 0xe98));
      FUN_019b6e50(&local_20,local_80,local_b8);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = local_30 * -2.0;
          local_28 = local_28 * -2.0;
          local_108 = local_b8;
          FUN_0144ac50(&local_88,&local_30,puVar3,L"(t-T/4)");
          FUN_019b6e50(&local_20,local_88,local_b8);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(3*T/4 <= t) and (t < T) =>",local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      uVar6 = FUN_0144dde0(auStack_128,local_b8);
      FUN_00efac60(&local_98,uVar6,L"(t-T)",*(undefined2 *)(local_b8 + 0xe98));
      FUN_00416ba0(&local_90,&DAT_0144f420,local_98);
      FUN_019b6e50(&local_20,local_90,local_b8);
      FUN_0144bab0(&local_30,local_b8);
      FUN_00efab80(&local_a0,local_30,*(undefined2 *)(local_b8 + 0xe98));
      FUN_019b6e50(&local_20,local_a0,local_b8);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144de60(auStack_128,puVar3,&local_30,local_b8);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_108 = local_b8;
          FUN_0144ac50(&local_a8,&local_30,puVar3,L"(t-3*T/4)");
          FUN_019b6e50(&local_20,local_a8,local_b8);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      if (local_b8[100] == '\x01') {
        FUN_019b6e50(&local_20,L"vtr(t)=",local_b8);
      }
      else {
        FUN_019b6e50(&local_20,L"itr(t)=",local_b8);
      }
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,&DAT_0144f420,local_b8);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar4 = pdVar1 + 2;
          FUN_019b7940(local_b8);
          local_30 = (*pdVar4 * param_2) / 4.0;
          local_28 = (pdVar1[3] * param_2) / 4.0;
          FUN_014494b0(&local_30,local_40,local_b8);
          local_40[0] = local_40[0] - 1.0;
          FUN_01449560(local_40,local_40,local_40,local_b8);
          FUN_0144de60(auStack_128,pdVar4,&local_30,local_b8);
          FUN_01449560(&local_30,local_40,&local_30,local_b8);
          local_108 = local_b8;
          FUN_0144ac50(&local_b0,&local_30,pdVar4,&DAT_0144f3ac);
          FUN_019b6e50(&local_20,local_b0,local_b8);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar4;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_b8);
      FUN_019b7970(&local_20,2,local_b8);
      FUN_019b9050(local_20,local_b8);
      FUN_019b6320(&local_20);
    }
  }
  FUN_00414560(&local_b0,0xd);
  return;
}

