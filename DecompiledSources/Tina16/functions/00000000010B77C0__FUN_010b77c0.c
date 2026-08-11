/* Ghidra address: 010b77c0 */
/* Ghidra symbol: FUN_010b77c0 */


undefined1
FUN_010b77c0(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_d;
  ushort local_c;
  char local_9;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_31 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    cVar1 = FUN_01cf0620(param_1,param_2,0,0,CONCAT44(uVar3,0xffffffff));
    if (cVar1 == '\0') {
      FUN_01d30f00(*param_2,param_1 + 0x58,8);
      FUN_01d30f00(*param_2,param_1 + 0x60,8);
      iVar2 = param_5 + -0x10;
      if (0x10 < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x68,4);
        *(undefined1 *)(param_1 + 0x80) = 0;
        FUN_01d30f00(*param_2,&local_9,1);
        *(bool *)(param_1 + 0x81) = local_9 < '\0';
        if (local_9 < '\0') {
          local_9 = -local_9;
        }
        *(char *)(param_1 + 0x80) = local_9;
        FUN_01d30f00(*param_2,param_1 + 0x6c,4);
        param_5 = param_5 + -0x19;
        if (0x14 < param_4) {
          FUN_01d30f00(*param_2,param_1 + 0x182,1);
          FUN_01d312f0(*param_2,&local_18);
          uVar4 = FUN_00414480(param_1 + 400);
          FUN_01b24160(&local_20,local_18,uVar4);
          FUN_00414ad0(param_1 + 0x188,local_20);
          iVar2 = FUN_01d31350(local_18);
          param_5 = (param_5 - iVar2) + -1;
        }
        if (param_4 < 0x12) {
          *(undefined1 *)(param_1 + 0x82) = 0;
        }
        else {
          FUN_01d312b0(*param_2,param_1 + 0x82,0xff);
          FUN_004169a0(&local_28,param_1 + 0x82);
          iVar2 = FUN_01d31350(local_28);
          param_5 = param_5 - iVar2;
        }
        if (param_4 < 0x16) {
          local_d = '\0';
        }
        else {
          FUN_01d30f00(*param_2,&local_d,1);
          param_5 = param_5 + -1;
        }
        iVar2 = param_5;
        if (0x16 < param_4) {
          FUN_01d316c0(*param_2,param_1 + 0x1a0);
          FUN_004168e0(&local_30,*(undefined8 *)(param_1 + 0x1a0));
          iVar2 = FUN_01d31290(local_30);
          iVar2 = param_5 - iVar2;
        }
      }
      param_5 = iVar2;
      local_c = *(ushort *)(param_1 + 0x28);
      if (local_d == '\0') {
        iVar2 = FUN_01cf0700(param_1,*param_2);
        FUN_010b6e50(param_2,param_1 + 0x38,param_5 - iVar2,param_4,param_1 + 0x2c,param_1 + 0x30,
                     &local_c);
      }
      else {
        FUN_010b7070(*param_2,param_4,param_1 + 0x38,param_1 + 0x2c,param_1 + 0x30,&local_c);
        *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
      }
      *(uint *)(param_1 + 0x28) = (uint)local_c;
      if (param_4 < 0x14) {
        if (param_4 < 0x13) {
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x78) * 100,
                                     *(int *)(param_1 + 0x70) * 0x9ec);
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x7c) * 100,
                                     *(int *)(param_1 + 0x74) * 0x9ec);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
        }
        else {
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x2c),
                                     *(int *)(param_1 + 0x78) *
                                     *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98),
                                     *(int *)(param_1 + 0x70) * 0x9ec);
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x30),
                                     *(int *)(param_1 + 0x7c) *
                                     *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98),
                                     *(int *)(param_1 + 0x74) * 0x9ec);
          *(undefined4 *)(param_1 + 0x30) = uVar3;
        }
      }
    }
    else {
      local_31 = 1;
    }
  }
  else {
    local_31 = 1;
  }
  FUN_00414520(&local_30);
  FUN_00414560(&local_28,3);
  return local_31;
}

