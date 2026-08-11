/* Ghidra address: 0144f6e0 */
/* Ghidra symbol: FUN_0144f6e0 */


void FUN_0144f6e0(undefined8 param_1,double param_2,undefined *param_3)

{
  double *pdVar1;
  int iVar2;
  undefined *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *local_90;
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
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_20 = 0;
  local_90 = param_3;
  FUN_019b7940(param_3);
  if (local_90[0x92] == '\0') {
    FUN_0144a8f0(local_90);
    if (local_90[0xb4] == '\x04') {
      local_d0 = (double)FUN_0144f560(auStack_108,local_90);
      local_e8 = (undefined *)0x0;
      local_d8 = 0;
      local_c8 = 0.0;
      local_c0 = (undefined *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = local_90;
      local_e0 = param_2;
      FUN_014496a0(1,1,0,param_2 / 2.0);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144f5d0(auStack_108,puVar3,&local_30,local_90);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_e8 = (undefined *)0x0;
          local_e0 = param_2 / 2.0;
          local_d8 = 0;
          local_c8 = 0.0;
          local_c0 = local_90;
          local_d0 = param_2;
          FUN_0144aa90(&local_30,puVar3,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_d0 = (double)FUN_0144f560(auStack_108,local_90);
      local_e8 = (undefined *)0x0;
      local_d8 = 0;
      local_d0 = -local_d0;
      local_c8 = 0.0;
      local_c0 = (undefined *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = local_90;
      local_e0 = param_2;
      FUN_014496a0(1,1,param_2 / 2.0,param_2);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144f5d0(auStack_108,puVar3,&local_30,local_90);
          local_30 = -local_30 * 2.0;
          local_28 = -local_28 * 2.0;
          local_e8 = (undefined *)(param_2 / 2.0);
          local_d8 = 0;
          local_c8 = param_2 / 2.0;
          local_c0 = local_90;
          local_e0 = param_2;
          local_d0 = param_2;
          FUN_0144aa90(&local_30,puVar3,1,1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar4 = pdVar1 + 2;
          local_30 = (*pdVar4 * param_2) / 2.0;
          local_28 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_30,local_40,local_90);
          local_40[0] = local_40[0] - 1.0;
          FUN_0144f5d0(auStack_108,pdVar4,&local_30,local_90);
          FUN_01449560(&local_30,local_40,&local_30,local_90);
          local_e8 = (undefined *)0x0;
          local_e0 = 0.0;
          local_d8 = 0;
          local_d0 = 50.0;
          local_c8 = 0.0;
          local_c0 = local_90;
          FUN_0144aa90(&local_30,pdVar4,0,0);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar4;
        } while (iVar2 != 0);
      }
    }
    else {
      FUN_019b6320(&local_20);
      local_e8 = &DAT_014502d8;
      FUN_00416cd0(local_50,3,L"T = 1/",DAT_0210ea10);
      FUN_019b6e50(&local_20,local_50[0],local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      if (local_90[100] == '\x01') {
        FUN_019b6e50(&local_20,L"vst(t)=",local_90);
      }
      else {
        FUN_019b6e50(&local_20,L"ist(t)=",local_90);
      }
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(0 <= t) and (t < T/2) =>",local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      uVar5 = FUN_0144f560(auStack_108,local_90);
      FUN_00efab30(&local_60,uVar5,*(undefined2 *)(local_90 + 0xe98));
      FUN_00416ba0(&local_58,&DAT_014503c0,local_60);
      FUN_019b6e50(&local_20,local_58,local_90);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144f5d0(auStack_108,puVar3,&local_30,local_90);
          local_30 = local_30 * 2.0;
          local_28 = local_28 * 2.0;
          local_e8 = local_90;
          FUN_0144ac50(&local_68,&local_30,puVar3,&DAT_014503d0);
          FUN_019b6e50(&local_20,local_68,local_90);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(T/2 <= t) and (t < T) =>",local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      uVar6 = FUN_0144f560(auStack_108,local_90);
      FUN_00efab30(&local_78,uVar6 ^ 0x8000000000000000,*(undefined2 *)(local_90 + 0xe98));
      FUN_00416ba0(&local_70,&DAT_014503c0,local_78);
      FUN_019b6e50(&local_20,local_70,local_90);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      puVar3 = PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          puVar3 = puVar3 + 0x10;
          FUN_0144f5d0(auStack_108,puVar3,&local_30,local_90);
          local_30 = local_30 * -2.0;
          local_28 = local_28 * -2.0;
          local_e8 = local_90;
          FUN_0144ac50(&local_80,&local_30,puVar3,L"(t-T/2)");
          FUN_019b6e50(&local_20,local_80,local_90);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      if (local_90[100] == '\x01') {
        FUN_019b6e50(&local_20,L"vtr(t)=",local_90);
      }
      else {
        FUN_019b6e50(&local_20,L"itr(t)=",local_90);
      }
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,&DAT_014503c0,local_90);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar4 = pdVar1 + 2;
          local_30 = (*pdVar4 * param_2) / 2.0;
          local_28 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_30,local_40,local_90);
          local_40[0] = local_40[0] - 1.0;
          FUN_0144f5d0(auStack_108,pdVar4,&local_30,local_90);
          FUN_01449560(&local_30,local_40,&local_30,local_90);
          local_e8 = local_90;
          FUN_0144ac50(&local_88,&local_30,pdVar4,&DAT_014503d0);
          FUN_019b6e50(&local_20,local_88,local_90);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar4;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,local_90);
      FUN_019b9050(local_20,local_90);
      FUN_019b6320(&local_20);
    }
  }
  FUN_00414560(&local_88,8);
  return;
}

