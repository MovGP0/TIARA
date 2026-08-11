/* Ghidra address: 01457df0 */
/* Ghidra symbol: FUN_01457df0 */


void FUN_01457df0(int param_1,double *param_2,byte param_3,double param_4,double param_5,
                 undefined8 param_6,double param_7,double param_8,undefined8 param_9,double param_10
                 ,double param_11,undefined8 param_12,double param_13,longlong param_14)

{
  longlong lVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  undefined1 auStack_ec8 [32];
  wchar_t *local_ea8;
  undefined8 local_ea0;
  wchar_t *local_e98;
  byte local_e81;
  double local_e80;
  undefined8 local_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined8 local_e28;
  undefined8 local_e20;
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined8 local_dc8;
  undefined8 local_dc0;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined8 local_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined8 local_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 local_d50;
  undefined8 local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0 [2];
  double local_ca0 [400];
  undefined8 local_20;
  
  local_e78 = 0;
  local_e68 = 0;
  local_e70 = 0;
  local_e60 = 0;
  local_e50 = 0;
  local_e58 = 0;
  local_e40 = 0;
  local_e48 = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_dd8 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_db8 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_da0 = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d88 = 0;
  local_d80 = 0;
  local_d78 = 0;
  local_d70 = 0;
  local_d68 = 0;
  local_d60 = 0;
  local_d58 = 0;
  local_d50 = 0;
  local_d48 = 0;
  local_d40 = 0;
  local_d38 = 0;
  local_d30 = 0;
  local_d28 = 0;
  local_d20 = 0;
  local_d18 = 0;
  local_d10 = 0;
  local_d00 = 0;
  local_d08 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_ce0 = 0;
  local_ce8 = 0;
  local_cd8 = 0;
  local_cc8 = 0;
  local_cd0 = 0;
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb0[0] = 0;
  pdVar2 = local_ca0;
  for (lVar1 = 400; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar2 = *param_2;
    param_2 = param_2 + 1;
    pdVar2 = pdVar2 + 1;
  }
  local_20 = 0;
  local_e81 = param_3;
  local_e80 = param_4;
  FUN_019b7940(param_14);
  if (*(char *)(param_14 + 0x92) != '\0') goto LAB_01459fc6;
  if (((byte)(local_e81 - 1) < 2) || (((local_e81 != 4 && (local_e81 != 7)) && (local_e81 == 0x10)))
     ) {
    *(double *)(param_14 + 0xa0) = *(double *)(param_14 + 0xa0) * local_e80;
  }
  FUN_019b6320(&local_20);
  if (*(char *)(param_14 + 100) == '\x01') {
    local_ea8 = L")(t)=";
    FUN_00416cd0(local_cb0,3,L"\\i(v,",*(undefined8 *)(param_14 + 0x68));
    FUN_019b6e50(&local_20,local_cb0[0],param_14);
  }
  else {
    local_ea8 = L")(t)=";
    FUN_00416cd0(&local_cb8,3,L"\\i(i,",*(undefined8 *)(param_14 + 0x68));
    FUN_019b6e50(&local_20,local_cb8,param_14);
  }
  if (param_1 == -1) {
    if ((char)local_e81 < '\x06') {
      if (local_e81 == 5) {
        FUN_019b6320(&local_20);
        local_ea8 = L"f";
        FUN_00416cd0(&local_d90,3,L"T = 1/",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d90,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        if (*(char *)(param_14 + 100) == '\x01') {
          local_ea8 = L")(t)=";
          FUN_00416cd0(&local_d98,3,L"\\i(v,",*(undefined8 *)(param_14 + 0x68));
          FUN_019b6e50(&local_20,local_d98,param_14);
        }
        else {
          local_ea8 = L")(t)=";
          FUN_00416cd0(&local_da0,3,L"\\i(i,",*(undefined8 *)(param_14 + 0x68));
          FUN_019b6e50(&local_20,local_da0,param_14);
        }
        FUN_019b9050(local_20,param_14);
        if (param_8 == 0.0) {
          FUN_019b6320(&local_20);
          FUN_019b6e50(&local_20,L"(0 <= t) and (t < T/2) =>",param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efab30(&local_da8,*(double *)(param_14 + 0xa0) * local_e80,
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_da8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_019b6e50(&local_20,L"(T/2 <= t) and (t < T) =>",param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efab30(&local_db0,-*(double *)(param_14 + 0xa0) * local_e80,
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_db0,param_14);
          FUN_019b9050(local_20,param_14);
        }
        else {
          FUN_019b6320(&local_20);
          local_ea8 = L"tau) =>";
          FUN_00416cd0(&local_db8,3,L"(0 <= t) and (t < ",DAT_0210ea10);
          FUN_019b6e50(&local_20,local_db8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efac60(&local_dc0,(*(double *)(param_14 + 0xa0) * local_e80) / param_8,&DAT_0145a100
                       ,*(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_dc0,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          local_ea8 = L"tau <= t) and (t < T/2-";
          local_ea0 = DAT_0210ea10;
          local_e98 = L"tau) =>";
          FUN_00416cd0(&local_dc8,5,&DAT_0145a2e0,DAT_0210ea10);
          FUN_019b6e50(&local_20,local_dc8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efab30(&local_dd0,*(double *)(param_14 + 0xa0) * local_e80,
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_dd0,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          local_ea8 = L"tau <= t) and (t < T/2+";
          local_ea0 = DAT_0210ea10;
          local_e98 = L"tau) =>";
          FUN_00416cd0(&local_dd8,5,L"(T/2-",DAT_0210ea10);
          FUN_019b6e50(&local_20,local_dd8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efac60(&local_de0,(-*(double *)(param_14 + 0xa0) * local_e80) / param_8,L"(t-T/2)",
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_de0,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          local_ea8 = L"tau <= t) and (t < T-";
          local_ea0 = DAT_0210ea10;
          local_e98 = L"tau) =>";
          FUN_00416cd0(&local_de8,5,L"(T/2+",DAT_0210ea10);
          FUN_019b6e50(&local_20,local_de8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efab30(&local_df0,-*(double *)(param_14 + 0xa0) * local_e80,
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_df0,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          local_ea8 = L"tau <= t) and (t < T) =>";
          FUN_00416cd0(&local_df8,3,&DAT_0145a678,DAT_0210ea10);
          FUN_019b6e50(&local_20,local_df8,param_14);
          FUN_019b9050(local_20,param_14);
          FUN_019b6320(&local_20);
          FUN_00efac60(&local_e00,(*(double *)(param_14 + 0xa0) * local_e80) / param_8,L"(t-T)",
                       *(undefined2 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_e00,param_14);
          FUN_019b9050(local_20,param_14);
        }
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
      }
      else if (local_e81 == 1) {
        if (*(double *)(param_14 + 0xa0) != 0.0) {
          FUN_00efa6e0(&local_cc0,*(undefined8 *)(param_14 + 0xa0),*(undefined1 *)(param_14 + 0xe98)
                      );
          FUN_00416ad0(&local_cc0,L"*\\s(e)(t)");
          FUN_019b6e50(&local_20,local_cc0,param_14);
          if (-*(double *)(param_14 + 0xa0) <= 0.0) {
            FUN_00efa6e0(&local_cd8,*(ulonglong *)(param_14 + 0xa0) ^ 0x8000000000000000,
                         *(undefined1 *)(param_14 + 0xe98));
            FUN_00416ad0(&local_cd8,L"*\\s(e)(t");
            FUN_019b6e50(&local_20,local_cd8,param_14);
          }
          else {
            FUN_00efa6e0(&local_cd0,*(ulonglong *)(param_14 + 0xa0) ^ 0x8000000000000000,
                         *(undefined1 *)(param_14 + 0xe98));
            local_ea8 = L"*\\s(e)(t";
            FUN_00416cd0(&local_cc8,3,&DAT_0145a0c0,local_cd0);
            FUN_019b6e50(&local_20,local_cc8,param_14);
          }
          dVar4 = (double)FUN_0040c850(param_8);
          if (1e-100 < dVar4) {
            if (-param_8 <= 0.0) {
              FUN_00efa6e0(&local_cf0,-param_8,*(undefined1 *)(param_14 + 0xe98));
              FUN_019b6e50(&local_20,local_cf0,param_14);
            }
            else {
              FUN_00efa6e0(&local_ce8,-param_8,*(undefined1 *)(param_14 + 0xe98));
              FUN_00416ba0(&local_ce0,&DAT_0145a0c0,local_ce8);
              FUN_019b6e50(&local_20,local_ce0,param_14);
            }
          }
          FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
          FUN_019b9050(local_20,param_14);
        }
      }
      else if (local_e81 == 2) {
        if (*(double *)(param_14 + 0xa0) != 0.0) {
          FUN_00efa6e0(&local_cf8,*(undefined8 *)(param_14 + 0xa0),*(undefined1 *)(param_14 + 0xe98)
                      );
          FUN_00416ad0(&local_cf8,L"*\\s(e)(t");
          FUN_019b6e50(&local_20,local_cf8,param_14);
          dVar4 = (double)FUN_0040c850(param_8);
          if (1e-100 < dVar4) {
            if (-param_8 <= 0.0) {
              FUN_00efa6e0(&local_d10,-param_8,*(undefined1 *)(param_14 + 0xe98));
              FUN_019b6e50(&local_20,local_d10,param_14);
            }
            else {
              FUN_00efa6e0(&local_d08,-param_8,*(undefined1 *)(param_14 + 0xe98));
              FUN_00416ba0(&local_d00,&DAT_0145a0c0,local_d08);
              FUN_019b6e50(&local_20,local_d00,param_14);
            }
          }
          FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
          FUN_019b9050(local_20,param_14);
        }
      }
      else if (local_e81 == 3) {
        FUN_019b6320(&local_20);
        local_ea8 = L"T1 + ";
        local_ea0 = DAT_0210ea10;
        local_e98 = L"T2";
        FUN_00416cd0(&local_d18,5,L"T2 = ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d18,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T3";
        FUN_00416cd0(&local_d20,3,L"T3 = T2 + ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d20,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T4";
        FUN_00416cd0(&local_d28,3,L"T4 = T3 + ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d28,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T5";
        FUN_00416cd0(&local_d30,3,L"T5 = T4 + ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d30,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T6";
        FUN_00416cd0(&local_d38,3,L"T = T5 + ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d38,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        if (*(char *)(param_14 + 100) == '\x01') {
          local_ea8 = L")(t)=";
          FUN_00416cd0(&local_d40,3,L"\\i(v,",*(undefined8 *)(param_14 + 0x68));
          FUN_019b6e50(&local_20,local_d40,param_14);
        }
        else {
          local_ea8 = L")(t)=";
          FUN_00416cd0(&local_d48,3,L"\\i(i,",*(undefined8 *)(param_14 + 0x68));
          FUN_019b6e50(&local_20,local_d48,param_14);
        }
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T1) =>";
        FUN_00416cd0(&local_d50,3,L"(0 <= t) and (t < ",DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d50,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efac60(&local_d58,(*(double *)(param_14 + 0xa0) * local_e80) / param_8,&DAT_0145a100,
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d58,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        local_ea8 = L"T1 <= t) and (t < T2) =>";
        FUN_00416cd0(&local_d60,3,&DAT_0145a2e0,DAT_0210ea10);
        FUN_019b6e50(&local_20,local_d60,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efab80(&local_d68,*(double *)(param_14 + 0xa0) * local_e80,
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d68,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"(T2 <= t) and (t < T3) =>",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efac60(&local_d70,(-*(double *)(param_14 + 0xa0) * local_e80) / param_10,L"(t-T3)",
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d70,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"(T3 <= t) and (t < T4) =>",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efac60(&local_d78,(*(double *)(param_14 + 0xa0) * param_5) / param_11,L"(t-T3)",
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d78,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"(T4 <= t) and (t < T5) =>",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efab30(&local_d80,*(double *)(param_14 + 0xa0) * param_5,
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d80,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"(T5 <= t) and (t < T) =>",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_00efac60(&local_d88,(-*(double *)(param_14 + 0xa0) * param_5) / param_13,L"(t-T)",
                     *(undefined2 *)(param_14 + 0xe98));
        FUN_019b6e50(&local_20,local_d88,param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
        FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",param_14);
        FUN_019b9050(local_20,param_14);
        FUN_019b6320(&local_20);
      }
      else if (local_e81 == 4) {
        local_ca0[0] = local_e80 * 0.5;
        local_ca0[1] = 0.0;
        local_ca0[2] = param_7 * 6.283185307179586;
        local_ca0[3] = -1.5707963267948966;
        local_ca0[4] = 0.0;
        FUN_01456ef0(auStack_ec8,&DAT_0145a100,param_14);
        FUN_019b9050(local_20,param_14);
      }
    }
    else if (local_e81 == 6) {
      FUN_019b6320(&local_20);
      local_ea8 = L"f";
      FUN_00416cd0(&local_e08,3,L"T = 1/",DAT_0210ea10);
      FUN_019b6e50(&local_20,local_e08,param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<abegin> Beginning of the assignment)",param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      if (*(char *)(param_14 + 100) == '\x01') {
        local_ea8 = L")(t)=";
        FUN_00416cd0(&local_e10,3,L"\\i(v,",*(undefined8 *)(param_14 + 0x68));
        FUN_019b6e50(&local_20,local_e10,param_14);
      }
      else {
        local_ea8 = L")(t)=";
        FUN_00416cd0(&local_e18,3,L"\\i(i,",*(undefined8 *)(param_14 + 0x68));
        FUN_019b6e50(&local_20,local_e18,param_14);
      }
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(0 <= t) and (t < T/4) =>",param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_e20,*(double *)(param_14 + 0xa0) * 4.0 * local_e80 * param_7,&DAT_0145a100
                   ,*(undefined2 *)(param_14 + 0xe98));
      FUN_019b6e50(&local_20,local_e20,param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(T/4 <= t) and (t < 3*T/4) =>",param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_e28,*(double *)(param_14 + 0xa0) * -4.0 * local_e80 * param_7,L"(t-T/2)",
                   *(undefined2 *)(param_14 + 0xe98));
      FUN_019b6e50(&local_20,local_e28,param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"(3*T/4 <= t) and (t < T) =>",param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_e30,*(double *)(param_14 + 0xa0) * 4.0 * local_e80 * param_7,L"(t-T)",
                   *(undefined2 *)(param_14 + 0xe98));
      FUN_019b6e50(&local_20,local_e30,param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
      FUN_019b6e50(&local_20,L"\\d(<aend> End of the assignment)",param_14);
      FUN_019b9050(local_20,param_14);
      FUN_019b6320(&local_20);
    }
    else if (local_e81 == 7) {
      local_ca0[0] = local_e80 * 0.5;
      local_ca0[1] = 0.0;
      local_ca0[2] = param_7 * 6.283185307179586;
      local_ca0[3] = 0.0;
      local_ca0[4] = 0.0;
      FUN_01456ef0(auStack_ec8,&DAT_0145a100,param_14);
      FUN_019b9050(local_20,param_14);
    }
    else if ((local_e81 == 0x10) && (*(double *)(param_14 + 0xa0) != 0.0)) {
      FUN_019b6320(&local_20);
      FUN_00efac60(&local_e38,*(undefined8 *)(param_14 + 0xa0),L"d(t)",
                   *(undefined2 *)(param_14 + 0xe98));
      FUN_019b6e50(&local_20,local_e38,param_14);
      FUN_019b9050(local_20,param_14);
    }
  }
  else if ((char)local_e81 < '\x05') {
    if (local_e81 == 4) {
LAB_01459de9:
      if (1 < param_1) {
        if (((char)local_e81 < '\0') || (0x1f < local_e81)) {
          bVar3 = false;
        }
        else {
          bVar3 = (1 << (local_e81 & 0x1f) & 0x10004U) != 0;
        }
        if (bVar3) {
          FUN_019b6e50(&local_20,&DAT_0145a2e0,param_14);
        }
      }
      FUN_01456ef0(auStack_ec8,&DAT_0145a100,param_14);
      if (((char)local_e81 < '\0') || (0x1f < local_e81)) {
        bVar3 = false;
      }
      else {
        bVar3 = (1 << (local_e81 & 0x1f) & 0x10004U) != 0;
      }
      if (bVar3) {
        if (param_1 < 2) {
          FUN_019b6e50(&local_20,L"*\\s(e)(t",param_14);
        }
        else {
          FUN_019b6e50(&local_20,L")*\\s(e)(t",param_14);
        }
        dVar4 = (double)FUN_0040c850(param_8);
        if (1e-100 < dVar4) {
          if (-param_8 <= 0.0) {
            FUN_00efa6e0(&local_e78,-param_8,*(undefined1 *)(param_14 + 0xe98));
            FUN_019b6e50(&local_20,local_e78,param_14);
          }
          else {
            FUN_00efa6e0(&local_e70,-param_8,*(undefined1 *)(param_14 + 0xe98));
            FUN_00416ba0(&local_e68,&DAT_0145a0c0,local_e70);
            FUN_019b6e50(&local_20,local_e68,param_14);
          }
        }
        FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
      }
      FUN_019b9050(local_20,param_14);
    }
    else if (local_e81 == 1) {
      if (1 < param_1) {
        FUN_019b6e50(&local_20,&DAT_0145a2e0,param_14);
      }
      FUN_01456ef0(auStack_ec8,&DAT_0145a100,param_14);
      if (1 < param_1) {
        FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
      }
      FUN_019b6e50(&local_20,L"*\\s(e)(t)",param_14);
      *(ulonglong *)(param_14 + 0xa0) = *(ulonglong *)(param_14 + 0xa0) ^ 0x8000000000000000;
      if (1 < param_1) {
        FUN_019b6e50(&local_20,&DAT_0145a7b0,param_14);
      }
      FUN_00efa6e0(&local_e48,param_8,*(undefined1 *)(param_14 + 0xe98));
      local_ea8 = L")";
      FUN_00416cd0(&local_e40,3,&DAT_0145a7c4,local_e48);
      FUN_01456ef0(auStack_ec8,local_e40,param_14);
      if (1 < param_1) {
        FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
      }
      FUN_019b6e50(&local_20,L"*\\s(e)(t",param_14);
      dVar4 = (double)FUN_0040c850(param_8);
      if (1e-100 < dVar4) {
        if (-param_8 <= 0.0) {
          FUN_00efa6e0(&local_e60,-param_8,*(undefined1 *)(param_14 + 0xe98));
          FUN_019b6e50(&local_20,local_e60,param_14);
        }
        else {
          FUN_00efa6e0(&local_e58,-param_8,*(undefined1 *)(param_14 + 0xe98));
          FUN_00416ba0(&local_e50,&DAT_0145a0c0,local_e58);
          FUN_019b6e50(&local_20,local_e50,param_14);
        }
      }
      FUN_019b6e50(&local_20,&DAT_0145a0f0,param_14);
      FUN_019b9050(local_20,param_14);
    }
    else if (local_e81 == 2) goto LAB_01459de9;
  }
  else if ((local_e81 == 7) || (local_e81 == 0x10)) goto LAB_01459de9;
  FUN_019b6320(&local_20);
LAB_01459fc6:
  FUN_00414560(&local_e78,0x3a);
  return;
}

