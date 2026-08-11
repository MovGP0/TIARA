/* Ghidra address: 00f4af00 */
/* Ghidra symbol: FUN_00f4af00 */


undefined8 * FUN_00f4af00(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_1b;
  undefined1 local_1a;
  byte local_19 [9];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = *param_2;
  FUN_00414ad0(param_1,*(undefined8 *)(lVar1 + 0x98));
  FUN_01cfde70(lVar1,(char)param_2[1],0,local_19,&local_1a,&local_1b);
  if (local_19[0] < 6) {
    if (local_19[0] == 5) {
      if (local_1b < 5) {
        if (local_1b != 4) {
          if (local_1b == 1) {
            FUN_00de8980(&local_40,*(byte *)((longlong)param_2 + 9) + 0x22a,local_res18[0]);
            FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_40);
          }
          else if (local_1b == 2) {
            FUN_00de8980(&local_48,*(byte *)((longlong)param_2 + 9) + 0x23b,local_res18[0]);
            FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_48);
          }
          else if (local_1b == 3) {
            FUN_00de8980(&local_50,*(byte *)((longlong)param_2 + 9) + 0x232,local_res18[0]);
            FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_50);
          }
          goto code_r0x00f4b2e4;
        }
      }
      else {
        if (local_1b == 5) {
          FUN_00de8980(&local_60,*(byte *)((longlong)param_2 + 9) + 0x23f,local_res18[0]);
          FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_60);
          goto code_r0x00f4b2e4;
        }
        if (local_1b == 6) {
          FUN_00de8980(&local_68,*(byte *)((longlong)param_2 + 9) + 0x23d,local_res18[0]);
          FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_68);
          goto code_r0x00f4b2e4;
        }
        if (local_1b != 7) goto code_r0x00f4b2e4;
      }
      FUN_00de8980(&local_58,*(byte *)((longlong)param_2 + 9) + 0x22f,local_res18[0]);
      FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_58);
      goto code_r0x00f4b2e4;
    }
    if (local_19[0] == 3) goto LAB_00f4affa;
    if (local_19[0] != 4) goto code_r0x00f4b2e4;
  }
  else {
    if (local_19[0] == 6) {
LAB_00f4affa:
      FUN_01cfd0f0(*param_2,local_30,*(byte *)(param_2 + 1) - 1,local_res18[0]);
      FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_30[0]);
      goto code_r0x00f4b2e4;
    }
    if (local_19[0] != 7) goto code_r0x00f4b2e4;
  }
  uVar2 = FUN_0172dba0(&PTR_FUN_01729b58,1,*param_2,(char)param_2[1] + -1,local_res18[0],1);
  FUN_0172ddd0(uVar2,&local_38,*(byte *)((longlong)param_2 + 9) - 1);
  FUN_00416cd0(param_1,3,*param_1,&LAB_00f4b34c,local_38);
  FUN_00410f20(uVar2);
code_r0x00f4b2e4:
  FUN_00414560(&local_68,8);
  FUN_00414480(local_res18);
  return param_1;
}

