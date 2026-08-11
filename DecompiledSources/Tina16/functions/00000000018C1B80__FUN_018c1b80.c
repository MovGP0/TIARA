/* Ghidra address: 018c1b80 */
/* Ghidra symbol: FUN_018c1b80 */


undefined1 FUN_018c1b80(undefined8 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [56];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_98;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_29 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar1 = auStack_98;
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_00448ed0();
    param_2[0x23] = lVar5;
    param_2[0x13] = param_1[4];
    FUN_0197b7e0(param_2,0);
    if (param_2[0x1f] != 0) {
      (*(code *)param_2[0x1f])(param_2[0x20],param_2);
    }
    if ((*(byte *)(param_2 + 0x14) & 1) != 0) {
      iVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
      puVar1 = local_40;
      if (iVar3 != 1) goto LAB_018c1f69;
    }
    if (param_2[0x25] == 0) {
      lVar5 = FUN_0197b750(param_2);
      param_2[0x25] = lVar5;
    }
    FUN_0197a0c0(param_2[0x25],param_2);
    cVar2 = (**(code **)(*(longlong *)param_2[0x25] + 0xe8))((longlong *)param_2[0x25]);
    if (cVar2 == '\0') {
      FUN_018c1fe0(0,local_40);
      puVar1 = local_40;
    }
    else {
      FUN_0197b810(param_2,*(undefined8 *)(param_2[0x25] + 0x98));
      if ((char)param_2[0xf] != '\0') {
        if (*(longlong *)(param_1[4] + 0x210) == 0) {
          FUN_00414ad0(param_2 + 0x12,&DAT_018c2068);
        }
        else {
          FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 2));
          FUN_00414ad0(param_2 + 0x12,local_48);
        }
      }
      local_29 = 1;
      FUN_01977630(param_1[4],0);
      local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
      local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
      uVar4 = (**(code **)*param_1)(param_1);
      FUN_0180e9b0(param_2[0x12],local_28,uVar4);
      if ((param_2 == *(longlong **)PTR_DAT_020041e8) &&
         (lVar5 = param_1[4], *(longlong *)(lVar5 + 0x3f8) != 0)) {
        (**(code **)(lVar5 + 0x3f8))(*(undefined8 *)(lVar5 + 0x400),lVar5);
      }
      FUN_018c17e0(auStack_98);
      if ((param_2 == *(longlong **)PTR_DAT_020041e8) &&
         (lVar5 = param_1[4], *(longlong *)(lVar5 + 0x2d8) != 0)) {
        (**(code **)(lVar5 + 0x2d8))(*(undefined8 *)(lVar5 + 0x2e0),lVar5);
      }
      FUN_00410f20(local_28);
      FUN_00410f20(local_20);
      (**(code **)(*(longlong *)param_2[0x25] + 0xf0))((longlong *)param_2[0x25]);
      lVar5 = FUN_0197b750(param_2);
      puVar1 = local_40;
      if (param_2[0x25] == lVar5) {
        param_2[0x25] = 0;
      }
    }
  }
LAB_018c1f69:
  local_40 = puVar1;
  FUN_00414560(&local_60,4);
  return local_29;
}

