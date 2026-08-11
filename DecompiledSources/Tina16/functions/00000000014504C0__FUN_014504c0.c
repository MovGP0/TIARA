/* Ghidra address: 014504c0 */
/* Ghidra symbol: FUN_014504c0 */


void FUN_014504c0(double param_1,double param_2,double param_3,longlong param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20;
  
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_20 = 0;
  FUN_019b7940(param_4);
  if (*(char *)(param_4 + 0x92) == '\0') {
    FUN_0144a8f0(param_4);
    FUN_0144bb40(param_4);
    if (*(char *)(param_4 + 0xb4) == '\x04') {
      FUN_0144b910(&local_30,param_4);
      FUN_014496a0(1,1,0,param_3,0,param_2,0,(param_1 * local_30) / param_3,0x3ff0000000000000,0,0,0
                   ,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_014496a0(1,1,0,param_3,0,param_2,0,(param_1 * local_30) / param_3,0,0,0,0,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_0144aa90(&local_30,pdVar3,1,1,0,param_3,0,param_2,-param_3,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_0144b910(&local_30,param_4);
      FUN_014496a0(1,1,param_3,param_2 / 2.0 - param_3,0,param_2,0,param_1 * local_30,0,0,0,0,
                   param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * 2.0 * param_3;
          local_28 = pdVar1[3] * 2.0 * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_0144aa90(&local_30,pdVar3,1,1,param_3,param_2 / 2.0 - param_3,0,param_2,param_3,
                       param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_0144b910(&local_30,param_4);
      FUN_014496a0(1,1,param_2 / 2.0 - param_3,param_2 / 2.0 + param_3,0,param_2,param_2 / 2.0,
                   (-param_1 * local_30) / param_3,0x3ff0000000000000,0,0,0,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_014496a0(1,1,param_2 / 2.0 - param_3,param_2 / 2.0 + param_3,0,param_2,0,
                   (-param_1 * local_30) / param_3,0,0,0,0,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (-local_30 * param_1) / param_3;
          local_28 = (-local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_0144aa90(&local_30,pdVar3,1,1,param_2 / 2.0 - param_3,param_2 / 2.0 + param_3,0,
                       param_2,param_2 / 2.0 - param_3,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_0144b910(&local_30,param_4);
      FUN_014496a0(1,1,param_2 / 2.0 + param_3,param_2 - param_3,0,param_2,0,-param_1 * local_30,0,0
                   ,0,0,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * 2.0 * param_3;
          local_28 = pdVar1[3] * 2.0 * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (-local_30 * param_1) / param_3;
          local_28 = (-local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_0144aa90(&local_30,pdVar3,1,1,param_2 / 2.0 + param_3,param_2 - param_3,0,param_2,
                       param_2 / 2.0 + param_3,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_0144b910(&local_30,param_4);
      FUN_014496a0(1,1,param_2 - param_3,param_2,0,param_2,param_2,(param_1 * local_30) / param_3,
                   0x3ff0000000000000,0,0,0,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_014496a0(1,1,param_2 - param_3,param_2,0,param_2,0,(param_1 * local_30) / param_3,0,0,0,0,
                   param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_0144aa90(&local_30,pdVar3,1,1,param_2 - param_3,param_2,0,param_2,param_2 - param_3,
                       param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * param_3;
          local_28 = pdVar1[3] * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = *pdVar3 * (param_2 / 2.0 - param_3);
          local_38 = pdVar1[3] * (param_2 / 2.0 - param_3);
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 - 1.0;
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144aa90(&local_30,pdVar3,0,0,0,0,0,0x4049000000000000,0,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
    }
    else {
      FUN_019b6320(&local_20);
      FUN_00416cd0(local_50,3,L"T = 1/",DAT_0210ea10,&DAT_01453288);
      FUN_019b6e50(&local_20,local_50[0],param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      if (*(char *)(param_4 + 100) == '\x01') {
        FUN_019b6e50(&local_20,L"vst(t)=",param_4);
      }
      else {
        FUN_019b6e50(&local_20,L"ist(t)=",param_4);
      }
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_00416cd0(&local_58,3,L"(0 <= t) and (t < ",DAT_0210ea10,L"tau) =>");
      FUN_019b6e50(&local_20,local_58,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_0144b910(&local_30,param_4);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_68,(param_1 * local_30) / param_3,&DAT_01453390,
                   *(undefined2 *)(param_4 + 0xe98));
      FUN_00416ba0(&local_60,&DAT_01453380,local_68);
      FUN_019b6e50(&local_20,local_60,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_00efab80(&local_70,(param_1 * local_30) / param_3,*(undefined2 *)(param_4 + 0xe98));
      FUN_019b6e50(&local_20,local_70,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_00416cd0(&local_80,3,&DAT_014533a0,DAT_0210ea10,L"tau)");
          FUN_0144ac50(&local_78,&local_30,pdVar3,local_80,param_4);
          FUN_019b6e50(&local_20,local_78,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_00416cd0(&local_88,5,&DAT_014533cc,DAT_0210ea10,L"tau <= t) and (t < T/2-",DAT_0210ea10,
                   L"tau) =>");
      FUN_019b6e50(&local_20,local_88,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_0144b910(&local_30,param_4);
      FUN_019b6320(&local_20);
      FUN_00efab30(&local_98,param_1 * local_30,*(undefined2 *)(param_4 + 0xe98));
      FUN_00416ba0(&local_90,&DAT_01453380,local_98);
      FUN_019b6e50(&local_20,local_90,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * 2.0 * param_3;
          local_28 = pdVar1[3] * 2.0 * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_00416cd0(&local_a8,3,&DAT_01453418,DAT_0210ea10,L"tau)");
          FUN_0144ac50(&local_a0,&local_30,pdVar3,local_a8,param_4);
          FUN_019b6e50(&local_20,local_a0,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_00416cd0(&local_b0,5,L"(T/2-",DAT_0210ea10,L"tau <= t) and (t < T/2+",DAT_0210ea10,
                   L"tau) =>");
      FUN_019b6e50(&local_20,local_b0,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_0144b910(&local_30,param_4);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_c0,(-param_1 * local_30) / param_3,L"(t-T/2)",
                   *(undefined2 *)(param_4 + 0xe98));
      FUN_00416ba0(&local_b8,&DAT_01453380,local_c0);
      FUN_019b6e50(&local_20,local_b8,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_00efab80(&local_c8,(-param_1 * local_30) / param_3,*(undefined2 *)(param_4 + 0xe98));
      FUN_019b6e50(&local_20,local_c8,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (-local_30 * param_1) / param_3;
          local_28 = (-local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_00416cd0(&local_d8,3,&DAT_014533a0,DAT_0210ea10,L"tau-T/2)");
          FUN_0144ac50(&local_d0,&local_30,pdVar3,local_d8,param_4);
          FUN_019b6e50(&local_20,local_d0,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_00416cd0(&local_e0,5,L"(T/2+",DAT_0210ea10,L"tau <= t) and (t < T-",DAT_0210ea10,
                   L"tau) =>");
      FUN_019b6e50(&local_20,local_e0,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_0144b910(&local_30,param_4);
      FUN_019b6320(&local_20);
      FUN_00efab30(&local_f0,-param_1 * local_30,*(undefined2 *)(param_4 + 0xe98));
      FUN_00416ba0(&local_e8,&DAT_01453380,local_f0);
      FUN_019b6e50(&local_20,local_e8,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * 2.0 * param_3;
          local_28 = pdVar1[3] * 2.0 * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (-local_30 * param_1) / param_3;
          local_28 = (-local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_00416cd0(&local_100,3,&DAT_01453418,DAT_0210ea10,L"tau-T/2)");
          FUN_0144ac50(&local_f8,&local_30,pdVar3,local_100,param_4);
          FUN_019b6e50(&local_20,local_f8,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_00416cd0(&local_108,3,&DAT_0145350c,DAT_0210ea10,L"tau <= t) and (t < T) =>");
      FUN_019b6e50(&local_20,local_108,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_0144b910(&local_30,param_4);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_118,(param_1 * local_30) / param_3,L"(t-T)",
                   *(undefined2 *)(param_4 + 0xe98));
      FUN_00416ba0(&local_110,&DAT_01453380,local_118);
      FUN_019b6e50(&local_20,local_110,param_4);
      FUN_0144bab0(&local_30,param_4);
      FUN_00efab80(&local_120,(param_1 * local_30) / param_3,*(undefined2 *)(param_4 + 0xe98));
      FUN_019b6e50(&local_20,local_120,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * (param_2 / 2.0 - param_3 * 2.0);
          local_28 = pdVar1[3] * (param_2 / 2.0 - param_3 * 2.0);
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 + 1.0;
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          FUN_00416cd0(&local_130,3,&DAT_014533a0,DAT_0210ea10,L"tau-T)");
          FUN_0144ac50(&local_128,&local_30,pdVar3,local_130,param_4);
          FUN_019b6e50(&local_20,local_128,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      if (*(char *)(param_4 + 100) == '\x01') {
        FUN_019b6e50(&local_20,L"vtr(t)=",param_4);
      }
      else {
        FUN_019b6e50(&local_20,L"itr(t)=",param_4);
      }
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,&DAT_01453380,param_4);
      iVar2 = FUN_0040c770(*(undefined8 *)PTR_DAT_020053f0);
      pdVar1 = (double *)PTR_DAT_020053f0;
      if (0 < iVar2) {
        do {
          pdVar3 = pdVar1 + 2;
          local_30 = *pdVar3 * param_3;
          local_28 = pdVar1[3] * param_3;
          FUN_014494b0(&local_30,&local_30,param_4);
          local_30 = local_30 - 1.0;
          local_40 = *pdVar3 * (param_2 / 2.0 - param_3);
          local_38 = pdVar1[3] * (param_2 / 2.0 - param_3);
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 - 1.0;
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          local_40 = (*pdVar3 * param_2) / 2.0;
          local_38 = (pdVar1[3] * param_2) / 2.0;
          FUN_014494b0(&local_40,&local_40,param_4);
          local_40 = local_40 + 1.0;
          FUN_01449410(&local_30,&local_40,&local_30,param_4);
          FUN_0144b710(pdVar3,&local_40,param_4);
          FUN_01449560(&local_30,&local_40,&local_30,param_4);
          local_30 = (local_30 * param_1) / param_3;
          local_28 = (local_28 * param_1) / param_3;
          FUN_0144ac50(&local_138,&local_30,pdVar3,&DAT_01453390,param_4);
          FUN_019b6e50(&local_20,local_138,param_4);
          iVar2 = iVar2 + -1;
          pdVar1 = pdVar3;
        } while (iVar2 != 0);
      }
      FUN_019b9d20(&local_20,param_4);
      FUN_019b7970(&local_20,2,param_4);
      FUN_019b9050(local_20,param_4);
      FUN_019b6320(&local_20);
    }
  }
  FUN_00414560(&local_138,0x1e);
  return;
}

