/* Ghidra address: 0044af80 */
/* Ghidra symbol: FUN_0044af80 */


undefined4 FUN_0044af80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_31;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  ushort local_2a;
  
  iVar4 = -1;
  cVar2 = FUN_0044a4b0(param_1,param_2,*(undefined8 *)(param_4 + 0x20));
  if ((cVar2 == '\0') && (cVar2 = FUN_0044a4b0(param_1,param_2,&PTR_DAT_0044b1bc), cVar2 == '\0')) {
    cVar2 = FUN_0044a4b0(param_1,param_2,*(undefined8 *)(param_4 + 0x28));
    if ((cVar2 != '\0') || (cVar2 = FUN_0044a4b0(param_1,param_2,&LAB_0044b1d0), cVar2 != '\0')) {
      iVar4 = 0xc;
    }
  }
  else {
    iVar4 = 0;
  }
  if (-1 < iVar4) {
    FUN_0044a3c0(param_1,param_2);
  }
  cVar2 = FUN_0044a3f0(param_1,param_2,&local_2a,&local_31);
  if (cVar2 == '\0') {
    return 0;
  }
  local_2c = 0;
  local_2e = 0;
  local_30 = 0;
  uVar1 = *(undefined2 *)(param_4 + 0xc);
  cVar2 = FUN_0044a5d0(param_1,param_2,uVar1);
  if (cVar2 != '\0') {
    cVar2 = FUN_0044a3f0(param_1,param_2,&local_2c,&local_31);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_0044a5d0(param_1,param_2,uVar1);
    if (cVar2 != '\0') {
      cVar2 = FUN_0044a3f0(param_1,param_2,&local_2e,&local_31);
      if (cVar2 == '\0') {
        return 0;
      }
      cVar2 = FUN_0044a5d0(param_1,param_2,*(undefined2 *)(param_4 + 0x17a));
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_0044a3f0(param_1,param_2,&local_30,&local_31), cVar2 == '\0')) {
        return 0;
      }
    }
  }
  if (iVar4 < 0) {
    cVar2 = FUN_0044a4b0(param_1,param_2,*(undefined8 *)(param_4 + 0x20));
    if ((cVar2 == '\0') && (cVar2 = FUN_0044a4b0(param_1,param_2,&PTR_DAT_0044b1bc), cVar2 == '\0'))
    {
      cVar2 = FUN_0044a4b0(param_1,param_2,*(undefined8 *)(param_4 + 0x28));
      if ((cVar2 != '\0') || (cVar2 = FUN_0044a4b0(param_1,param_2,&LAB_0044b1d0), cVar2 != '\0')) {
        iVar4 = 0xc;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  if (-1 < iVar4) {
    if (local_2a == 0) {
      return 0;
    }
    if (0xc < local_2a) {
      return 0;
    }
    if (local_2a == 0xc) {
      local_2a = 0;
    }
    local_2a = local_2a + (short)iVar4;
  }
  FUN_0044a3c0(param_1,param_2);
  uVar3 = FUN_00448a10(local_2a,local_2c,local_2e,local_30,param_3);
  return uVar3;
}

