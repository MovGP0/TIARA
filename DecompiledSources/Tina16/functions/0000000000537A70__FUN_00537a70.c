/* Ghidra address: 00537a70 */
/* Ghidra symbol: FUN_00537a70 */


undefined8 * FUN_00537a70(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0040d200(param_2,0x10,0);
  uVar5 = FUN_00536190(param_1);
  *(undefined *)(param_2 + 1) = (&DAT_01dd7aa0)[uVar5 & 0xff];
  uVar5 = FUN_00536190(param_1);
  uVar5 = uVar5 & 0xff;
  if (uVar5 < 10) {
    if (uVar5 < 5) {
      if (uVar5 == 4) {
        uVar6 = FUN_00538390(param_1);
        *param_2 = uVar6;
        goto code_r0x00537ceb;
      }
      if (uVar5 == 1) {
        uVar4 = FUN_00537730(param_1);
        *(undefined4 *)param_2 = uVar4;
        goto code_r0x00537ceb;
      }
      if (uVar5 == 2) {
        uVar2 = FUN_00537730(param_1);
        *(undefined1 *)param_2 = uVar2;
        goto code_r0x00537ceb;
      }
      if (uVar5 == 3) {
        cVar1 = FUN_00560540(param_1,1);
        if (cVar1 == '\0') {
          uVar4 = FUN_00537730(param_1);
          *(undefined4 *)param_2 = uVar4;
        }
        else {
          *(undefined1 *)(param_2 + 1) = 1;
          uVar2 = FUN_005377b0(param_1);
          *(undefined1 *)param_2 = uVar2;
        }
        goto code_r0x00537ceb;
      }
    }
    else {
      if (uVar5 == 5) goto LAB_00537bf5;
      if (uVar5 == 7) {
        uVar6 = FUN_00536e10(param_1);
        *param_2 = uVar6;
        goto code_r0x00537ceb;
      }
      if (uVar5 == 9) {
        uVar3 = FUN_00537730(param_1);
        *(undefined2 *)param_2 = uVar3;
        goto code_r0x00537ceb;
      }
    }
  }
  else if (uVar5 < 0x11) {
    if (uVar5 == 0x10) {
      uVar6 = FUN_00538390(param_1);
      *param_2 = uVar6;
      goto code_r0x00537ceb;
    }
    if (uVar5 - 10 < 2) goto LAB_00537bf5;
    if (uVar5 == 0xc) {
      uVar6 = FUN_00538390(param_1);
      *param_2 = uVar6;
      goto code_r0x00537ceb;
    }
    if (uVar5 == 0xf) {
      FUN_00537950(param_1,&local_18);
      *param_2 = local_18;
      goto code_r0x00537ceb;
    }
  }
  else {
    if (uVar5 == 0x12) {
LAB_00537bf5:
      FUN_005379a0(param_1,&local_10);
      *param_2 = local_10;
      goto code_r0x00537ceb;
    }
    if (uVar5 == 0x13) {
      uVar6 = FUN_00537470(param_1);
      *param_2 = uVar6;
      goto code_r0x00537ceb;
    }
    if (uVar5 - 0x14 < 2) {
      uVar6 = FUN_005604f0(param_1,1);
      *param_2 = uVar6;
      goto code_r0x00537ceb;
    }
  }
  uVar6 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
  FUN_004134c0(uVar6);
code_r0x00537ceb:
  FUN_0041b800(&local_18);
  FUN_00414480(&local_10);
  return param_2;
}

